/*
 * XREFs of MiReplicatePteChange @ 0x1403A4694
 * Callers:
 *     MiZeroAndFlushPtes @ 0x1402180C0 (MiZeroAndFlushPtes.c)
 *     MiDeleteSystemPageTable @ 0x140234FA0 (MiDeleteSystemPageTable.c)
 *     MiCreateSystemPageTable @ 0x140296560 (MiCreateSystemPageTable.c)
 *     MiDeleteVaTail @ 0x140345880 (MiDeleteVaTail.c)
 *     MiDecommitLargePoolVa @ 0x140370830 (MiDecommitLargePoolVa.c)
 *     MiReplicatePfnDatabaseMappings @ 0x14052F16C (MiReplicatePfnDatabaseMappings.c)
 *     MiInitializeShadowPageTable @ 0x1407A0568 (MiInitializeShadowPageTable.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     MiReplicatePteChangeToProcess @ 0x1403A47F8 (MiReplicatePteChangeToProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReplicatePteChange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rdx
  _KPROCESS *Process; // r15
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v7; // rsi
  __int64 *v8; // rdi
  __int64 *i; // rbx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  _KPROCESS *v12; // rcx
  int DirectoryTableBase_high; // eax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = a1;
  v4 = 3LL;
  do
  {
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v4;
  }
  while ( v4 );
  Process = KeGetCurrentThread()->ApcState.Process;
  LeafVa = MiGetLeafVa(a1);
  if ( (unsigned int)MiGetSystemRegionType(LeafVa) == 1 )
  {
    v7 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
    v8 = (__int64 *)(v7 + 16);
  }
  else
  {
    v7 = 0LL;
    v8 = &qword_140C4DE68;
  }
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  for ( i = (__int64 *)*v8; i != v8; i = (__int64 *)*i )
  {
    v12 = (_KPROCESS *)((char *)i + (v7 != 0 ? -1184LL : -1984LL));
    DirectoryTableBase_high = HIDWORD(v12[1].DirectoryTableBase);
    if ( (DirectoryTableBase_high & 0x800000) == 0 )
    {
      if ( (DirectoryTableBase_high & 0xC00) != 0 && (DirectoryTableBase_high & 0x80u) == 0 )
      {
        if ( v12 != Process )
          MiReplicatePteChangeToProcess(v12, v3, a2);
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)&v12[1].DirectoryTableBase + 1, 0x800000u);
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v16 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
