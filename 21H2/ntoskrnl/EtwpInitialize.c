/*
 * XREFs of EtwpInitialize @ 0x140B0433C
 * Callers:
 *     EtwInitialize @ 0x14082AB94 (EtwInitialize.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 *     KeQueryBootTimeValues @ 0x140243A18 (KeQueryBootTimeValues.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14024AE50 (KeRegisterBugCheckReasonCallback.c)
 *     ExRegisterCallback @ 0x14025A0B0 (ExRegisterCallback.c)
 *     KeInitializeMutex @ 0x140261AA0 (KeInitializeMutex.c)
 *     RtlGetMultiTimePrecise @ 0x1402622C0 (RtlGetMultiTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     KeInitializeTimer2 @ 0x1403588D0 (KeInitializeTimer2.c)
 *     EtwpGetCurrentSiloMaxLoggers @ 0x1403DD97C (EtwpGetCurrentSiloMaxLoggers.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1406D5860 (EtwpUpdateFileInfoDriverState.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 *     EtwpMapEnableFlags @ 0x1406E1024 (EtwpMapEnableFlags.c)
 *     TlgRegisterAggregateProvider @ 0x140827FE8 (TlgRegisterAggregateProvider.c)
 *     TlgRegisterAggregateProviderEx @ 0x140828004 (TlgRegisterAggregateProviderEx.c)
 *     EtwInitializeProcessorActivityId @ 0x140829EC8 (EtwInitializeProcessorActivityId.c)
 *     EtwInitializeProcessor @ 0x140829F84 (EtwInitializeProcessor.c)
 *     WdipSemInitialize @ 0x14083F51C (WdipSemInitialize.c)
 *     EtwpInitializeProcessorTrace @ 0x140848440 (EtwpInitializeProcessorTrace.c)
 *     EtwpPreInitializeSiloState @ 0x14084EB98 (EtwpPreInitializeSiloState.c)
 *     EtwpInitializeSiloState @ 0x140851114 (EtwpInitializeSiloState.c)
 *     EtwpFixBootLoggers @ 0x140854CB8 (EtwpFixBootLoggers.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x140862888 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpInitializePrivateSessionDemuxObject @ 0x1408636E8 (EtwpInitializePrivateSessionDemuxObject.c)
 *     EtwpInitializeProviderTraits @ 0x140864124 (EtwpInitializeProviderTraits.c)
 *     EtwpInitializeLastBranchTracing @ 0x140864500 (EtwpInitializeLastBranchTracing.c)
 *     EtwpInitializeCoverage @ 0x140864B00 (EtwpInitializeCoverage.c)
 *     EtwpStartBootLoggers @ 0x140865108 (EtwpStartBootLoggers.c)
 *     EtwpInitializeStackLookasideList @ 0x140865288 (EtwpInitializeStackLookasideList.c)
 *     TraceLoggingRegister_EtwRegister_EtwSetInformation @ 0x140908C90 (TraceLoggingRegister_EtwRegister_EtwSetInformation.c)
 *     EtwpTraceSystemInitialization @ 0x140AFAD4C (EtwpTraceSystemInitialization.c)
 *     PerfDiagInitialize @ 0x140B1A3F4 (PerfDiagInitialize.c)
 *     EtwpReadConfigParameters @ 0x140B2E06C (EtwpReadConfigParameters.c)
 *     EtwpInitializeSecurity @ 0x140B2F180 (EtwpInitializeSecurity.c)
 *     EtwpInitializeRegistration @ 0x140B2F410 (EtwpInitializeRegistration.c)
 *     EtwpInitializeCoverageSampler @ 0x140B2FABC (EtwpInitializeCoverageSampler.c)
 *     EtwpInitializeRealTimeConnection @ 0x140B304E0 (EtwpInitializeRealTimeConnection.c)
 */

