/*
 * XREFs of CcCompleteAsyncRead @ 0x1402C7C20
 * Callers:
 *     CcPostWorkQueueAsyncRead @ 0x1402C8154 (CcPostWorkQueueAsyncRead.c)
 *     CcCompleteAsyncReadWorker @ 0x14035A2B0 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncReadWorker @ 0x1403B4950 (CcAsyncReadWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14021BA60 (MmMapLockedPagesSpecifyCache.c)
 *     IoDiskIoAttributionDereference @ 0x14027A2C4 (IoDiskIoAttributionDereference.c)
 *     PsGetPagePriorityThread @ 0x1402B8E40 (PsGetPagePriorityThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1402C0EE4 (CcDecrementOpenCount.c)
 *     PsSetPagePriorityThread @ 0x1402C7BC4 (PsSetPagePriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CcCopyReadExceptionFilter @ 0x1404E4EB4 (CcCopyReadExceptionFilter.c)
 *     CcMapAndCopyFromCache @ 0x1405FCB10 (CcMapAndCopyFromCache.c)
 */

__int64 __fastcall CcCompleteAsyncRead(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // r8
  int v8; // r9d
  int v9; // edx
  PVOID MappedSystemVa; // rax
  __int64 v11; // rcx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v17; // eax
  bool v18; // zf
  int PagePriorityThread; // [rsp+7Ch] [rbp-C4h]
  int v20; // [rsp+80h] [rbp-C0h]
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
  int v33; // [rsp+160h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
  LODWORD(v32) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = *(_QWORD *)(a1 + 16);
  v25 = v2;
  *(_QWORD *)v28 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v33 = *(_DWORD *)(a1 + 40);
  v20 = *(_DWORD *)(a1 + 56);
  MemoryDescriptorList = *(PMDL *)(a1 + 64);
  v29 = *(_QWORD *)(a1 + 72);
  v4 = v29;
  v5 = *(_QWORD *)(a1 + 80);
  v23 = v5;
  v6 = *(_QWORD *)(a1 + 104);
  v22 = v6;
  PsSetPagePriorityThread(v7, v20);
  v31 = KeGetCurrentThread();
  v31[1].TrapFrame = (_KTRAP_FRAME *)7;
  if ( *(int *)v4 >= 0 )
  {
    *(_DWORD *)v4 = 0;
    v9 = v33;
    *(_QWORD *)(v4 + 8) = (unsigned int)v33;
    if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
    {
      MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
    }
    else
    {
      MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
      v9 = v33;
    }
    v27 = MappedSystemVa;
    if ( MappedSystemVa )
    {
      LOBYTE(v8) = 1;
      CcMapAndCopyFromCache(v28[0], v3, v9, v8, MappedSystemVa, (__int64)&v32, v20, v6);
    }
    else
    {
      *(_DWORD *)v4 = -1073741670;
    }
  }
  if ( v6 )
    IoDiskIoAttributionDereference(v6);
  if ( (_DWORD)v32 )
    ++CcNumberAsyncReadRefaulted;
  if ( v5 && *(_QWORD *)v5 )
    (*(void (__fastcall **)(_QWORD))v5)(*(_QWORD *)(v5 + 8));
  KeGetCurrentThread()[1].TrapFrame = 0LL;
  PsSetPagePriorityThread((__int64)CurrentThread, PagePriorityThread);
  _InterlockedAdd((volatile signed __int32 *)(v2 + 520), 0xFFFFFFFF);
  v11 = *(_QWORD *)(a1 + 128);
  v30 = v11;
  if ( v11 != *(_QWORD *)(v2 + 528) )
    KeBugCheckEx(0x34u, 0x643uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11 + 128), &LockHandle);
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
