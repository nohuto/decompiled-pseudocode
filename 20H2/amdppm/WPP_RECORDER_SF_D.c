/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C0003AB4
 * Callers:
 *     AcpiNotifyCallback @ 0x1C0001D00 (AcpiNotifyCallback.c)
 *     EvtDeviceD0Entry @ 0x1C00038A0 (EvtDeviceD0Entry.c)
 *     Display_CPC @ 0x1C0005BBC (Display_CPC.c)
 *     Display_CSD @ 0x1C0005D84 (Display_CSD.c)
 *     Display_CST @ 0x1C0006094 (Display_CST.c)
 *     Display_LPI @ 0x1C0006330 (Display_LPI.c)
 *     Display_PSS @ 0x1C00068E0 (Display_PSS.c)
 *     Display_TSS @ 0x1C0006BD8 (Display_TSS.c)
 *     Display_xSD @ 0x1C0006E8C (Display_xSD.c)
 *     DisplayKernelPerfStates @ 0x1C000840C (DisplayKernelPerfStates.c)
 *     RegisterKernelIdleStates @ 0x1C000AC40 (RegisterKernelIdleStates.c)
 *     UpdateKernelPlatformStates @ 0x1C000B38C (UpdateKernelPlatformStates.c)
 *     PepNotifyFeedbackRead @ 0x1C000D584 (PepNotifyFeedbackRead.c)
 *     PepNotifyPerfConstraints @ 0x1C000D5F0 (PepNotifyPerfConstraints.c)
 *     PepNotifyPerfSet @ 0x1C000D694 (PepNotifyPerfSet.c)
 *     PepPerfStateControlHandler @ 0x1C000D830 (PepPerfStateControlHandler.c)
 *     PepUpdatePerformanceConstraint @ 0x1C000DA4C (PepUpdatePerformanceConstraint.c)
 *     PepParkMask @ 0x1C000DCD0 (PepParkMask.c)
 *     PepParkPreference @ 0x1C000DE50 (PepParkPreference.c)
 *     PepPerfCheckComplete @ 0x1C000E100 (PepPerfCheckComplete.c)
 *     EvtDevicePrepareHardware @ 0x1C0020780 (EvtDevicePrepareHardware.c)
 *     EvtDriverDeviceAdd @ 0x1C0020AA0 (EvtDriverDeviceAdd.c)
 *     InitAcpiCpc @ 0x1C0021EB8 (InitAcpiCpc.c)
 *     RegisterHvCStates @ 0x1C0022758 (RegisterHvCStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C0022AA0 (RegisterHvFeedbackCountersCallback.c)
 *     RegisterHvIdleStates @ 0x1C0022EC0 (RegisterHvIdleStates.c)
 *     RegisterHvLegacyPcc @ 0x1C0022FA0 (RegisterHvLegacyPcc.c)
 *     RegisterHvLpiStates @ 0x1C002329C (RegisterHvLpiStates.c)
 *     RegisterHvPerfStates @ 0x1C0023700 (RegisterHvPerfStates.c)
 *     RegisterSubspace @ 0x1C0024144 (RegisterSubspace.c)
 *     RegisterWmi @ 0x1C00243C8 (RegisterWmi.c)
 *     AcpiEval_CSD @ 0x1C00250B0 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1C00253C8 (AcpiEval_CST.c)
 *     AcpiEval_PPC @ 0x1C0025DEC (AcpiEval_PPC.c)
 *     AcpiEval_PSS @ 0x1C00262C4 (AcpiEval_PSS.c)
 *     AcpiEval_TPC @ 0x1C002668C (AcpiEval_TPC.c)
 *     AcpiEval_TSS @ 0x1C00267EC (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C0026AFC (AcpiEval_XPSS.c)
 *     ProcLibDeviceCreate @ 0x1C0028D50 (ProcLibDeviceCreate.c)
 *     ProcLibDeviceStart @ 0x1C0028EB0 (ProcLibDeviceStart.c)
 *     InitAcpiIdleDomain @ 0x1C002A0EC (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C002A254 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C002A4D4 (InitAcpiThrottleDomain.c)
 *     ValidateAcpiCPC @ 0x1C002A984 (ValidateAcpiCPC.c)
 *     ValidateAcpiThrottleStates @ 0x1C002AFF4 (ValidateAcpiThrottleStates.c)
 *     ValidateCoordinatedState @ 0x1C002B884 (ValidateCoordinatedState.c)
 *     ValidateLpiState @ 0x1C002BA78 (ValidateLpiState.c)
 *     ValidatePccEntry @ 0x1C002BD40 (ValidatePccEntry.c)
 *     ValidatePlatformIdleState @ 0x1C002C530 (ValidatePlatformIdleState.c)
 *     Validate_PCT_PTC @ 0x1C002CAD8 (Validate_PCT_PTC.c)
 *     GetNtProcessorNumber @ 0x1C002CEB0 (GetNtProcessorNumber.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x1C002F8E4 (RegisterKernelCoordinatedLpiStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1C002FA5C (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C00301D0 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepPerf @ 0x1C00308F0 (RegisterKernelPepPerf.c)
 *     RegisterKernelPerfStatesCallback @ 0x1C0030F50 (RegisterKernelPerfStatesCallback.c)
 *     RegisterKernelPlatformStates @ 0x1C0030FB4 (RegisterKernelPlatformStates.c)
 *     UpdateKernelCoordinatedStates @ 0x1C0031368 (UpdateKernelCoordinatedStates.c)
 *     UpdateKernelIdleDomains @ 0x1C00313F0 (UpdateKernelIdleDomains.c)
 *     InitAcpi3ThrottleStates @ 0x1C0031AA4 (InitAcpi3ThrottleStates.c)
 *     InitAcpiPerfStates @ 0x1C0031BE8 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C0031FA8 (InitAcpiThrottleStates.c)
 *     InitAcpi2CStates @ 0x1C0032404 (InitAcpi2CStates.c)
 *     InitPepIdleStates @ 0x1C003262C (InitPepIdleStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C00330C8 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C003338C (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x1C00337F8 (PepNotifyReportCStates.c)
 *     InitPepPerfStates @ 0x1C0034860 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C0035030 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C0035140 (PepNotifyQueryPerfCapabilities.c)
 *     PepQueryPerfDomainInfo @ 0x1C003523C (PepQueryPerfDomainInfo.c)
 *     InitPep @ 0x1C0035544 (InitPep.c)
 *     PepGetParkingPageInfo @ 0x1C00356F4 (PepGetParkingPageInfo.c)
 *     PepNotifyQueryCapabilities @ 0x1C00357A8 (PepNotifyQueryCapabilities.c)
 *     PepRegisterSpmSettings @ 0x1C00358FC (PepRegisterSpmSettings.c)
 *     QueryPepCapabilites @ 0x1C00359B0 (QueryPepCapabilites.c)
 *     RegisterPepDevice @ 0x1C0035C94 (RegisterPepDevice.c)
 *     InitAcpiLegacyPcc @ 0x1C0035DB4 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C0035FE0 (InitAcpiLpiStates.c)
 *     DriverEntry @ 0x1C003735C (DriverEntry.c)
 *     CollectAcpiBiosInfo @ 0x1C0037624 (CollectAcpiBiosInfo.c)
 *     ProcLibGlobalInit @ 0x1C003778C (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EAD0 (_guard_dispatch_icall_nop.c)
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
