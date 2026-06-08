/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C0003AB4
 * Callers:
 *     AcpiNotifyCallback @ 0x1C0001D00 (AcpiNotifyCallback.c)
 *     EvtDeviceD0Entry @ 0x1C00038A0 (EvtDeviceD0Entry.c)
 *     Display_CPC @ 0x1C0005B7C (Display_CPC.c)
 *     Display_CSD @ 0x1C0005D44 (Display_CSD.c)
 *     Display_CST @ 0x1C0006054 (Display_CST.c)
 *     Display_LPI @ 0x1C00062F0 (Display_LPI.c)
 *     Display_PSS @ 0x1C00068A0 (Display_PSS.c)
 *     Display_TSS @ 0x1C0006B98 (Display_TSS.c)
 *     Display_xSD @ 0x1C0006E4C (Display_xSD.c)
 *     DisplayKernelPerfStates @ 0x1C00083CC (DisplayKernelPerfStates.c)
 *     RegisterKernelIdleStates @ 0x1C000AC00 (RegisterKernelIdleStates.c)
 *     UpdateKernelPlatformStates @ 0x1C000B34C (UpdateKernelPlatformStates.c)
 *     PepNotifyFeedbackRead @ 0x1C000D544 (PepNotifyFeedbackRead.c)
 *     PepNotifyPerfConstraints @ 0x1C000D5B0 (PepNotifyPerfConstraints.c)
 *     PepNotifyPerfSet @ 0x1C000D654 (PepNotifyPerfSet.c)
 *     PepPerfStateControlHandler @ 0x1C000D7F0 (PepPerfStateControlHandler.c)
 *     PepUpdatePerformanceConstraint @ 0x1C000DA0C (PepUpdatePerformanceConstraint.c)
 *     PepParkMask @ 0x1C000DC90 (PepParkMask.c)
 *     PepParkPreference @ 0x1C000DE10 (PepParkPreference.c)
 *     PepPerfCheckComplete @ 0x1C000E0C0 (PepPerfCheckComplete.c)
 *     EvtDevicePrepareHardware @ 0x1C001F780 (EvtDevicePrepareHardware.c)
 *     EvtDriverDeviceAdd @ 0x1C001FAA0 (EvtDriverDeviceAdd.c)
 *     InitAcpiCpc @ 0x1C0020B78 (InitAcpiCpc.c)
 *     RegisterHvCStates @ 0x1C0021418 (RegisterHvCStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C0021760 (RegisterHvFeedbackCountersCallback.c)
 *     RegisterHvIdleStates @ 0x1C0021B80 (RegisterHvIdleStates.c)
 *     RegisterHvLegacyPcc @ 0x1C0021C60 (RegisterHvLegacyPcc.c)
 *     RegisterHvLpiStates @ 0x1C0021F5C (RegisterHvLpiStates.c)
 *     RegisterHvPerfStates @ 0x1C00223C0 (RegisterHvPerfStates.c)
 *     RegisterSubspace @ 0x1C0022E04 (RegisterSubspace.c)
 *     RegisterWmi @ 0x1C0023088 (RegisterWmi.c)
 *     AcpiEval_CSD @ 0x1C0023D70 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1C0024088 (AcpiEval_CST.c)
 *     AcpiEval_PPC @ 0x1C0024AAC (AcpiEval_PPC.c)
 *     AcpiEval_PSS @ 0x1C0024F84 (AcpiEval_PSS.c)
 *     AcpiEval_TPC @ 0x1C002534C (AcpiEval_TPC.c)
 *     AcpiEval_TSS @ 0x1C00254AC (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C00257BC (AcpiEval_XPSS.c)
 *     ProcLibDeviceCreate @ 0x1C0027A10 (ProcLibDeviceCreate.c)
 *     ProcLibDeviceStart @ 0x1C0027B70 (ProcLibDeviceStart.c)
 *     InitAcpiIdleDomain @ 0x1C0028DAC (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C0028F14 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C0029194 (InitAcpiThrottleDomain.c)
 *     ValidateAcpiCPC @ 0x1C0029644 (ValidateAcpiCPC.c)
 *     ValidateAcpiThrottleStates @ 0x1C0029CB4 (ValidateAcpiThrottleStates.c)
 *     ValidateCoordinatedState @ 0x1C002A544 (ValidateCoordinatedState.c)
 *     ValidateLpiState @ 0x1C002A738 (ValidateLpiState.c)
 *     ValidatePccEntry @ 0x1C002AA00 (ValidatePccEntry.c)
 *     ValidatePlatformIdleState @ 0x1C002B1F0 (ValidatePlatformIdleState.c)
 *     Validate_PCT_PTC @ 0x1C002B798 (Validate_PCT_PTC.c)
 *     GetNtProcessorNumber @ 0x1C002BB70 (GetNtProcessorNumber.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x1C002E5A4 (RegisterKernelCoordinatedLpiStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1C002E71C (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C002EE90 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepPerf @ 0x1C002F5B0 (RegisterKernelPepPerf.c)
 *     RegisterKernelPerfStatesCallback @ 0x1C002FC10 (RegisterKernelPerfStatesCallback.c)
 *     RegisterKernelPlatformStates @ 0x1C002FC74 (RegisterKernelPlatformStates.c)
 *     UpdateKernelCoordinatedStates @ 0x1C0030028 (UpdateKernelCoordinatedStates.c)
 *     UpdateKernelIdleDomains @ 0x1C00300B0 (UpdateKernelIdleDomains.c)
 *     InitAcpi3ThrottleStates @ 0x1C0030764 (InitAcpi3ThrottleStates.c)
 *     InitAcpiPerfStates @ 0x1C00308A8 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C0030C68 (InitAcpiThrottleStates.c)
 *     InitAcpi2CStates @ 0x1C00310C4 (InitAcpi2CStates.c)
 *     InitPepIdleStates @ 0x1C00312EC (InitPepIdleStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C0031D88 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C003204C (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x1C00324B8 (PepNotifyReportCStates.c)
 *     InitPepPerfStates @ 0x1C0033520 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C0033CF0 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C0033E00 (PepNotifyQueryPerfCapabilities.c)
 *     PepQueryPerfDomainInfo @ 0x1C0033EFC (PepQueryPerfDomainInfo.c)
 *     InitPep @ 0x1C0034204 (InitPep.c)
 *     PepGetParkingPageInfo @ 0x1C00343B4 (PepGetParkingPageInfo.c)
 *     PepNotifyQueryCapabilities @ 0x1C0034468 (PepNotifyQueryCapabilities.c)
 *     PepRegisterSpmSettings @ 0x1C00345BC (PepRegisterSpmSettings.c)
 *     QueryPepCapabilites @ 0x1C0034670 (QueryPepCapabilites.c)
 *     RegisterPepDevice @ 0x1C0034954 (RegisterPepDevice.c)
 *     InitAcpiLegacyPcc @ 0x1C0034A74 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C0034CA0 (InitAcpiLpiStates.c)
 *     DriverEntry @ 0x1C003635C (DriverEntry.c)
 *     CollectAcpiBiosInfo @ 0x1C00364E8 (CollectAcpiBiosInfo.c)
 *     ProcLibGlobalInit @ 0x1C0036650 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
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
