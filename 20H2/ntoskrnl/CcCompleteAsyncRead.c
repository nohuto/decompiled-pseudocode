/*
 * XREFs of CcCompleteAsyncRead @ 0x140249324
 * Callers:
 *     CcPostWorkQueueAsyncRead @ 0x140248F44 (CcPostWorkQueueAsyncRead.c)
 *     CcCompleteAsyncReadWorker @ 0x14032ADE0 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncReadWorker @ 0x1403B6310 (CcAsyncReadWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsSetPagePriorityThread @ 0x140249634 (PsSetPagePriorityThread.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402864D0 (MmMapLockedPagesSpecifyCache.c)
 *     PsGetPagePriorityThread @ 0x14028EE10 (PsGetPagePriorityThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x14029A71C (CcDecrementOpenCount.c)
 *     IoDiskIoAttributionDereference @ 0x1402EEE34 (IoDiskIoAttributionDereference.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CcCopyReadExceptionFilter @ 0x1404E8444 (CcCopyReadExceptionFilter.c)
 *     CcMapAndCopyFromCache @ 0x1406809D0 (CcMapAndCopyFromCache.c)
 */

__int64 __fastcall CcCompleteAsyncRead(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // r8
  PVOID MappedSystemVa; // rax
  __int64 v11; // rcx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v17; // eax
  bool v18; // zf
  unsigned int PagePriorityThread; // [rsp+7Ch] [rbp-C4h]
  unsigned int v20; // [rsp+80h] [rbp-C0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-A0h]
  __int64 v23; // [rsp+A8h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-90h]
  __int64 v25; // [rsp+B8h] [rbp-88h]
  PMDL MemoryDescriptorList; // [rsp+C0h] [rbp-80h]
  PVOID v27; // [rsp+C8h] [rbp-78h]
  int v28[2]; // [rsp+D0h] [rbp-70h]
  __int64 v29; // [rsp+D8h] [rbp-68h]
  __int64 v30; // [rsp+E0h] [rbp-60h]
  struct _KTHREAD *v31; // [rsp+E8h] [rbp-58h]
  __int64 v32; // [rsp+158h] [rbp+18h] BYREF
  unsigned int v33; // [rsp+160h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  PagePriorityThread = PsGetPagePriorityThread(CurrentThread, a2, CurrentThread, a4);
  LODWORD(v32) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = *(_QWORD *)(a1 + 16);
  v25 = v5;
  *(_QWORD *)v28 = *(_QWORD *)(a1 + 32);
  v33 = *(_DWORD *)(a1 + 40);
  v20 = *(_DWORD *)(a1 + 56);
  MemoryDescriptorList = *(PMDL *)(a1 + 64);
  v29 = *(_QWORD *)(a1 + 72);
  v6 = v29;
  v7 = *(_QWORD *)(a1 + 80);
  v23 = v7;
  v8 = *(_QWORD *)(a1 + 104);
  v22 = v8;
  PsSetPagePriorityThread(v9, v20);
  v31 = KeGetCurrentThread();
  v31[1].TrapFrame = (_KTRAP_FRAME *)7;
  if ( *(int *)v6 >= 0 )
  {
    *(_DWORD *)v6 = 0;
    *(_QWORD *)(v6 + 8) = v33;
    if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
      MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
    v27 = MappedSystemVa;
    if ( MappedSystemVa )
      CcMapAndCopyFromCache(v28[0], MappedSystemVa, (__int64)&v32, v20, v8);
    else
      *(_DWORD *)v6 = -1073741670;
  }
  if ( v8 )
    IoDiskIoAttributionDereference(v8);
  if ( (_DWORD)v32 )
    ++CcNumberAsyncReadRefaulted;
  if ( v7 && *(_QWORD *)v7 )
    (*(void (__fastcall **)(_QWORD))v7)(*(_QWORD *)(v7 + 8));
  KeGetCurrentThread()[1].TrapFrame = 0LL;
  PsSetPagePriorityThread(CurrentThread, PagePriorityThread);
  _InterlockedAdd((volatile signed __int32 *)(v5 + 520), 0xFFFFFFFF);
  v11 = *(_QWORD *)(a1 + 128);
  v30 = v11;
  if ( v11 != *(_QWORD *)(v5 + 528) )
    KeBugCheckEx(0x34u, 0x643uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11 + 128), &LockHandle);
  CcDecrementOpenCount(v5);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v18 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