__int64 __fastcall EtwpInitialize(int a1, int a2, unsigned int *a3)
{
  __int64 result; // rax
  unsigned int CurrentSiloMaxLoggers; // eax
  __int64 v7; // rax
  unsigned int v8; // r15d
  int v9; // eax
  __int64 v10; // rcx
  _WORD *v11; // rdi
  unsigned int i; // edi
  __int64 Prcb; // rax
  __int64 v14; // r14
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  LARGE_INTEGER v19; // [rsp+40h] [rbp-29h] BYREF
  __int64 v20; // [rsp+48h] [rbp-21h] BYREF
  __int64 v21; // [rsp+50h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-11h] BYREF
  __int64 v23; // [rsp+68h] [rbp-1h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  int v25; // [rsp+D0h] [rbp+67h] BYREF
  int v26; // [rsp+E8h] [rbp+7Fh] BYREF

  result = 0LL;
  v19.QuadPart = 0LL;
  v20 = 0LL;
  v23 = 0LL;
  v25 = 0;
  DestinationString = 0LL;
  if ( !a1 )
  {
    KeInitializeMutex(&EtwpGroupMaskMutex, 0);
    KeInitializeMutex(&EtwpCrimsonMaskMutex, 0);
    EtwpSecurityLock = 0LL;
    EtwpInitializeStackLookasideList();
    dword_140D07144 |= 0x880000u;
    EtwpBootDeferredGroupMask[0] |= 0x10000u;
    RtlGetMultiTimePrecise((LARGE_INTEGER *)&DestinationString, 3, &v25);
    EtwpRefQpcDelta = 0LL;
    if ( (v25 & 1) != 0 )
    {
      EtwpRefTimePerfCounter = *(_QWORD *)&DestinationString.Length;
      if ( (v25 & 2) != 0 )
        EtwpRefQpcDelta = (__int64)DestinationString.Buffer - *(_QWORD *)&DestinationString.Length;
    }
    else
    {
      EtwpRefTimePerfCounter = KeQueryPerformanceCounter(0LL).QuadPart;
    }
    EtwpRefTimeCycle = __rdtsc();
    KeQueryPerformanceCounter(&EtwPerfFreq);
    if ( !a3 || (CurrentSiloMaxLoggers = *a3) == 0 )
    {
      if ( a2 )
        CurrentSiloMaxLoggers = EtwpGetCurrentSiloMaxLoggers();
      else
        CurrentSiloMaxLoggers = 80;
    }
    if ( (int)EtwpPreInitializeSiloState(0LL, CurrentSiloMaxLoggers) < 0 )
      KeBugCheck(0x11Du);
    EtwpHostSiloState = *((_QWORD *)PsGetServerSiloGlobals(0LL) + 108);
    EtwInitializeProcessor((__int64)KeGetCurrentPrcb());
    v7 = *(_QWORD *)(EtwpHostSiloState + 456);
    qword_140C0B220 = EtwpHostSiloState;
    qword_140C0B218 = v7;
    result = EtwpStartBootLoggers((__int64)a3);
LABEL_14:
    ++EtwpBootPhase;
    return result;
  }
  if ( a1 != 1 )
  {
    if ( a1 != 2 )
      return result;
    result = EtwpUpdateFileInfoDriverState(PerfGlobalGroupMask, PerfGlobalGroupMask, 1, (_QWORD *)EtwpHostSiloState, 0);
    goto LABEL_14;
  }
  v8 = KeNumberProcessors_0;
  KeQueryBootTimeValues(&EtwpRefTimeSystem, &v19, &v20);
  EtwpBootTime = v19.QuadPart - v20;
  v9 = EtwpInitializeSecurity();
  if ( v9 < 0 )
    KeBugCheckEx(0x11Du, 1uLL, v9, 0LL, 0LL);
  EtwpFixBootLoggers();
  v10 = 9LL;
  v11 = (_WORD *)0xFFFFF78000000380LL;
  while ( v10 )
  {
    *v11++ = 0;
    --v10;
  }
  for ( i = 0; i < v8; ++i )
  {
    Prcb = KeGetPrcb(i);
    v14 = Prcb;
    if ( !*(_QWORD *)(Prcb + 34472) )
    {
      v15 = EtwInitializeProcessor(Prcb);
      if ( v15 < 0 )
        KeBugCheckEx(0x11Du, 2uLL, v15, i, 0LL);
    }
    v16 = EtwInitializeProcessorActivityId(v14);
    if ( v16 < 0 )
      KeBugCheckEx(0x11Du, 2uLL, v16, i, 0LL);
  }
  EtwpReadConfigParameters();
  EtwpInitializeRegistration();
  EtwpInitializePrivateSessionDemuxObject();
  EtwpInitializeRealTimeConnection();
  EtwCPUSpeedInMHz = *(_DWORD *)(KeGetPrcb(0) + 68);
  EtwpInitializeLastBranchTracing();
  EtwpInitializeProcessorTrace(v18, v17);
  dword_140C15CF0 = 0;
  EtwpAdjustBuffersWorkItem.WorkerRoutine = (void (__fastcall *)(void *))EtwpAdjustTraceBuffers;
  EtwpMdlTable = 0;
  qword_140C15CE8 = 0LL;
  EtwpAdjustBuffersWorkItem.Parameter = &EtwpBufferAdjustmentActive;
  dword_140C15CE4 = 12;
  EtwpBufferAdjustmentCount = 8;
  EtwpAdjustBuffersWorkItem.List.Flink = 0LL;
  KeInitializeTimer2((__int64)&EtwpMemInfoTimer, (__int64)EtwpLogMemInfoTimerCallback, 0LL, 8LL);
  EtwpInitializeProviderTraits();
  if ( !ExRegisterCallback((PCALLBACK_OBJECT)ExCbPowerState, (PCALLBACK_FUNCTION)EtwpPowerStateCallback, 0LL) )
    goto LABEL_39;
  v21 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  if ( (int)KsrGetFirmwareInformation(&v21) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 80;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ExCreateCallback(&EtwpKsrCallbackObject, &ObjectAttributes, 0, 1u) >= 0 )
      ExRegisterCallback(EtwpKsrCallbackObject, (PCALLBACK_FUNCTION)EtwpKsrCallback, 0LL);
  }
  EtwpLoadMicroarchitecturalPmcs();
  EtwpSiloAllowedGroupMask |= 0x1600370Fu;
  dword_140D06CD4 |= 0x8206u;
  dword_140D06CD8 |= 0x10040u;
  dword_140D06CE8 |= 0x1FFFFFFFu;
  EtwpMapEnableFlags((__int64)&EtwpSiloAllowedGroupMask, 0);
  if ( (int)EtwpInitializeSiloState(0LL, (__int64)a3) < 0 )
