/*
 * XREFs of PspRundownSingleProcess @ 0x14065D9C8
 * Callers:
 *     NtCreateUserProcess @ 0x14066BF50 (NtCreateUserProcess.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 *     PspTerminateAllThreads @ 0x1407094EC (PspTerminateAllThreads.c)
 *     PspTerminateProcess @ 0x140709B44 (PspTerminateProcess.c)
 *     PsCreateMinimalProcess @ 0x14078748C (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1407B87A0 (PspCreateProcess.c)
 *     PsTerminateMinimalProcess @ 0x14090668C (PsTerminateMinimalProcess.c)
 *     PspProcessRundownWorker @ 0x140906AB0 (PspProcessRundownWorker.c)
 *     PspProcessRundownWorkerSingle @ 0x140906B60 (PspProcessRundownWorkerSingle.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     RtlInterlockedSetClearBits @ 0x1402D4018 (RtlInterlockedSetClearBits.c)
 *     KeSetProcess @ 0x1402D4298 (KeSetProcess.c)
 *     ExRundownCompleted @ 0x1402D44C0 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403560A0 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeRundownSecureProcess @ 0x14050DF5C (KeRundownSecureProcess.c)
 *     ExSweepHandleTable @ 0x1405D5FF0 (ExSweepHandleTable.c)
 *     ObKillProcess @ 0x1405D8378 (ObKillProcess.c)
 *     ObReferenceProcessHandleTable @ 0x14061F2E4 (ObReferenceProcessHandleTable.c)
 *     MmCleanProcessAddressSpace @ 0x1406339B8 (MmCleanProcessAddressSpace.c)
 *     PspNotifyEmptyJobsInJobChain @ 0x14065DDA4 (PspNotifyEmptyJobsInJobChain.c)
 *     PspSendProcessNotificationToJobChain @ 0x14065DED8 (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x14065DF9C (PspRemoveProcessFromJobChain.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406E2CE0 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     PspClearProcessThreadCidRefs @ 0x1407070E0 (PspClearProcessThreadCidRefs.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

bool __fastcall PspRundownSingleProcess(ULONG_PTR BugCheckParameter1, bool a2)
{
  bool v2; // bp
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  _DWORD *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  __int64 v14; // r11
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rbx
  unsigned __int64 v25; // rbx
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rbx
  unsigned __int64 v30; // rbx
  struct _DMA_ADAPTER *v31; // rcx
  void *v32; // rcx
  __int64 v33; // rdx
  _OWORD v35[3]; // [rsp+20h] [rbp-68h] BYREF

  v2 = a2;
  memset(v35, 0, sizeof(v35));
  CurrentThread = KeGetCurrentThread();
  if ( a2 )
    goto LABEL_9;
  --CurrentThread->KernelApcDisable;
  v5 = (volatile signed __int64 *)(BugCheckParameter1 + 1080);
  ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 1080, 0LL);
  if ( !*(_DWORD *)(BugCheckParameter1 + 1520) )
  {
    _m_prefetchw((const void *)(BugCheckParameter1 + 1124));
    v2 = (_InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 1124), 0x2000008u) & 0x2000000) == 0;
  }
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v6, v7, v8);
  if ( v2 )
  {
LABEL_9:
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
    ExRundownCompleted((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
    if ( *(_QWORD *)(BugCheckParameter1 + 1296) )
    {
      v13 = (_DWORD *)(BugCheckParameter1 + 1120);
      if ( (*(_DWORD *)(BugCheckParameter1 + 1120) & 1) == 0 )
      {
        RtlInterlockedSetClearBits((volatile signed __int32 *)(BugCheckParameter1 + 1120), 8, 32);
        PspSendProcessNotificationToJobChain(BugCheckParameter1, v14, *(_QWORD *)(BugCheckParameter1 + 1088));
      }
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 992) )
      KeRundownSecureProcess(BugCheckParameter1);
    if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000) != 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v35, v13);
      if ( *(_QWORD *)(BugCheckParameter1 + 1392) )
        ObKillProcess((_KPROCESS *)BugCheckParameter1);
      MmCleanProcessAddressSpace(BugCheckParameter1, v15);
      KiUnstackDetachProcess((__int64)v35, 0LL, v16, v17);
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 2248) )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 2264, 0LL);
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(BugCheckParameter1 + 2248) + 8LL), 0);
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 2248), 0);
      *(_QWORD *)(BugCheckParameter1 + 2248) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 2264), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter1 + 2264);
      KeAbPostRelease(BugCheckParameter1 + 2264);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v18, v19, v20);
    }
    v21 = *(_QWORD **)(BugCheckParameter1 + 2560);
    if ( v21 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( *v21 )
          {
            v22 = v21;
            v21 = (_QWORD *)*v21;
            *v22 = 0LL;
          }
          if ( !v21[1] )
            break;
          v23 = v21;
          v21 = (_QWORD *)v21[1];
          v23[1] = 0LL;
        }
        v24 = v21[2];
        SC_ENV::Free(v21);
        v25 = v24 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v25 )
          break;
        v21 = (_QWORD *)v25;
      }
    }
    *(_QWORD *)(BugCheckParameter1 + 2560) = 0LL;
    v26 = *(_QWORD **)(BugCheckParameter1 + 2576);
    if ( v26 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( *v26 )
          {
            v27 = v26;
            v26 = (_QWORD *)*v26;
            *v27 = 0LL;
          }
          if ( !v26[1] )
            break;
          v28 = v26;
          v26 = (_QWORD *)v26[1];
          v28[1] = 0LL;
        }
        v29 = v26[2];
        SC_ENV::Free(v26);
        v30 = v29 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v30 )
          break;
        v26 = (_QWORD *)v30;
      }
    }
    *(_QWORD *)(BugCheckParameter1 + 2576) = 0LL;
    v31 = *(struct _DMA_ADAPTER **)(BugCheckParameter1 + 1304);
    if ( v31 )
    {
      *(_QWORD *)(BugCheckParameter1 + 1304) = 0LL;
      HalPutDmaAdapter(v31);
    }
    v32 = *(void **)(BugCheckParameter1 + 1440);
    if ( v32 )
    {
      ObfDereferenceObjectWithTag(v32, 0x72437350u);
      *(_QWORD *)(BugCheckParameter1 + 1440) = 0LL;
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000) != 0 )
      KeSetProcess(BugCheckParameter1, v11, v12, v13);
    if ( *(_QWORD *)(BugCheckParameter1 + 1296) )
    {
      PspRemoveProcessFromJobChain((PEPROCESS)BugCheckParameter1);
      PspNotifyEmptyJobsInJobChain(BugCheckParameter1);
    }
    v33 = *(_QWORD *)(BugCheckParameter1 + 1088);
    if ( v33 )
      PspClearProcessThreadCidRefs(CurrentThread, v33, BugCheckParameter1);
  }
  else
  {
    v9 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)BugCheckParameter1);
    if ( v9 )
    {
      ExSweepHandleTable((_KPROCESS *)BugCheckParameter1, v9, 1, v10);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
    }
  }
  return v2;
}
