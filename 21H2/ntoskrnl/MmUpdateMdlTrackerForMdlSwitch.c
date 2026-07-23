/*
 * XREFs of MmUpdateMdlTrackerForMdlSwitch @ 0x1405315D8
 * Callers:
 *     VmProbeAndLockPages @ 0x1405A2CA0 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x1405A2D40 (VmUnlockPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     MiValidateMdlTracker @ 0x140531218 (MiValidateMdlTracker.c)
 */

__int64 __fastcall MmUpdateMdlTrackerForMdlSwitch(ULONG_PTR BugCheckParameter3, int a2)
{
  __int64 result; // rax
  PEPROCESS v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 *i; // rbx
  _BOOL8 v8; // r8
  ULONG_PTR v9; // r12
  unsigned __int64 *v10; // r15
  __int64 (__fastcall *v11)(unsigned __int64, __int64); // rbp
  unsigned __int64 v12; // rcx
  _QWORD *v13; // r14
  int v14; // eax
  _QWORD *v15; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v19; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) == 0 )
    return result;
  v5 = *(PEPROCESS *)(BugCheckParameter3 + 16);
  if ( !v5 )
    v5 = PsInitialSystemProcess;
  v6 = v5[1].ActiveProcessors.Bitmap[11];
  if ( !v6 )
    return result;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 24), &LockHandle);
  if ( !a2 )
  {
    i = *(unsigned __int64 **)(v6 + 8);
    if ( !i )
    {
LABEL_22:
      if ( *(_DWORD *)(v6 + 32) )
        KeBugCheckEx(0x76u, 9uLL, BugCheckParameter3, v5[1].Affinity.Bitmap[14], v5[1].ActiveProcessors.Bitmap[11]);
      goto LABEL_30;
    }
    v12 = *(_QWORD *)(BugCheckParameter3 + 48);
    while ( 1 )
    {
      if ( v12 < i[8] )
      {
        i = (unsigned __int64 *)*i;
      }
      else
      {
        if ( v12 <= i[8] )
        {
          i[3] = BugCheckParameter3;
          MiValidateMdlTracker((ULONG_PTR)i, 1);
          RtlAvlRemoveNode((unsigned __int64 *)(v6 + 8), i);
          v10 = (unsigned __int64 *)v6;
          v11 = MiLockTrackerCompare;
          v9 = BugCheckParameter3;
          goto LABEL_25;
        }
        i = (unsigned __int64 *)i[1];
      }
      if ( !i )
        goto LABEL_22;
    }
  }
  for ( i = *(unsigned __int64 **)v6; ; i = (unsigned __int64 *)i[1] )
  {
    while ( 1 )
    {
      if ( !i )
      {
        if ( *(_DWORD *)(v6 + 32) )
          KeBugCheckEx(0x76u, 8uLL, BugCheckParameter3, v5[1].Affinity.Bitmap[14], v5[1].ActiveProcessors.Bitmap[11]);
        goto LABEL_30;
      }
      if ( BugCheckParameter3 >= i[3] )
        break;
      i = (unsigned __int64 *)*i;
    }
    if ( BugCheckParameter3 <= i[3] )
      break;
  }
  MiValidateMdlTracker((ULONG_PTR)i, 1);
  i[3] &= ~0x8000000000000000uLL;
  RtlAvlRemoveNode((unsigned __int64 *)v6, i);
  v9 = *(_QWORD *)(BugCheckParameter3 + 48);
  v10 = (unsigned __int64 *)(v6 + 8);
  v11 = MiLockSwitchedMdlTrackerCompare;
LABEL_25:
  v13 = (_QWORD *)*v10;
  LOBYTE(v8) = 0;
  if ( !*v10 )
    goto LABEL_29;
  while ( 1 )
  {
    v14 = ((__int64 (__fastcall *)(ULONG_PTR, _QWORD *, _BOOL8))v11)(v9, v13, v8);
    if ( v14 <= 0 )
      break;
    v15 = (_QWORD *)v13[1];
    if ( !v15 )
    {
      LOBYTE(v8) = 1;
      goto LABEL_29;
    }
LABEL_41:
    v13 = v15;
  }
  if ( v14 >= 0 )
    KeBugCheckEx(0xD9u, 2uLL, (ULONG_PTR)v13, BugCheckParameter3, *(_QWORD *)(v6 + 16));
  v15 = (_QWORD *)*v13;
  if ( *v13 )
    goto LABEL_41;
  LOBYTE(v8) = 0;
LABEL_29:
  RtlAvlInsertNodeEx(v10, (unsigned __int64)v13, v8, i);
LABEL_30:
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
        v19 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v19 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
