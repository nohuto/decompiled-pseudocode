/*
 * XREFs of PspExitThread @ 0x1407064A0
 * Callers:
 *     KiSchedulerApcTerminate @ 0x1406D28E0 (KiSchedulerApcTerminate.c)
 *     PspTerminateThreadByPointer @ 0x140709890 (PspTerminateThreadByPointer.c)
 *     NtTerminateProcess @ 0x140709EB0 (NtTerminateProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140204560 (PsGetProcessServerSilo.c)
 *     ObFastDereferenceObject @ 0x140206540 (ObFastDereferenceObject.c)
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x140263E60 (ObReferenceObjectSafeWithTag.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     PspRevertContainerImpersonation @ 0x14026D9F0 (PspRevertContainerImpersonation.c)
 *     HalSystemVectorDispatchEntry @ 0x1402D53D0 (HalSystemVectorDispatchEntry.c)
 *     PsAttachSiloToCurrentThread @ 0x1402E1A30 (PsAttachSiloToCurrentThread.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140313394 (ExfAcquireReleasePushLockExclusive.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1403329C0 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     PopPowerRequestCleanUp @ 0x14033CE74 (PopPowerRequestCleanUp.c)
 *     KeQuerySystemTimeUnsafe @ 0x1403554F4 (KeQuerySystemTimeUnsafe.c)
 *     KeQuerySystemTimePrecise @ 0x140355550 (KeQuerySystemTimePrecise.c)
 *     KeTerminateThread @ 0x140355A18 (KeTerminateThread.c)
 *     ExTimerRundown @ 0x140356004 (ExTimerRundown.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403560A0 (ExWaitForRundownProtectionRelease.c)
 *     KiRundownMutants @ 0x140356A08 (KiRundownMutants.c)
 *     KeForceResumeProcess @ 0x140358C74 (KeForceResumeProcess.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwFreeVirtualMemory @ 0x1403F26F0 (ZwFreeVirtualMemory.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     KeUnsecureThread @ 0x14050D9D8 (KeUnsecureThread.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     PsInvokeWin32Callout @ 0x140637B10 (PsInvokeWin32Callout.c)
 *     PspCallThreadNotifyRoutines @ 0x140637D90 (PspCallThreadNotifyRoutines.c)
 *     MmDeleteTeb @ 0x14063A688 (MmDeleteTeb.c)
 *     PspRundownSingleProcess @ 0x14065D9C8 (PspRundownSingleProcess.c)
 *     LpcExitProcess @ 0x140660498 (LpcExitProcess.c)
 *     PspExitProcess @ 0x140662D14 (PspExitProcess.c)
 *     ExWnfExitProcess @ 0x140665934 (ExWnfExitProcess.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406707F0 (SeAuditingWithTokenForSubcategory.c)
 *     EtwTraceThread @ 0x140700C44 (EtwTraceThread.c)
 *     KeRundownApcQueues @ 0x140706C0C (KeRundownApcQueues.c)
 *     CmNotifyRunDown @ 0x140706CB0 (CmNotifyRunDown.c)
 *     IoCancelThreadIo @ 0x140706F10 (IoCancelThreadIo.c)
 *     PsCaptureExceptionPort @ 0x140707008 (PsCaptureExceptionPort.c)
 *     PspEmptyPropertySet @ 0x1407070A8 (PspEmptyPropertySet.c)
 *     PspClearProcessThreadCidRefs @ 0x1407070E0 (PspClearProcessThreadCidRefs.c)
 *     LpcRequestPort @ 0x140707560 (LpcRequestPort.c)
 *     DbgkExitProcess @ 0x1408835FC (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x1408836B8 (DbgkExitThread.c)
 *     PspUmsUnInitThread @ 0x14090621C (PspUmsUnInitThread.c)
 *     PspCatchCriticalBreak @ 0x140906864 (PspCatchCriticalBreak.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x1409069A8 (PspFreeCurrentThreadUserShadowStack.c)
 *     SeAuditProcessExit @ 0x140919B54 (SeAuditProcessExit.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  void *InitialStack; // r12
  struct _DMA_ADAPTER *v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char Reserved1; // al
  unsigned __int64 Teb; // rbx
  __int64 v22; // r8
  _DWORD *v23; // r9
  __int64 v24; // rax
  void *v25; // rcx
  __int16 v26; // ax
  LIST_ENTRY *p_WaitListHead; // rbx
  struct _KTHREAD *Thread; // rcx
  _QWORD *v30; // r12
  _QWORD *v31; // rax
  _QWORD *v32; // r15
  struct _DMA_ADAPTER *v33; // rbx
  void *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // eax
  void *v39; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v42; // zf
  struct _LIST_ENTRY *v43; // rbx
  signed __int32 v44[8]; // [rsp+0h] [rbp-F8h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-D8h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-C8h] BYREF
  ULONG_PTR v47; // [rsp+38h] [rbp-C0h] BYREF
  _OWORD v48[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v49; // [rsp+60h] [rbp-98h]
  void *v50; // [rsp+70h] [rbp-88h]
  PVOID BaseAddress; // [rsp+78h] [rbp-80h] BYREF
  PVOID v52; // [rsp+80h] [rbp-78h] BYREF
  _KPROCESS *Process; // [rsp+88h] [rbp-70h]
  struct _KTHREAD *v54; // [rsp+90h] [rbp-68h]
  __int128 v55; // [rsp+98h] [rbp-60h] BYREF
  __int128 v56; // [rsp+A8h] [rbp-50h] BYREF
  char v58; // [rsp+108h] [rbp+10h]
  PMDL MemoryDescriptorList; // [rsp+110h] [rbp+18h] BYREF
  PVOID Object; // [rsp+118h] [rbp+20h]

  memset(v48, 0, sizeof(v48));
  v49 = 0LL;
  v56 = 0LL;
  v55 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v54 = CurrentThread;
  Process = CurrentThread->Process;
  v3 = (ULONG_PTR)Process;
  PspClearProcessThreadCidRefs(CurrentThread, *(_QWORD *)&CurrentThread[1].CurrentRunTime, CurrentThread);
  v4 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( Process != (_KPROCESS *)v4 )
    KeBugCheckEx(5u, (ULONG_PTR)Process, v4, CurrentThread->ApcStateIndex, (ULONG_PTR)CurrentThread);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v42 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
      SchedulerAssist[5] &= 0xFFFF0001;
      if ( v42 )
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
  PspEmptyPropertySet(&CurrentThread[1].WaitBlockFill11[88]);
  PspRevertContainerImpersonation((ULONG_PTR)CurrentThread, v5, v6, v7);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&CurrentThread[1].WaitStatus);
  Blink = (struct _DMA_ADAPTER *)CurrentThread[1].ApcState.ApcListHead[1].Blink;
  if ( Blink )
  {
    PopPowerRequestCleanUp((unsigned int *)CurrentThread[1].ApcState.ApcListHead[1].Blink);
    HalPutDmaAdapter(Blink);
    CurrentThread[1].ApcState.ApcListHead[1].Blink = 0LL;
  }
  v58 = 0;
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
    v58 = 1;
    if ( *(_DWORD *)(v3 + 2004) == 259 )
    {
      if ( a1 == -1073741749 )
        *(_DWORD *)(v3 + 2004) = *(_DWORD *)(v3 + 1532);
      else
        *(_DWORD *)(v3 + 2004) = a1;
    }
    v30 = *(_QWORD **)(v3 + 1504);
    if ( v30 != (_QWORD *)(v3 + 1504) )
    {
      v31 = (_QWORD *)(v3 + 1504);
      v32 = 0LL;
      do
      {
        if ( v30 - 157 != (_QWORD *)CurrentThread )
        {
          if ( !*((_BYTE *)v30 - 1252) && ObReferenceObjectSafeWithTag((__int64)(v30 - 157)) )
          {
            if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v3 + 1080);
            KeAbPostRelease(v3 + 1080);
            KeLeaveCriticalRegionThread((__int64)CurrentThread, v35, v36, v37);
            KeWaitForSingleObject(v30 - 157, Executive, 0, 0, 0LL);
            if ( v32 )
              ObfDereferenceObjectWithTag(v32, 0x65547350u);
            v32 = v30 - 157;
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v3 + 1080, 0LL);
          }
          v31 = (_QWORD *)(v3 + 1504);
        }
        v30 = (_QWORD *)*v30;
      }
      while ( v30 != v31 );
      Object = v32;
    }
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3 + 1080);
  KeAbPostRelease(v3 + 1080);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v10, v11, v12);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x65547350u);
  if ( CurrentThread[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
  {
    v43 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
    if ( v43 == (struct _LIST_ENTRY *)HalSystemVectorDispatchEntry()
      || (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v43[-2].Blink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v43 - 48) >> 8)] != PsJobType
      || (HIDWORD(v43[82].Blink) & 2) == 0 )
    {
      KeBugCheckEx(0x1CBu, (ULONG_PTR)CurrentThread, (ULONG_PTR)v43, v3, 1uLL);
    }
    ObfDereferenceObjectWithTag(v43, 0x6D497350u);
  }
  if ( *(_QWORD *)(v3 + 1400) && (CurrentThread->MiscFlags & 0x400) == 0 )
  {
    if ( !v58 )
    {
      v13 = a1;
      DbgkExitThread(a1);
      goto LABEL_23;
    }
    DbgkExitProcess(*(unsigned int *)(v3 + 2004));
  }
  v13 = a1;
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
  if ( (_BYTE)KdDebuggerEnabled
    && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x20) != 0
    && (CurrentThread->Process[1].DirectoryTableBase & 0x4000000800000000LL) == 0 )
  {
    PsGetProcessServerSilo(v3);
    LODWORD(Timeout) = v13;
    PspCatchCriticalBreak("Critical thread 0x%p (in %s) exited\n", CurrentThread, (const char *)(v3 + 1448));
  }
  if ( v58 && (*(_DWORD *)(v3 + 1124) & 0x2000) != 0 )
  {
    PsGetProcessServerSilo(v3);
    LODWORD(Timeout) = v13;
    PspCatchCriticalBreak("Critical process 0x%p (%s) exited\n", (const void *)v3, (const char *)(v3 + 1448));
  }
  InitialStack = CurrentThread[1].InitialStack;
  if ( InitialStack )
  {
    *(_QWORD *)&v48[0] = 0x600300008LL;
    *((_QWORD *)&v49 + 1) = *(_QWORD *)&CurrentThread[1].Header.Lock;
    do
    {
      while ( 1 )
      {
        v38 = LpcRequestPort(*((_QWORD *)InitialStack + 1), v48);
        if ( v38 != -1073741801 && v38 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      HalPutDmaAdapter(*((PADAPTER_OBJECT *)InitialStack + 1));
      v39 = *(void **)InitialStack;
      ExFreePoolWithTag(InitialStack, 0x70547350u);
      InitialStack = v39;
    }
    while ( v39 );
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
  {
    v15 = (struct _DMA_ADAPTER *)PsCaptureExceptionPort(v3);
    if ( v15 )
    {
      *(_QWORD *)&v48[0] = 0x600300008LL;
      *((_QWORD *)&v49 + 1) = *(_QWORD *)&CurrentThread[1].Header.Lock;
      while ( 1 )
      {
        v16 = LpcRequestPort(v15, v48);
        if ( v16 != -1073741801 && v16 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      HalPutDmaAdapter(v15);
    }
  }
  if ( CurrentThread->WaitBlock[2].SparePtr )
  {
    *(_QWORD *)&v55 = CurrentThread;
    DWORD2(v55) = 1;
    PsInvokeWin32Callout(1, (__int64)&v55, 0, 0LL);
  }
  if ( v58 && *(_QWORD *)(v3 + 1288) )
  {
    *(_QWORD *)&v56 = v3;
    DWORD2(v56) = 0;
    PsInvokeWin32Callout(0, (__int64)&v56, 0, 0LL);
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) == 0 )
    KeBugCheckEx(0x94u, 0LL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  IoCancelThreadIo();
  ExTimerRundown();
  CmNotifyRunDown(CurrentThread);
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
    _InterlockedOr(v44, 0);
    if ( ((__int64)CurrentThread[1].WaitBlockList & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((ULONG_PTR)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v17, v18, v19);
    if ( (CurrentThread->MiscFlags & 0x400) == 0 && (*(_DWORD *)(v3 + 1124) & 0x40000008) == 0 )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
      {
        v50 = *(void **)(Teb + 5240);
        BaseAddress = v50;
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        v24 = *(_QWORD *)(v3 + 1408);
        if ( v24 )
        {
          v26 = *(_WORD *)(v24 + 8);
          if ( v26 == 332 || v26 == 452 )
          {
            v52 = (PVOID)*(unsigned int *)(Teb + 11788);
            v47 = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v52, &v47, 0x8000u);
          }
        }
      }
      v25 = *(void **)(Teb + 5800);
      if ( v25 )
        ObCloseHandle(v25, 1);
      if ( (CurrentThread->MiscFlags & 0x100000) != 0 && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
        PspFreeCurrentThreadUserShadowStack();
      MmDeleteTeb((_KPROCESS *)v3, Teb, v22, v23);
    }
  }
  p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
  if ( KeQuerySystemTimeUnsafe() )
    KeQuerySystemTimePrecise((LARGE_INTEGER *)&CurrentThread[1].Header.WaitListHead);
  else
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000014];
  if ( v58 )
  {
    *(_QWORD *)(v3 + 2112) = p_WaitListHead->Flink;
    PspExitProcess(1, v3);
    v33 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken((PEPROCESS)v3);
    if ( SeAuditingWithTokenForSubcategory(134, (__int64)v33) )
      SeAuditProcessExit((PEPROCESS)v3);
    ObFastDereferenceObject((signed __int64 *)(v3 + 1208), v33);
    ExWnfExitProcess(v3, 0);
    PspRundownSingleProcess(v3, 1);
    LpcExitProcess(v3);
    v34 = *(void **)(v3 + 2120);
    if ( v34 )
    {
      ExFreePoolWithTag(v34, 0);
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
