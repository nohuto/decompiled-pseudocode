/*
 * XREFs of ExReleaseResourceForThreadLite @ 0x1402FEF50
 * Callers:
 *     CcUnpinDataForThread @ 0x140869C70 (CcUnpinDataForThread.c)
 * Callees:
 *     ExpReleaseResourceSharedForThreadLite @ 0x140221690 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140223290 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KxWaitForLockOwnerShip @ 0x1402950A0 (KxWaitForLockOwnerShip.c)
 *     ExpFastResourceLegacyRelease @ 0x14038DF4C (ExpFastResourceLegacyRelease.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051488C (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall ExReleaseResourceForThreadLite(PERESOURCE Resource, ERESOURCE_THREAD ResourceThreadId)
{
  __int16 v4; // ax
  unsigned __int8 v5; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v7; // rdx
  _QWORD *v8; // rdx
  struct _KTHREAD *v9; // r8
  USHORT Flag; // cx
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rdx
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  _QWORD v15[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+40h] [rbp-18h]

  if ( (Resource->Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v4 = Resource->Flag & 1;
  if ( v4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( v4 )
  {
    if ( (struct _KTHREAD *)ResourceThreadId != KeGetCurrentThread() )
      KeBugCheckEx(0x1C6u, 0x11uLL, (ULONG_PTR)Resource, ResourceThreadId, 0LL);
    ExpFastResourceLegacyRelease((ULONG_PTR)Resource);
  }
  else
  {
    v16 = 0LL;
    v15[0] = 0LL;
    v15[1] = &Resource->SpinLock;
    v5 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v5 <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (v5 + 1)) & 4;
    }
    LOBYTE(v16) = v5;
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = CurrentPrcb->SchedulerAssist;
    if ( v7 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v14 = v7[6];
        v7[6] = v14 + 1;
        if ( v14 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v15, &Resource->SpinLock);
    }
    else
    {
      v8 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&Resource->SpinLock, (__int64)v15);
      if ( v8 )
        KxWaitForLockOwnerShip((__int64)v15, v8);
    }
    v9 = KeGetCurrentThread();
    Flag = Resource->Flag;
    if ( ((Flag & 1) != 0 || ExpResourceEnforceOwnerTransfer)
      && (ResourceThreadId & 3) != 3
      && (struct _KTHREAD *)ResourceThreadId != v9 )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)v9, ResourceThreadId, 0LL);
    }
    if ( (Flag & 0x80u) != 0 )
      ExpReleaseResourceExclusiveForThreadLite((ULONG_PTR)Resource, ResourceThreadId, v15);
    else
      ExpReleaseResourceSharedForThreadLite((ULONG_PTR)Resource, ResourceThreadId, v15);
  }
}
