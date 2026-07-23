/*
 * XREFs of PspExitThread @ 0x14068390C
 * Callers:
 *     NtTerminateProcess @ 0x1406991D0 (NtTerminateProcess.c)
 *     PspTerminateThreadByPointer @ 0x14069A1F0 (PspTerminateThreadByPointer.c)
 *     KiSchedulerApcTerminate @ 0x1406C8540 (KiSchedulerApcTerminate.c)
 * Callees:
 *     PsAttachSiloToCurrentThread @ 0x140204C30 (PsAttachSiloToCurrentThread.c)
 *     ObFastDereferenceObject @ 0x140210E40 (ObFastDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ObReferenceObjectSafeWithTag @ 0x14021EB40 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     PsGetProcessServerSilo @ 0x14023F1B0 (PsGetProcessServerSilo.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     HalSystemVectorDispatchEntry @ 0x140245E60 (HalSystemVectorDispatchEntry.c)
 *     PspRevertContainerImpersonation @ 0x14027F410 (PspRevertContainerImpersonation.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     KiRundownMutants @ 0x1402D5C98 (KiRundownMutants.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402D5F70 (ExWaitForRundownProtectionRelease.c)
 *     ExTimerRundown @ 0x1402D5F9C (ExTimerRundown.c)
 *     KeTerminateThread @ 0x1402D602C (KeTerminateThread.c)
 *     KeQuerySystemTimeUnsafe @ 0x1402D6A04 (KeQuerySystemTimeUnsafe.c)
 *     KeQuerySystemTimePrecise @ 0x1402D6A70 (KeQuerySystemTimePrecise.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1402DA1B0 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     KeForceResumeProcess @ 0x1402EB0E0 (KeForceResumeProcess.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1403217D4 (ExfAcquireReleasePushLockExclusive.c)
 *     PopPowerRequestCleanUp @ 0x140361F40 (PopPowerRequestCleanUp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwFreeVirtualMemory @ 0x1403F8530 (ZwFreeVirtualMemory.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     KeUnsecureThread @ 0x140511958 (KeUnsecureThread.c)
 *     LpcRequestPort @ 0x1405EB2B0 (LpcRequestPort.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     PsInvokeWin32Callout @ 0x140628330 (PsInvokeWin32Callout.c)
 *     PspCallThreadNotifyRoutines @ 0x1406285B0 (PspCallThreadNotifyRoutines.c)
 *     PspClearProcessThreadCidRefs @ 0x140629798 (PspClearProcessThreadCidRefs.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406312F0 (SeAuditingWithTokenForSubcategory.c)
 *     PspRundownSingleProcess @ 0x140631344 (PspRundownSingleProcess.c)
 *     EtwTraceThread @ 0x14063BD44 (EtwTraceThread.c)
 *     PspExitProcess @ 0x14064E234 (PspExitProcess.c)
 *     ExWnfExitProcess @ 0x140650E54 (ExWnfExitProcess.c)
 *     MmDeleteTeb @ 0x140658D4C (MmDeleteTeb.c)
 *     LpcExitProcess @ 0x1406613A8 (LpcExitProcess.c)
 *     PsReferencePrimaryToken @ 0x14067EEB0 (PsReferencePrimaryToken.c)
 *     PspEmptyPropertySet @ 0x1406834DC (PspEmptyPropertySet.c)
 *     PsCaptureExceptionPort @ 0x140683514 (PsCaptureExceptionPort.c)
 *     IoCancelThreadIo @ 0x1406835B4 (IoCancelThreadIo.c)
 *     CmNotifyRunDown @ 0x1406836AC (CmNotifyRunDown.c)
 *     KeRundownApcQueues @ 0x140684078 (KeRundownApcQueues.c)
 *     DbgkExitProcess @ 0x14088A46C (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x14088A528 (DbgkExitThread.c)
 *     PspUmsUnInitThread @ 0x14090D0EC (PspUmsUnInitThread.c)
 *     PspCatchCriticalBreak @ 0x14090D734 (PspCatchCriticalBreak.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x14090D878 (PspFreeCurrentThreadUserShadowStack.c)
 *     SeAuditProcessExit @ 0x140920A84 (SeAuditProcessExit.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspExitThread(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v3; // r14
  ULONG_PTR v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *v7; // r9
  struct _DMA_ADAPTER *Blink; // rbx
  volatile signed __int64 *v9; // rbx
  LARGE_INTEGER v10; // rcx
  unsigned int v11; // ebx
  _QWORD *InitialStack; // r12
  struct _DMA_ADAPTER *v13; // rbx
  int v14; // eax
  char Reserved1; // al
  unsigned __int64 Teb; // rbx
  __int64 v17; // rax
  void *v18; // rcx
  __int16 v19; // ax
  LIST_ENTRY *p_WaitListHead; // rbx
  struct _KTHREAD *Thread; // rcx
  _QWORD *v23; // r12
  _QWORD *v24; // rax
  _QWORD *v25; // r15
  struct _DMA_ADAPTER *v26; // rbx
  void *v27; // rcx
  int v28; // eax
  _QWORD *v29; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v32; // zf
  struct _LIST_ENTRY *v33; // rbx
  signed __int32 v34[8]; // [rsp+0h] [rbp-F8h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-D8h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-C8h] BYREF
  ULONG_PTR v37; // [rsp+38h] [rbp-C0h] BYREF
  _OWORD v38[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v39; // [rsp+60h] [rbp-98h]
  void *v40; // [rsp+70h] [rbp-88h]
  PVOID BaseAddress; // [rsp+78h] [rbp-80h] BYREF
  PVOID v42; // [rsp+80h] [rbp-78h] BYREF
  _KPROCESS *Process; // [rsp+88h] [rbp-70h]
  struct _KTHREAD *v44; // [rsp+90h] [rbp-68h]
  __int128 v45; // [rsp+98h] [rbp-60h] BYREF
  __int128 v46; // [rsp+A8h] [rbp-50h] BYREF
  char v48; // [rsp+108h] [rbp+10h]
  PMDL MemoryDescriptorList; // [rsp+110h] [rbp+18h] BYREF
  PVOID Object; // [rsp+118h] [rbp+20h]

  memset(v38, 0, sizeof(v38));
  v39 = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v44 = CurrentThread;
  Process = CurrentThread->Process;
  v3 = (ULONG_PTR)Process;
  PspClearProcessThreadCidRefs(
    (__int64)CurrentThread,
    *(_QWORD *)&CurrentThread[1].CurrentRunTime,
    (ULONG_PTR)CurrentThread);
  v4 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( Process != (_KPROCESS *)v4 )
    KeBugCheckEx(5u, (ULONG_PTR)Process, v4, CurrentThread->ApcStateIndex, (ULONG_PTR)CurrentThread);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v32 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
      SchedulerAssist[5] &= 0xFFFF0001;
      if ( v32 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(0LL);
  if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 1) != 0 )
    KeBugCheckEx(0xE9u, (ULONG_PTR)CurrentThread, 0LL, 0LL, 0LL);
  if ( CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x20u, 0LL, CurrentThread->CombinedApcDisable, 0LL, 1uLL);
  if ( CurrentThread[1].ApcState.ApcListHead[1].Flink )
  {
    KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, 0LL);
    ObfDereferenceObjectWithTag(CurrentThread[1].ApcState.ApcListHead[1].Flink, 0x79517350u);
    CurrentThread[1].ApcState.ApcListHead[1].Flink = 0LL;
  }
  PspEmptyPropertySet(&CurrentThread[1].WaitBlock[1].SparePtr);
  PspRevertContainerImpersonation((ULONG_PTR)CurrentThread, v5, v6, v7);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&CurrentThread[1].WaitStatus);
  Blink = (struct _DMA_ADAPTER *)CurrentThread[1].ApcState.ApcListHead[1].Blink;
  if ( Blink )
  {
    PopPowerRequestCleanUp((unsigned int *)CurrentThread[1].ApcState.ApcListHead[1].Blink);
    HalPutDmaAdapter(Blink);
    CurrentThread[1].ApcState.ApcListHead[1].Blink = 0LL;
  }
  v48 = 0;
  Object = 0LL;
  CurrentThread[1].Timer.DueTime.LowPart = a1;
  if ( (PerfGlobalGroupMask & 2) != 0 )
    EtwTraceThread((__int64)CurrentThread, 0LL, 0);
  --CurrentThread->KernelApcDisable;
  if ( (*(_DWORD *)(v3 + 2172) & 1) == 0 || *(_QWORD *)(v3 + 2240) )
    PspCallThreadNotifyRoutines(CurrentThread, 0, 0);
  v9 = (volatile signed __int64 *)(v3 + 1080);
  ExAcquirePushLockExclusiveEx(v3 + 1080, 0LL);
  if ( --*(_DWORD *)(v3 + 1520) )
  {
    if ( a1 != -1073741749 )
      *(_DWORD *)(v3 + 1532) = a1;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(v3 + 1124), 0x2000008u);
    KeForceResumeProcess(v3);
    v48 = 1;
    if ( *(_DWORD *)(v3 + 2004) == 259 )
    {
      if ( a1 == -1073741749 )
        *(_DWORD *)(v3 + 2004) = *(_DWORD *)(v3 + 1532);
      else
        *(_DWORD *)(v3 + 2004) = a1;
    }
    v23 = *(_QWORD **)(v3 + 1504);
    if ( v23 != (_QWORD *)(v3 + 1504) )
    {
      v24 = (_QWORD *)(v3 + 1504);
      v25 = 0LL;
      do
      {
        if ( v23 - 157 != (_QWORD *)CurrentThread )
        {
          if ( !*((_BYTE *)v23 - 1252) && ObReferenceObjectSafeWithTag((__int64)(v23 - 157)) )
          {
            if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 1080));
            KeAbPostRelease(v3 + 1080);
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            KeWaitForSingleObject(v23 - 157, Executive, 0, 0, 0LL);
            if ( v25 )
              ObfDereferenceObjectWithTag(v25, 0x65547350u);
            v25 = v23 - 157;
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v3 + 1080, 0LL);
          }
          v24 = (_QWORD *)(v3 + 1504);
        }
        v23 = (_QWORD *)*v23;
      }
      while ( v23 != v24 );
      Object = v25;
    }
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 1080));
  KeAbPostRelease(v3 + 1080);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x65547350u);
  v10.QuadPart = -3LL;
  if ( CurrentThread[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
  {
    v33 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
    if ( v33 == (struct _LIST_ENTRY *)HalSystemVectorDispatchEntry()
      || (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v33[-2].Blink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v33 - 48) >> 8)] != PsJobType
      || (HIDWORD(v33[82].Blink) & 2) == 0 )
    {
      KeBugCheckEx(0x1CBu, (ULONG_PTR)CurrentThread, (ULONG_PTR)v33, v3, 1uLL);
    }
    ObfDereferenceObjectWithTag(v33, 0x6D497350u);
  }
  if ( *(_QWORD *)(v3 + 1400) && (CurrentThread->MiscFlags & 0x400) == 0 )
  {
    if ( !v48 )
    {
      v11 = a1;
      DbgkExitThread(a1);
      goto LABEL_23;
    }
    DbgkExitProcess(*(unsigned int *)(v3 + 2004));
  }
  v11 = a1;
LABEL_23:
  if ( (*(_BYTE *)(v3 + 992) & 1) != 0 )
  {
    MemoryDescriptorList = 0LL;
    if ( (int)KeUnsecureThread((__int64)&MemoryDescriptorList) >= 0 )
    {
      MmUnlockPages(MemoryDescriptorList);
      ExFreePoolWithTag(MemoryDescriptorList, 0x65537350u);
    }
  }
  if ( (_BYTE)KdDebuggerEnabled )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x20) != 0 )
    {
      v10.QuadPart = HIDWORD(CurrentThread->Process[1].DirectoryTableBase);
      if ( (v10.LowPart & 0x40000008) == 0 )
      {
        PsGetProcessServerSilo(v3);
        LODWORD(Timeout) = v11;
        PspCatchCriticalBreak("Critical thread 0x%p (in %s) exited\n", CurrentThread, (const char *)(v3 + 1448));
      }
    }
  }
  if ( v48 && (*(_DWORD *)(v3 + 1124) & 0x2000) != 0 )
  {
    PsGetProcessServerSilo(v3);
    LODWORD(Timeout) = v11;
    PspCatchCriticalBreak("Critical process 0x%p (%s) exited\n", (const void *)v3, (const char *)(v3 + 1448));
  }
  InitialStack = CurrentThread[1].InitialStack;
  if ( InitialStack )
  {
    *(_QWORD *)&v38[0] = 0x600300008LL;
    *((_QWORD *)&v39 + 1) = *(_QWORD *)&CurrentThread[1].Header.Lock;
    do
    {
      while ( 1 )
      {
        v28 = LpcRequestPort(InitialStack[1], (__int64)v38);
        if ( v28 != -1073741801 && v28 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      HalPutDmaAdapter((PADAPTER_OBJECT)InitialStack[1]);
      v29 = (_QWORD *)*InitialStack;
      ExFreePoolWithTag(InitialStack, 0x70547350u);
      InitialStack = v29;
    }
    while ( v29 );
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
  {
    v13 = (struct _DMA_ADAPTER *)PsCaptureExceptionPort(v3);
    if ( v13 )
    {
      *(_QWORD *)&v38[0] = 0x600300008LL;
      *((_QWORD *)&v39 + 1) = *(_QWORD *)&CurrentThread[1].Header.Lock;
      while ( 1 )
      {
        v14 = LpcRequestPort((__int64)v13, (__int64)v38);
        if ( v14 != -1073741801 && v14 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      HalPutDmaAdapter(v13);
    }
  }
  if ( CurrentThread->WaitBlock[2].SparePtr )
  {
    *(_QWORD *)&v45 = CurrentThread;
    DWORD2(v45) = 1;
    PsInvokeWin32Callout(1, (__int64)&v45, 0, 0LL);
  }
  if ( v48 && *(_QWORD *)(v3 + 1288) )
  {
    *(_QWORD *)&v46 = v3;
    DWORD2(v46) = 0;
    PsInvokeWin32Callout(0, (__int64)&v46, 0, 0LL);
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) == 0 )
    KeBugCheckEx(0x94u, 0LL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  IoCancelThreadIo(v10);
  ExTimerRundown();
  CmNotifyRunDown((__int64)CurrentThread);
  KiRundownMutants((ULONG_PTR)KeGetCurrentThread());
  Reserved1 = CurrentThread->Header.Reserved1;
  if ( (Reserved1 & 0x40) != 0 || Reserved1 < 0 )
    PspUmsUnInitThread(CurrentThread);
  Teb = (unsigned __int64)CurrentThread->Teb;
  Object = (PVOID)Teb;
  if ( Teb )
  {
    CurrentThread->Teb = 0LL;
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v34, 0);
    if ( ((__int64)CurrentThread[1].WaitBlockList & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((unsigned __int64 *)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( (CurrentThread->MiscFlags & 0x400) == 0 && (*(_DWORD *)(v3 + 1124) & 0x40000008) == 0 )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
      {
        v40 = *(void **)(Teb + 5240);
        BaseAddress = v40;
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        v17 = *(_QWORD *)(v3 + 1408);
        if ( v17 )
        {
          v19 = *(_WORD *)(v17 + 8);
          if ( v19 == 332 || v19 == 452 )
          {
            v42 = (PVOID)*(unsigned int *)(Teb + 11788);
            v37 = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v42, &v37, 0x8000u);
          }
        }
      }
      v18 = *(void **)(Teb + 5800);
      if ( v18 )
        ObCloseHandle(v18, 1);
      if ( (CurrentThread->MiscFlags & 0x100000) != 0 && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
        PspFreeCurrentThreadUserShadowStack();
      MmDeleteTeb((_KPROCESS *)v3, Teb);
    }
  }
  p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
  if ( KeQuerySystemTimeUnsafe() )
    KeQuerySystemTimePrecise((LARGE_INTEGER *)&CurrentThread[1].Header.WaitListHead);
  else
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000014];
  if ( v48 )
  {
    *(_QWORD *)(v3 + 2112) = p_WaitListHead->Flink;
    PspExitProcess(1, v3);
    v26 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken((PEPROCESS)v3);
    if ( SeAuditingWithTokenForSubcategory(134, (__int64)v26) )
      SeAuditProcessExit((PEPROCESS)v3);
    ObFastDereferenceObject((signed __int64 *)(v3 + 1208), v26);
    ExWnfExitProcess(v3, 0);
    PspRundownSingleProcess(v3, 1);
    LpcExitProcess(v3);
    v27 = *(void **)(v3 + 2120);
    if ( v27 )
    {
      ExFreePoolWithTag(v27, 0);
      *(_QWORD *)(v3 + 2120) = 0LL;
    }
  }
  KeRundownApcQueues(CurrentThread);
  if ( CurrentThread->SchedulerApc.SystemArgument2 && PspLegoNotifyRoutine )
    PspLegoNotifyRoutine(CurrentThread);
  Thread = CurrentThread[1].WaitBlock[3].Thread;
  if ( Thread )
  {
    ExFreePoolWithTag(Thread, 0x63537350u);
    CurrentThread[1].WaitBlock[3].Thread = 0LL;
  }
  return KeTerminateThread((ULONG_PTR)CurrentThread);
}
