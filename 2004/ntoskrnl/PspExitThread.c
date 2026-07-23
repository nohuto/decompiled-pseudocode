/*
 * XREFs of PspExitThread @ 0x1406B05E0
 * Callers:
 *     PspTerminateThreadByPointer @ 0x1406B3A40 (PspTerminateThreadByPointer.c)
 *     NtTerminateProcess @ 0x1406B4060 (NtTerminateProcess.c)
 *     KiSchedulerApcTerminate @ 0x1406F54B0 (KiSchedulerApcTerminate.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x14020AF40 (ObReferenceObjectSafeWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     PspRevertContainerImpersonation @ 0x1402149A0 (PspRevertContainerImpersonation.c)
 *     HalSystemVectorDispatchEntry @ 0x14026BA30 (HalSystemVectorDispatchEntry.c)
 *     PsAttachSiloToCurrentThread @ 0x1402720A0 (PsAttachSiloToCurrentThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     PopPowerRequestCleanUp @ 0x1402767F4 (PopPowerRequestCleanUp.c)
 *     PsGetProcessServerSilo @ 0x14027D870 (PsGetProcessServerSilo.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     ObFastDereferenceObject @ 0x140299050 (ObFastDereferenceObject.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1402ED880 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeQuerySystemTimeUnsafe @ 0x1402F9514 (KeQuerySystemTimeUnsafe.c)
 *     KeQuerySystemTimePrecise @ 0x1402F9570 (KeQuerySystemTimePrecise.c)
 *     KeTerminateThread @ 0x1402F9A38 (KeTerminateThread.c)
 *     ExTimerRundown @ 0x1402FA024 (ExTimerRundown.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402FA0C0 (ExWaitForRundownProtectionRelease.c)
 *     KiRundownMutants @ 0x1402FAA28 (KiRundownMutants.c)
 *     KeForceResumeProcess @ 0x1402FCC94 (KeForceResumeProcess.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140351244 (ExfAcquireReleasePushLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwFreeVirtualMemory @ 0x1403F3980 (ZwFreeVirtualMemory.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     KeUnsecureThread @ 0x14050E028 (KeUnsecureThread.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     PsInvokeWin32Callout @ 0x140602AD0 (PsInvokeWin32Callout.c)
 *     PspCallThreadNotifyRoutines @ 0x140602D50 (PspCallThreadNotifyRoutines.c)
 *     MmDeleteTeb @ 0x140605648 (MmDeleteTeb.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406190D0 (SeAuditingWithTokenForSubcategory.c)
 *     LpcExitProcess @ 0x14061AD78 (LpcExitProcess.c)
 *     PspExitProcess @ 0x14061D5F4 (PspExitProcess.c)
 *     ExWnfExitProcess @ 0x140620214 (ExWnfExitProcess.c)
 *     EtwTraceThread @ 0x14064E3B4 (EtwTraceThread.c)
 *     PspRundownSingleProcess @ 0x14065C39C (PspRundownSingleProcess.c)
 *     PsReferencePrimaryToken @ 0x1406676A0 (PsReferencePrimaryToken.c)
 *     KeRundownApcQueues @ 0x1406B0D4C (KeRundownApcQueues.c)
 *     CmNotifyRunDown @ 0x1406B0DF0 (CmNotifyRunDown.c)
 *     IoCancelThreadIo @ 0x1406B1050 (IoCancelThreadIo.c)
 *     PsCaptureExceptionPort @ 0x1406B1148 (PsCaptureExceptionPort.c)
 *     PspEmptyPropertySet @ 0x1406B11E8 (PspEmptyPropertySet.c)
 *     PspClearProcessThreadCidRefs @ 0x1406B1220 (PspClearProcessThreadCidRefs.c)
 *     LpcRequestPort @ 0x1406B16A0 (LpcRequestPort.c)
 *     DbgkExitProcess @ 0x14088491C (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x1408849D8 (DbgkExitThread.c)
 *     PspUmsUnInitThread @ 0x1409074CC (PspUmsUnInitThread.c)
 *     PspCatchCriticalBreak @ 0x140907B14 (PspCatchCriticalBreak.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x140907C58 (PspFreeCurrentThreadUserShadowStack.c)
 *     SeAuditProcessExit @ 0x14091AE04 (SeAuditProcessExit.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  unsigned int v10; // ebx
  void *InitialStack; // r12
  struct _DMA_ADAPTER *v12; // rbx
  int v13; // eax
  char Reserved1; // al
  unsigned __int64 Teb; // rbx
  __int64 v16; // rax
  void *v17; // rcx
  __int16 v18; // ax
  LIST_ENTRY *p_WaitListHead; // rbx
  struct _KTHREAD *Thread; // rcx
  _QWORD *v22; // r12
  _QWORD *v23; // rax
  _QWORD *v24; // r15
  struct _DMA_ADAPTER *v25; // rbx
  void *v26; // rcx
  int v27; // eax
  void *v28; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v31; // zf
  struct _LIST_ENTRY *v32; // rbx
  signed __int32 v33[8]; // [rsp+0h] [rbp-F8h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-D8h]
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-C8h] BYREF
  ULONG_PTR v36; // [rsp+38h] [rbp-C0h] BYREF
  _OWORD v37[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v38; // [rsp+60h] [rbp-98h]
  void *v39; // [rsp+70h] [rbp-88h]
  PVOID BaseAddress; // [rsp+78h] [rbp-80h] BYREF
  PVOID v41; // [rsp+80h] [rbp-78h] BYREF
  _KPROCESS *Process; // [rsp+88h] [rbp-70h]
  struct _KTHREAD *v43; // [rsp+90h] [rbp-68h]
  __int128 v44; // [rsp+98h] [rbp-60h] BYREF
  __int128 v45; // [rsp+A8h] [rbp-50h] BYREF
  char v47; // [rsp+108h] [rbp+10h]
  PMDL MemoryDescriptorList; // [rsp+110h] [rbp+18h] BYREF
  PVOID Object; // [rsp+118h] [rbp+20h]

  memset(v37, 0, sizeof(v37));
  v38 = 0LL;
  v45 = 0LL;
  v44 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v43 = CurrentThread;
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
      v31 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
      SchedulerAssist[5] &= 0xFFFF0001;
      if ( v31 )
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
  v47 = 0;
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
    v47 = 1;
    if ( *(_DWORD *)(v3 + 2004) == 259 )
    {
      if ( a1 == -1073741749 )
        *(_DWORD *)(v3 + 2004) = *(_DWORD *)(v3 + 1532);
      else
        *(_DWORD *)(v3 + 2004) = a1;
    }
    v22 = *(_QWORD **)(v3 + 1504);
    if ( v22 != (_QWORD *)(v3 + 1504) )
    {
      v23 = (_QWORD *)(v3 + 1504);
      v24 = 0LL;
      do
      {
        if ( v22 - 157 != (_QWORD *)CurrentThread )
        {
          if ( !*((_BYTE *)v22 - 1252) && ObReferenceObjectSafeWithTag((__int64)(v22 - 157)) )
          {
            if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 1080));
            KeAbPostRelease(v3 + 1080);
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            KeWaitForSingleObject(v22 - 157, Executive, 0, 0, 0LL);
            if ( v24 )
              ObfDereferenceObjectWithTag(v24, 0x65547350u);
            v24 = v22 - 157;
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v3 + 1080, 0LL);
          }
          v23 = (_QWORD *)(v3 + 1504);
        }
        v22 = (_QWORD *)*v22;
      }
      while ( v22 != v23 );
      Object = v24;
    }
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 1080));
  KeAbPostRelease(v3 + 1080);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x65547350u);
  if ( CurrentThread[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
  {
    v32 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
    if ( v32 == (struct _LIST_ENTRY *)HalSystemVectorDispatchEntry()
      || (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v32[-2].Blink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v32 - 48) >> 8)] != PsJobType
      || (HIDWORD(v32[82].Blink) & 2) == 0 )
    {
      KeBugCheckEx(0x1CBu, (ULONG_PTR)CurrentThread, (ULONG_PTR)v32, v3, 1uLL);
    }
    ObfDereferenceObjectWithTag(v32, 0x6D497350u);
  }
  if ( *(_QWORD *)(v3 + 1400) && (CurrentThread->MiscFlags & 0x400) == 0 )
  {
    if ( !v47 )
    {
      v10 = a1;
      DbgkExitThread(a1);
      goto LABEL_23;
    }
    DbgkExitProcess(*(unsigned int *)(v3 + 2004));
  }
  v10 = a1;
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
    LODWORD(Timeout) = v10;
    PspCatchCriticalBreak("Critical thread 0x%p (in %s) exited\n", CurrentThread, (const char *)(v3 + 1448));
  }
  if ( v47 && (*(_DWORD *)(v3 + 1124) & 0x2000) != 0 )
  {
    PsGetProcessServerSilo(v3);
    LODWORD(Timeout) = v10;
    PspCatchCriticalBreak("Critical process 0x%p (%s) exited\n", (const void *)v3, (const char *)(v3 + 1448));
  }
  InitialStack = CurrentThread[1].InitialStack;
  if ( InitialStack )
  {
    *(_QWORD *)&v37[0] = 0x600300008LL;
    *((_QWORD *)&v38 + 1) = *(_QWORD *)&CurrentThread[1].Header.Lock;
    do
    {
      while ( 1 )
      {
        v27 = LpcRequestPort(*((_QWORD *)InitialStack + 1), v37);
        if ( v27 != -1073741801 && v27 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      HalPutDmaAdapter(*((PADAPTER_OBJECT *)InitialStack + 1));
      v28 = *(void **)InitialStack;
      ExFreePoolWithTag(InitialStack, 0x70547350u);
      InitialStack = v28;
    }
    while ( v28 );
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
  {
    v12 = (struct _DMA_ADAPTER *)PsCaptureExceptionPort(v3);
    if ( v12 )
    {
      *(_QWORD *)&v37[0] = 0x600300008LL;
      *((_QWORD *)&v38 + 1) = *(_QWORD *)&CurrentThread[1].Header.Lock;
      while ( 1 )
      {
        v13 = LpcRequestPort(v12, v37);
        if ( v13 != -1073741801 && v13 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      HalPutDmaAdapter(v12);
    }
  }
  if ( CurrentThread->WaitBlock[2].SparePtr )
  {
    *(_QWORD *)&v44 = CurrentThread;
    DWORD2(v44) = 1;
    PsInvokeWin32Callout(1, (__int64)&v44, 0, 0LL);
  }
  if ( v47 && *(_QWORD *)(v3 + 1288) )
  {
    *(_QWORD *)&v45 = v3;
    DWORD2(v45) = 0;
    PsInvokeWin32Callout(0, (__int64)&v45, 0, 0LL);
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
    _InterlockedOr(v33, 0);
    if ( ((__int64)CurrentThread[1].WaitBlockList & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((unsigned __int64 *)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( (CurrentThread->MiscFlags & 0x400) == 0 && (*(_DWORD *)(v3 + 1124) & 0x40000008) == 0 )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
      {
        v39 = *(void **)(Teb + 5240);
        BaseAddress = v39;
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        v16 = *(_QWORD *)(v3 + 1408);
        if ( v16 )
        {
          v18 = *(_WORD *)(v16 + 8);
          if ( v18 == 332 || v18 == 452 )
          {
            v41 = (PVOID)*(unsigned int *)(Teb + 11788);
            v36 = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v41, &v36, 0x8000u);
          }
        }
      }
      v17 = *(void **)(Teb + 5800);
      if ( v17 )
        ObCloseHandle(v17, 1);
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
  if ( v47 )
  {
    *(_QWORD *)(v3 + 2112) = p_WaitListHead->Flink;
    PspExitProcess(1, v3);
    v25 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken((PEPROCESS)v3);
    if ( SeAuditingWithTokenForSubcategory(134, (__int64)v25) )
      SeAuditProcessExit((PEPROCESS)v3);
    ObFastDereferenceObject((signed __int64 *)(v3 + 1208), v25);
    ExWnfExitProcess(v3, 0);
    PspRundownSingleProcess(v3, 1);
    LpcExitProcess((struct _KPROCESS *)v3);
    v26 = *(void **)(v3 + 2120);
    if ( v26 )
    {
      ExFreePoolWithTag(v26, 0);
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
