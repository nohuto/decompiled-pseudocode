/*
 * XREFs of ExpReleaseResourceForThreadLite @ 0x1402FDBE0
 * Callers:
 *     SeAccessCheckByType @ 0x1402FBEC0 (SeAccessCheckByType.c)
 * Callees:
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402B02B0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1402B1740 (ExpReleaseResourceSharedForThreadLite.c)
 *     KxWaitForLockOwnerShip @ 0x140311C70 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045A10C (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall ExpReleaseResourceForThreadLite(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  volatile __int64 *v2; // rdi
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v7; // rdx
  struct _KTHREAD *CurrentThread; // r8
  __int16 v9; // cx
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  _QWORD v13[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  v2 = (volatile __int64 *)(BugCheckParameter1 + 96);
  v14 = 0LL;
  v13[1] = BugCheckParameter1 + 96;
  v13[0] = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LOBYTE(v14) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = CurrentPrcb->SchedulerAssist;
  if ( v7 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v12 = v7[6];
      v7[6] = v12 + 1;
      if ( v12 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v13, v2);
  }
  else if ( _InterlockedExchange64(v2, (__int64)v13) )
  {
    KxWaitForLockOwnerShip(v13);
  }
  CurrentThread = KeGetCurrentThread();
  v9 = *(_WORD *)(BugCheckParameter1 + 26);
  if ( ((v9 & 1) != 0 || ExpResourceEnforceOwnerTransfer)
    && (BugCheckParameter2 & 3) != 3
    && (struct _KTHREAD *)BugCheckParameter2 != CurrentThread )
  {
    KeBugCheckEx(0x16Eu, BugCheckParameter1, (ULONG_PTR)CurrentThread, BugCheckParameter2, 0LL);
  }
  if ( (v9 & 0x80u) != 0 )
    return ExpReleaseResourceExclusiveForThreadLite(BugCheckParameter1, BugCheckParameter2, v13);
  else
    return ExpReleaseResourceSharedForThreadLite(BugCheckParameter1, BugCheckParameter2, v13);
}