LABEL_39:
    KeBugCheck(0x11Du);
  EtwpBugCheckCallback.State = 0;
  KeRegisterBugCheckReasonCallback(
    &EtwpBugCheckCallback,
    (PKBUGCHECK_REASON_CALLBACK_ROUTINE)EtwpBugCheckMultiPartCallback,
    KbCallbackSecondaryMultiPartDumpData,
    (PUCHAR)&EtwpComponentName);
  EtwRegister(
    &EventTracingProvGuid,
    (PETWENABLECALLBACK)EtwpTracingProvEnableCallback,
    0LL,
    &EtwpEventTracingProvRegHandle);
  WdipSemInitialize();
  PerfDiagInitialize();
  EtwpInitializeCoverage();
  EtwpInitializeCoverageSampler();
  EtwRegister(&KernelProvGuid, (PETWENABLECALLBACK)EtwpKernelProvEnableCallback, 0LL, &EtwKernelProvRegHandle);
  TlgRegisterAggregateProvider(&dword_140C043E0);
  EtwRegister(&PsProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)1, &EtwpPsProvRegHandle);
  TlgRegisterAggregateProviderEx(
    (char *)&dword_140C043A8,
    (__int64)EtwpTraceLoggingProvEnableCallback,
    (__int64)PsProvTraceLoggingGuid);
  TraceLoggingRegister_EtwRegister_EtwSetInformation((char *)&dword_140C03958);
  EtwRegister(&NetProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)0x10000, &EtwpNetProvRegHandle);
  EtwRegister(&DiskProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)0x100, &EtwpDiskProvRegHandle);
  EtwRegister(
    &FileProvGuid,
    (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback,
    (PVOID)0x2000000,
    &EtwpFileProvRegHandle);
  EtwRegister(&RegistryProvGuid, (PETWENABLECALLBACK)EtwpRegTraceEnableCallback, 0LL, &EtwpRegTraceHandle);
  EtwRegister(
    &MemoryProvGuid,
    (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback,
    (PVOID)0x20000001,
    &EtwpMemoryProvRegHandle);
  EtwRegister(&MS_Windows_Kernel_AppCompat_Provider, 0LL, 0LL, &EtwAppCompatProvRegHandle);
  EtwRegister(&KernelAuditApiCallsGuid, 0LL, 0LL, &EtwApiCallsProvRegHandle);
  EtwRegister(&CVEAuditProviderGuid, 0LL, 0LL, &EtwCVEAuditProvRegHandle);
  EtwRegister(&ThreatIntProviderGuid, 0LL, 0LL, &EtwThreatIntProvRegHandle);
  EtwRegister(&MS_Windows_Security_LPAC_Provider, 0LL, 0LL, &EtwLpacProvRegHandle);
  EtwRegister(&SecurityMitigationsProviderGuid, 0LL, 0LL, &EtwSecurityMitigationsRegHandle);
  EtwRegister(
    &CpuStarvationProvGuid,
    (PETWENABLECALLBACK)EtwpCpuStarvationProvEnableCallback,
    0LL,
    &EtwCpuStarvationProvRegHandle);
  ++EtwpBootPhase;
  ZwUpdateWnfStateData((__int64)&WNF_ETW_SUBSYSTEM_INITIALIZED, 0LL);
  EtwpTraceSystemInitialization();
  v26 = 0;
  if ( ((int (__fastcall *)(__int64, __int64, char *, int *, _QWORD, _DWORD, _DWORD))off_140C020D8[0])(
         44LL,
         4LL,
         (char *)&NlsMbCodePageTag + 5,
         &v26,
         0LL,
         0,
         0) < 0 )
    *(_DWORD *)((char *)&NlsMbCodePageTag + 5) = 8;
  result = *(unsigned int *)((char *)&NlsMbCodePageTag + 5);
  EtwpMaxProfilingSources = *(_DWORD *)((char *)&NlsMbCodePageTag + 5);
  return result;
}
