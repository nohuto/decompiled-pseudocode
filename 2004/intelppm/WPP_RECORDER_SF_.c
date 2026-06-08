/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0003718
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C0001720 (EvtDeviceD0Entry.c)
 *     SetGV3PerfState @ 0x1C00019F0 (SetGV3PerfState.c)
 *     Display_xSD @ 0x1C0002088 (Display_xSD.c)
 *     Display_PSS @ 0x1C0002238 (Display_PSS.c)
 *     Display_PCT_PTC @ 0x1C0002404 (Display_PCT_PTC.c)
 *     Display_CST @ 0x1C0002500 (Display_CST.c)
 *     DisplayPPMFlags @ 0x1C0002788 (DisplayPPMFlags.c)
 *     DisplayKernelPerfStates @ 0x1C0003A54 (DisplayKernelPerfStates.c)
 *     DisplayKernelIdleStates @ 0x1C0003E78 (DisplayKernelIdleStates.c)
 *     ConnectHwpInterrupt @ 0x1C0006760 (ConnectHwpInterrupt.c)
 *     SetGV3PerfStateAndTurbo @ 0x1C0007590 (SetGV3PerfStateAndTurbo.c)
 *     SetTurboDisablePolicy @ 0x1C00077A0 (SetTurboDisablePolicy.c)
 *     GetProcessorStatusInfo @ 0x1C000B260 (GetProcessorStatusInfo.c)
 *     AcpiNotifyCallback @ 0x1C000B990 (AcpiNotifyCallback.c)
 *     AcpiOSCNotifyWorker @ 0x1C000BB20 (AcpiOSCNotifyWorker.c)
 *     Display_CPC @ 0x1C000BB80 (Display_CPC.c)
 *     Display_CSD @ 0x1C000BD48 (Display_CSD.c)
 *     Display_LPI @ 0x1C000C058 (Display_LPI.c)
 *     Display_TSS @ 0x1C000C49C (Display_TSS.c)
 *     UpdateKernelPlatformStates @ 0x1C000E52C (UpdateKernelPlatformStates.c)
 *     AcpiEval_PPC @ 0x1C0020050 (AcpiEval_PPC.c)
 *     InitAcpiCpc @ 0x1C0020D88 (InitAcpiCpc.c)
 *     InitAcpiIdleDomain @ 0x1C0020F70 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C0021008 (InitAcpiPerfDomain.c)
 *     InitAcpi2CStates @ 0x1C002118C (InitAcpi2CStates.c)
 *     ValidateAcpiCStates @ 0x1C0021208 (ValidateAcpiCStates.c)
 *     InitAcpiPerfStates @ 0x1C00212AC (InitAcpiPerfStates.c)
 *     QueryPepCapabilites @ 0x1C00215FC (QueryPepCapabilites.c)
 *     InitAcpiLegacyPcc @ 0x1C002177C (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C00217FC (InitAcpiLpiStates.c)
 *     ProcLibDeviceStart @ 0x1C0021A14 (ProcLibDeviceStart.c)
 *     InitAcpi3ThrottleStates @ 0x1C00223C0 (InitAcpi3ThrottleStates.c)
 *     AcpiEval_CSD @ 0x1C00228A0 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C0022A10 (AcpiEval_CPC.c)
 *     AcpiEval_CST @ 0x1C0022ED8 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C00231C4 (AcpiEval_PSS.c)
 *     AcpiParseCore @ 0x1C0023454 (AcpiParseCore.c)
 *     AcpiEval_TSS @ 0x1C0023584 (AcpiEval_TSS.c)
 *     RegisterXsdDomain @ 0x1C0023BF0 (RegisterXsdDomain.c)
 *     InitPerfStatesInternal @ 0x1C002480C (InitPerfStatesInternal.c)
 *     RegisterIdleComplete @ 0x1C0025454 (RegisterIdleComplete.c)
 *     DecodeMWaitIdleState @ 0x1C0026160 (DecodeMWaitIdleState.c)
 *     AcpiParseRegister @ 0x1C00264A0 (AcpiParseRegister.c)
 *     CpcConnectNativeInterrupt @ 0x1C002D5B0 (CpcConnectNativeInterrupt.c)
 *     ValidateLpiState @ 0x1C002EC50 (ValidateLpiState.c)
 *     ValidatePccEntry @ 0x1C002EF18 (ValidatePccEntry.c)
 *     ValidatePccHeader @ 0x1C002EFF0 (ValidatePccHeader.c)
 *     AcpiCStateNotifyWorker @ 0x1C0031660 (AcpiCStateNotifyWorker.c)
 *     AcpiEval_PCCP @ 0x1C00318FC (AcpiEval_PCCP.c)
 *     AcpiEval_TPC @ 0x1C0031C0C (AcpiEval_TPC.c)
 *     AcpiEval_XPSS @ 0x1C0031D6C (AcpiEval_XPSS.c)
 *     AcpiPStateNotifyWorker @ 0x1C00323D0 (AcpiPStateNotifyWorker.c)
 *     AcpiParseRegisterOrQword @ 0x1C0032F70 (AcpiParseRegisterOrQword.c)
 *     AcpiParseULong64 @ 0x1C0033090 (AcpiParseULong64.c)
 *     AcpiTStateNotifyWorker @ 0x1C0033120 (AcpiTStateNotifyWorker.c)
 *     InitAcpiThrottleDomain @ 0x1C0033538 (InitAcpiThrottleDomain.c)
 *     InitCpcStatesInternal @ 0x1C0033C90 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C00351F4 (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0036610 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C0036C6C (RegisterKernelPlatformStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C0038038 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0038310 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     InitPepPerfStates @ 0x1C0038F1C (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C0039A70 (PepUpdatePerformanceConstraintWorker.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C003A120 (LpiTranslateCoordinatedIdleStates.c)
 *     ProcLibGlobalInit @ 0x1C003B758 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
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
