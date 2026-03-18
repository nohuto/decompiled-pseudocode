/*
 * XREFs of ExReleaseResourceForThreadLite @ 0x1403283B0
 * Callers:
 *     CcUnpinDataForThread @ 0x140864250 (CcUnpinDataForThread.c)
 * Callees:
 *     ExpReleaseResourceSharedForThreadLite @ 0x140208710 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14020A310 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     ExpFastResourceLegacyRelease @ 0x14038BA8C (ExpFastResourceLegacyRelease.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall ExReleaseResourceForThreadLite(PERESOURCE Resource, ERESOURCE_THREAD ResourceThreadId)
{
  _DWORD *SchedulerAssist; // r9
  USHORT Flag; // ax
  __int64 v6; // r8
  __int16 v7; // ax
  unsigned __int8 v8; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v10; // rdx
  _QWORD *v11; // rdx
  struct _KTHREAD *v12; // r8
  USHORT v13; // cx
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rdx
  int v16; // eax
  _QWORD v17[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-18h]

  Flag = Resource->Flag;
  v6 = (unsigned __int8)Flag;
  LOBYTE(v6) = Flag & 0x41;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v7 = Resource->Flag & 1;
  if ( v7 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( v7 )
  {
    if ( (struct _KTHREAD *)ResourceThreadId != KeGetCurrentThread() )
      KeBugCheckEx(0x1C6u, 0x11uLL, (ULONG_PTR)Resource, ResourceThreadId, 0LL);
    ExpFastResourceLegacyRelease((ULONG_PTR)Resource);
  }
  else
  {
    v18 = 0LL;
    v17[0] = 0LL;
    v17[1] = &Resource->SpinLock;
    v8 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v8 <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v6 = (-1 << (v8 + 1)) & 4u | SchedulerAssist[5];
      SchedulerAssist[5] = v6;
    }
    LOBYTE(v18) = v8;
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = CurrentPrcb->SchedulerAssist;
    if ( v10 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v16 = v10[6];
        v10[6] = v16 + 1;
        if ( v16 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v17, &Resource->SpinLock);
    }
    else
    {
      v11 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&Resource->SpinLock, (__int64)v17);
      if ( v11 )
        KxWaitForLockOwnerShip((__int64)v17, v11, v6, (__int64)SchedulerAssist);
    }
    v12 = KeGetCurrentThread();
    v13 = Resource->Flag;
    if ( ((v13 & 1) != 0 || ExpResourceEnforceOwnerTransfer)
      && (ResourceThreadId & 3) != 3
      && (struct _KTHREAD *)ResourceThreadId != v12 )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)v12, ResourceThreadId, 0LL);
    }
    if ( (v13 & 0x80u) != 0 )
      ExpReleaseResourceExclusiveForThreadLite(
        (ULONG_PTR)Resource,
        ResourceThreadId,
        (signed __int64)v17,
        (__int64)SchedulerAssist);
    else
      ExpReleaseResourceSharedForThreadLite(
        (ULONG_PTR)Resource,
        ResourceThreadId,
        v17,
        (unsigned __int64)SchedulerAssist);
  }
}
