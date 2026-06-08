/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0001FAC
 * Callers:
 *     AcpiNotifyCallback @ 0x1C0001C00 (AcpiNotifyCallback.c)
 *     EvtDeviceD0Entry @ 0x1C0003940 (EvtDeviceD0Entry.c)
 *     GetProcessorStatusInfo @ 0x1C00057C0 (GetProcessorStatusInfo.c)
 *     AcpiOSCNotifyWorker @ 0x1C0006090 (AcpiOSCNotifyWorker.c)
 *     Display_CPC @ 0x1C00063AC (Display_CPC.c)
 *     Display_CSD @ 0x1C0006574 (Display_CSD.c)
 *     Display_CST @ 0x1C0006884 (Display_CST.c)
 *     Display_LPI @ 0x1C0006B20 (Display_LPI.c)
 *     Display_PCT_PTC @ 0x1C0006F64 (Display_PCT_PTC.c)
 *     Display_PSS @ 0x1C00070D0 (Display_PSS.c)
 *     Display_TSS @ 0x1C00073C8 (Display_TSS.c)
 *     Display_xSD @ 0x1C000767C (Display_xSD.c)
 *     DisplayKernelIdleStates @ 0x1C0008A80 (DisplayKernelIdleStates.c)
 *     DisplayKernelPerfStates @ 0x1C0008BFC (DisplayKernelPerfStates.c)
 *     DisplayPPMFlags @ 0x1C0008D48 (DisplayPPMFlags.c)
 *     UpdateKernelPlatformStates @ 0x1C000BB8C (UpdateKernelPlatformStates.c)
 *     DecodeMWaitIdleState @ 0x1C0020C80 (DecodeMWaitIdleState.c)
 *     InitAcpi2CStates @ 0x1C00229BC (InitAcpi2CStates.c)
 *     CpcConnectNativeInterrupt @ 0x1C0022BE4 (CpcConnectNativeInterrupt.c)
 *     InitAcpiCpc @ 0x1C0023388 (InitAcpiCpc.c)
 *     AcpiCStateNotifyWorker @ 0x1C0025BE0 (AcpiCStateNotifyWorker.c)
 *     AcpiEval_CPC @ 0x1C0025E7C (AcpiEval_CPC.c)
 *     AcpiEval_CSD @ 0x1C0026580 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1C0026898 (AcpiEval_CST.c)
 *     AcpiEval_PCCP @ 0x1C0026DB0 (AcpiEval_PCCP.c)
 *     AcpiEval_PPC @ 0x1C00272BC (AcpiEval_PPC.c)
 *     AcpiEval_PSS @ 0x1C0027794 (AcpiEval_PSS.c)
 *     AcpiEval_TPC @ 0x1C0027B5C (AcpiEval_TPC.c)
 *     AcpiEval_TSS @ 0x1C0027CBC (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C0027FCC (AcpiEval_XPSS.c)
 *     AcpiPStateNotifyWorker @ 0x1C00287E0 (AcpiPStateNotifyWorker.c)
 *     AcpiParseCore @ 0x1C00289E4 (AcpiParseCore.c)
 *     AcpiParseRegister @ 0x1C0029650 (AcpiParseRegister.c)
 *     AcpiParseRegisterOrQword @ 0x1C0029710 (AcpiParseRegisterOrQword.c)
 *     AcpiParseULong64 @ 0x1C0029850 (AcpiParseULong64.c)
 *     AcpiTStateNotifyWorker @ 0x1C00298E0 (AcpiTStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x1C002A3A0 (ProcLibDeviceStart.c)
 *     ValidateAcpiCStates @ 0x1C002BA04 (ValidateAcpiCStates.c)
 *     ValidateLpiState @ 0x1C002C7D0 (ValidateLpiState.c)
 *     ValidatePccEntry @ 0x1C002CA98 (ValidatePccEntry.c)
 *     ValidatePccHeader @ 0x1C002CB70 (ValidatePccHeader.c)
 *     InitCpcStatesInternal @ 0x1C002DEF8 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002F464 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C002F820 (InitPerfStatesInternal.c)
 *     RegisterIdleComplete @ 0x1C00301C0 (RegisterIdleComplete.c)
 *     RegisterKernelPepPerf @ 0x1C0031710 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C0031DD4 (RegisterKernelPlatformStates.c)
 *     InitAcpiIdleDomain @ 0x1C0032404 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C003256C (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C00327EC (InitAcpiThrottleDomain.c)
 *     RegisterXsdDomain @ 0x1C003293C (RegisterXsdDomain.c)
 *     InitAcpi3ThrottleStates @ 0x1C0033068 (InitAcpi3ThrottleStates.c)
 *     InitAcpiPerfStates @ 0x1C00331AC (InitAcpiPerfStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C0034168 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C003442C (PepNotifyQueryProcessorIdleStatesV2.c)
 *     InitPepPerfStates @ 0x1C0035900 (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C0036430 (PepUpdatePerformanceConstraintWorker.c)
 *     QueryPepCapabilites @ 0x1C0036A50 (QueryPepCapabilites.c)
 *     InitAcpiLegacyPcc @ 0x1C0036E6C (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C0037098 (InitAcpiLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C0037700 (LpiTranslateCoordinatedIdleStates.c)
 *     ProcLibGlobalInit @ 0x1C00387D0 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5)
{
  unsigned __int64 v7; // rdi
  unsigned int v9; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-28h]

  v7 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v12, 0LL);
}
