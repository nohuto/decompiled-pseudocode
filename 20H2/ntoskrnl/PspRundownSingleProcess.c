/*
 * XREFs of PspRundownSingleProcess @ 0x140631344
 * Callers:
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 *     NtCreateUserProcess @ 0x140690C20 (NtCreateUserProcess.c)
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 *     PspTerminateProcess @ 0x1406995B8 (PspTerminateProcess.c)
 *     PspTerminateAllThreads @ 0x14069A29C (PspTerminateAllThreads.c)
 *     PsCreateMinimalProcess @ 0x1407C1F84 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1407CA1A0 (PspCreateProcess.c)
 *     PsTerminateMinimalProcess @ 0x14090D55C (PsTerminateMinimalProcess.c)
 *     PspProcessRundownWorker @ 0x14090D980 (PspProcessRundownWorker.c)
 *     PspProcessRundownWorkerSingle @ 0x14090DA30 (PspProcessRundownWorkerSingle.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     RtlInterlockedSetClearBits @ 0x14023D09C (RtlInterlockedSetClearBits.c)
 *     ExRundownCompleted @ 0x14023D900 (ExRundownCompleted.c)
 *     KeSetProcess @ 0x14023D910 (KeSetProcess.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402D5F70 (ExWaitForRundownProtectionRelease.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeRundownSecureProcess @ 0x140511EDC (KeRundownSecureProcess.c)
 *     MmCleanProcessAddressSpace @ 0x1406242E8 (MmCleanProcessAddressSpace.c)
 *     PspClearProcessThreadCidRefs @ 0x140629798 (PspClearProcessThreadCidRefs.c)
 *     PspSendProcessNotificationToJobChain @ 0x14062EFB4 (PspSendProcessNotificationToJobChain.c)
 *     PspNotifyEmptyJobsInJobChain @ 0x14062F078 (PspNotifyEmptyJobsInJobChain.c)
 *     ExSweepHandleTable @ 0x140631740 (ExSweepHandleTable.c)
 *     ObKillProcess @ 0x140632108 (ObKillProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x140663918 (PspRemoveProcessFromJobChain.c)
 *     ObReferenceProcessHandleTable @ 0x140678474 (ObReferenceProcessHandleTable.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406D9400 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

bool __fastcall PspRundownSingleProcess(__int64 BugCheckParameter1, bool a2)
{
  bool v2; // bp
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r11
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  struct _DMA_ADAPTER *v20; // rcx
  void *v21; // rcx
  __int64 v22; // rdx
  _OWORD v24[3]; // [rsp+20h] [rbp-68h] BYREF

  v2 = a2;
  memset(v24, 0, sizeof(v24));
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
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v2 )
  {
LABEL_9:
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
    ExRundownCompleted((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
    if ( *(_QWORD *)(BugCheckParameter1 + 1296) && (*(_DWORD *)(BugCheckParameter1 + 1120) & 1) == 0 )
    {
      RtlInterlockedSetClearBits((volatile signed __int32 *)(BugCheckParameter1 + 1120), 8, 32);
      PspSendProcessNotificationToJobChain(BugCheckParameter1, v8, *(_QWORD *)(BugCheckParameter1 + 1088));
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 992) )
      KeRundownSecureProcess(BugCheckParameter1);
    if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000) != 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v24);
      if ( *(_QWORD *)(BugCheckParameter1 + 1392) )
        ObKillProcess(BugCheckParameter1);
      MmCleanProcessAddressSpace(BugCheckParameter1, v9);
      KiUnstackDetachProcess((__int64)v24, 0);
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 2248) )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 2264, 0LL);
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(BugCheckParameter1 + 2248) + 8LL), 0);
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 2248), 0);
      *(_QWORD *)(BugCheckParameter1 + 2248) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 2264), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 2264));
      KeAbPostRelease(BugCheckParameter1 + 2264);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    v10 = *(_QWORD **)(BugCheckParameter1 + 2560);
    if ( v10 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( *v10 )
          {
            v11 = v10;
            v10 = (_QWORD *)*v10;
            *v11 = 0LL;
          }
          if ( !v10[1] )
            break;
          v12 = v10;
          v10 = (_QWORD *)v10[1];
          v12[1] = 0LL;
        }
        v13 = v10[2];
        SC_ENV::Free(v10);
        v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v14 )
          break;
        v10 = (_QWORD *)v14;
      }
    }
    *(_QWORD *)(BugCheckParameter1 + 2560) = 0LL;
    v15 = *(_QWORD **)(BugCheckParameter1 + 2576);
    if ( v15 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( *v15 )
          {
            v16 = v15;
            v15 = (_QWORD *)*v15;
            *v16 = 0LL;
          }
          if ( !v15[1] )
            break;
          v17 = v15;
          v15 = (_QWORD *)v15[1];
          v17[1] = 0LL;
        }
        v18 = v15[2];
        SC_ENV::Free(v15);
        v19 = v18 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v19 )
          break;
        v15 = (_QWORD *)v19;
      }
    }
    *(_QWORD *)(BugCheckParameter1 + 2576) = 0LL;
    if ( *(_QWORD *)(BugCheckParameter1 + 2600) )
    {
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 2600), 0);
      *(_QWORD *)(BugCheckParameter1 + 2600) = 0LL;
    }
    v20 = *(struct _DMA_ADAPTER **)(BugCheckParameter1 + 1304);
    if ( v20 )
    {
      *(_QWORD *)(BugCheckParameter1 + 1304) = 0LL;
      HalPutDmaAdapter(v20);
    }
    v21 = *(void **)(BugCheckParameter1 + 1440);
    if ( v21 )
    {
      ObfDereferenceObjectWithTag(v21, 0x72437350u);
      *(_QWORD *)(BugCheckParameter1 + 1440) = 0LL;
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000) != 0 )
      KeSetProcess(BugCheckParameter1);
    if ( *(_QWORD *)(BugCheckParameter1 + 1296) )
    {
      PspRemoveProcessFromJobChain((PEPROCESS)BugCheckParameter1);
      PspNotifyEmptyJobsInJobChain(BugCheckParameter1);
    }
    v22 = *(_QWORD *)(BugCheckParameter1 + 1088);
    if ( v22 )
      PspClearProcessThreadCidRefs((__int64)CurrentThread, v22, BugCheckParameter1);
  }
  else
  {
    v6 = ObReferenceProcessHandleTable(BugCheckParameter1);
    if ( v6 )
    {
      LOBYTE(v7) = 1;
      ExSweepHandleTable(BugCheckParameter1, v6, v7);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
    }
  }
  return v2;
}
