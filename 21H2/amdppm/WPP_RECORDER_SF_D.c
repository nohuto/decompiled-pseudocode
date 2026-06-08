/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C0003B54
 * Callers:
 *     AcpiNotifyCallback @ 0x1C0001C00 (AcpiNotifyCallback.c)
 *     EvtDeviceD0Entry @ 0x1C0003940 (EvtDeviceD0Entry.c)
 *     Display_CPC @ 0x1C00063AC (Display_CPC.c)
 *     Display_CSD @ 0x1C0006574 (Display_CSD.c)
 *     Display_CST @ 0x1C0006884 (Display_CST.c)
 *     Display_LPI @ 0x1C0006B20 (Display_LPI.c)
 *     Display_PSS @ 0x1C00070D0 (Display_PSS.c)
 *     Display_TSS @ 0x1C00073C8 (Display_TSS.c)
 *     Display_xSD @ 0x1C000767C (Display_xSD.c)
 *     DisplayKernelPerfStates @ 0x1C0008BFC (DisplayKernelPerfStates.c)
 *     RegisterKernelIdleStates @ 0x1C000B430 (RegisterKernelIdleStates.c)
 *     UpdateKernelPlatformStates @ 0x1C000BB8C (UpdateKernelPlatformStates.c)
 *     PepNotifyFeedbackRead @ 0x1C000D6E4 (PepNotifyFeedbackRead.c)
 *     PepNotifyPerfConstraints @ 0x1C000D750 (PepNotifyPerfConstraints.c)
 *     PepNotifyPerfSet @ 0x1C000D7F4 (PepNotifyPerfSet.c)
 *     PepPerfStateControlHandler @ 0x1C000D990 (PepPerfStateControlHandler.c)
 *     PepUpdatePerformanceConstraint @ 0x1C000DBAC (PepUpdatePerformanceConstraint.c)
 *     PepParkMask @ 0x1C000DE30 (PepParkMask.c)
 *     PepParkPreference @ 0x1C000DFB0 (PepParkPreference.c)
 *     PepPerfCheckComplete @ 0x1C000E260 (PepPerfCheckComplete.c)
 *     EvtDevicePrepareHardware @ 0x1C0021780 (EvtDevicePrepareHardware.c)
 *     EvtDriverDeviceAdd @ 0x1C0021AA0 (EvtDriverDeviceAdd.c)
 *     InitAcpi2CStates @ 0x1C00229BC (InitAcpi2CStates.c)
 *     InitAcpiCpc @ 0x1C0023388 (InitAcpiCpc.c)
 *     RegisterHvCStates @ 0x1C0023C28 (RegisterHvCStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C0023F70 (RegisterHvFeedbackCountersCallback.c)
 *     RegisterHvIdleStates @ 0x1C0024390 (RegisterHvIdleStates.c)
 *     RegisterHvLegacyPcc @ 0x1C0024470 (RegisterHvLegacyPcc.c)
 *     RegisterHvLpiStates @ 0x1C002476C (RegisterHvLpiStates.c)
 *     RegisterHvPerfStates @ 0x1C0024BD0 (RegisterHvPerfStates.c)
 *     RegisterSubspace @ 0x1C0025614 (RegisterSubspace.c)
 *     RegisterWmi @ 0x1C0025898 (RegisterWmi.c)
 *     AcpiEval_CSD @ 0x1C0026580 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1C0026898 (AcpiEval_CST.c)
 *     AcpiEval_PPC @ 0x1C00272BC (AcpiEval_PPC.c)
 *     AcpiEval_PSS @ 0x1C0027794 (AcpiEval_PSS.c)
 *     AcpiEval_TPC @ 0x1C0027B5C (AcpiEval_TPC.c)
 *     AcpiEval_TSS @ 0x1C0027CBC (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C0027FCC (AcpiEval_XPSS.c)
 *     ProcLibDeviceCreate @ 0x1C002A240 (ProcLibDeviceCreate.c)
 *     ProcLibDeviceStart @ 0x1C002A3A0 (ProcLibDeviceStart.c)
 *     ValidateAcpiCPC @ 0x1C002B6DC (ValidateAcpiCPC.c)
 *     ValidateAcpiThrottleStates @ 0x1C002BD4C (ValidateAcpiThrottleStates.c)
 *     ValidateCoordinatedState @ 0x1C002C5DC (ValidateCoordinatedState.c)
 *     ValidateLpiState @ 0x1C002C7D0 (ValidateLpiState.c)
 *     ValidatePccEntry @ 0x1C002CA98 (ValidatePccEntry.c)
 *     ValidatePlatformIdleState @ 0x1C002D288 (ValidatePlatformIdleState.c)
 *     Validate_PCT_PTC @ 0x1C002D830 (Validate_PCT_PTC.c)
 *     GetNtProcessorNumber @ 0x1C002DC10 (GetNtProcessorNumber.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x1C003070C (RegisterKernelCoordinatedLpiStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1C0030884 (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C0030FF0 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepPerf @ 0x1C0031710 (RegisterKernelPepPerf.c)
 *     RegisterKernelPerfStatesCallback @ 0x1C0031D70 (RegisterKernelPerfStatesCallback.c)
 *     RegisterKernelPlatformStates @ 0x1C0031DD4 (RegisterKernelPlatformStates.c)
 *     UpdateKernelCoordinatedStates @ 0x1C0032194 (UpdateKernelCoordinatedStates.c)
 *     UpdateKernelIdleDomains @ 0x1C003221C (UpdateKernelIdleDomains.c)
 *     InitAcpiIdleDomain @ 0x1C0032404 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C003256C (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C00327EC (InitAcpiThrottleDomain.c)
 *     InitAcpi3ThrottleStates @ 0x1C0033068 (InitAcpi3ThrottleStates.c)
 *     InitAcpiPerfStates @ 0x1C00331AC (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C003356C (InitAcpiThrottleStates.c)
 *     InitPepIdleStates @ 0x1C00336CC (InitPepIdleStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C0034168 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C003442C (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x1C0034898 (PepNotifyReportCStates.c)
 *     InitPepPerfStates @ 0x1C0035900 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C00360D0 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C00361E0 (PepNotifyQueryPerfCapabilities.c)
 *     PepQueryPerfDomainInfo @ 0x1C00362DC (PepQueryPerfDomainInfo.c)
 *     InitPep @ 0x1C00365E4 (InitPep.c)
 *     PepGetParkingPageInfo @ 0x1C0036794 (PepGetParkingPageInfo.c)
 *     PepNotifyQueryCapabilities @ 0x1C0036848 (PepNotifyQueryCapabilities.c)
 *     PepRegisterSpmSettings @ 0x1C003699C (PepRegisterSpmSettings.c)
 *     QueryPepCapabilites @ 0x1C0036A50 (QueryPepCapabilites.c)
 *     RegisterPepDevice @ 0x1C0036D34 (RegisterPepDevice.c)
 *     InitAcpiLegacyPcc @ 0x1C0036E6C (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C0037098 (InitAcpiLpiStates.c)
 *     DriverEntry @ 0x1C0038364 (DriverEntry.c)
 *     CollectAcpiBiosInfo @ 0x1C0038668 (CollectAcpiBiosInfo.c)
 *     ProcLibGlobalInit @ 0x1C00387D0 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_D(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v8 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      va,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v8, a3, a5, v12, va);
}
