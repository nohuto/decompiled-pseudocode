/*
 * XREFs of MiInsertNewProcess @ 0x1403354C8
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406ED8E8 (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x1407CAD44 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInsertNewProcess(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C4ECC0, &LockHandle);
  v4 = (_QWORD *)qword_140C4DCB0;
  v5 = a1 + 248;
  if ( *(__int64 **)qword_140C4DCB0 != &qword_140C4DCA8 )
    goto LABEL_7;
  *v5 = &qword_140C4DCA8;
  a1[249] = v4;
  *v4 = v5;
  qword_140C4DCB0 = (__int64)(a1 + 248);
  if ( a2 )
  {
    v6 = *(_QWORD **)(a2 + 24);
    v7 = a1 + 148;
    if ( *v6 == a2 + 16 )
    {
      *v7 = a2 + 16;
      a1[149] = v6;
      *v6 = v7;
      *(_QWORD *)(a2 + 24) = v7;
      goto LABEL_5;
    }
LABEL_7:
    __fastfail(3u);
  }
LABEL_5:
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
        v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
