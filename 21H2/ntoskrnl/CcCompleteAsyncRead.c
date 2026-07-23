/*
 * XREFs of CcCompleteAsyncRead @ 0x140302390
 * Callers:
 *     CcCompleteAsyncReadWorker @ 0x14024A930 (CcCompleteAsyncReadWorker.c)
 *     CcPostWorkQueueAsyncRead @ 0x1403033B4 (CcPostWorkQueueAsyncRead.c)
 *     CcAsyncReadWorker @ 0x1403B7AC0 (CcAsyncReadWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IoDiskIoAttributionDereference @ 0x140207954 (IoDiskIoAttributionDereference.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetPagePriorityThread @ 0x1402E7020 (PsGetPagePriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140302334 (PsSetPagePriorityThread.c)
 *     CcDecrementOpenCount @ 0x14031DE8C (CcDecrementOpenCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CcCopyReadExceptionFilter @ 0x1404EA214 (CcCopyReadExceptionFilter.c)
 *     CcMapAndCopyFromCache @ 0x140706930 (CcMapAndCopyFromCache.c)
 */

__int64 __fastcall CcCompleteAsyncRead(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rsi
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // r8
  PVOID MappedSystemVa; // rax
  __int64 v8; // rcx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v14; // eax
  bool v15; // zf
  int PagePriorityThread; // [rsp+7Ch] [rbp-C4h]
  int v17; // [rsp+80h] [rbp-C0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-A0h]
  __int64 v20; // [rsp+A8h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-90h]
  __int64 v22; // [rsp+B8h] [rbp-88h]
  PMDL MemoryDescriptorList; // [rsp+C0h] [rbp-80h]
  PVOID v24; // [rsp+C8h] [rbp-78h]
  int v25[2]; // [rsp+D0h] [rbp-70h]
  __int64 v26; // [rsp+D8h] [rbp-68h]
  __int64 v27; // [rsp+E0h] [rbp-60h]
  struct _KTHREAD *v28; // [rsp+E8h] [rbp-58h]
  __int64 v29; // [rsp+158h] [rbp+18h] BYREF
  unsigned int v30; // [rsp+160h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
  LODWORD(v29) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = *(_QWORD *)(a1 + 16);
  v22 = v2;
  *(_QWORD *)v25 = *(_QWORD *)(a1 + 32);
  v30 = *(_DWORD *)(a1 + 40);
  v17 = *(_DWORD *)(a1 + 56);
  MemoryDescriptorList = *(PMDL *)(a1 + 64);
  v26 = *(_QWORD *)(a1 + 72);
  v3 = v26;
  v4 = *(_QWORD *)(a1 + 80);
  v20 = v4;
  v5 = *(_QWORD *)(a1 + 104);
  v19 = v5;
  PsSetPagePriorityThread(v6, v17);
  v28 = KeGetCurrentThread();
  v28[1].TrapFrame = (_KTRAP_FRAME *)7;
  if ( *(int *)v3 >= 0 )
  {
    *(_DWORD *)v3 = 0;
    *(_QWORD *)(v3 + 8) = v30;
    if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
      MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
    v24 = MappedSystemVa;
    if ( MappedSystemVa )
      CcMapAndCopyFromCache(v25[0], MappedSystemVa, (__int64)&v29, v17, v5);
    else
      *(_DWORD *)v3 = -1073741670;
  }
  if ( v5 )
    IoDiskIoAttributionDereference(v5);
  if ( (_DWORD)v29 )
    ++CcNumberAsyncReadRefaulted;
  if ( v4 && *(_QWORD *)v4 )
    (*(void (__fastcall **)(_QWORD))v4)(*(_QWORD *)(v4 + 8));
  KeGetCurrentThread()[1].TrapFrame = 0LL;
  PsSetPagePriorityThread((__int64)CurrentThread, PagePriorityThread);
  _InterlockedAdd((volatile signed __int32 *)(v2 + 520), 0xFFFFFFFF);
  v8 = *(_QWORD *)(a1 + 128);
  v27 = v8;
  if ( v8 != *(_QWORD *)(v2 + 528) )
    KeBugCheckEx(0x34u, 0x643uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 128), &LockHandle);
  CcDecrementOpenCount(v2);
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
        v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
