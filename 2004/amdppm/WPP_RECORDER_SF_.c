/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0001FD0
 * Callers:
 *     AcpiNotifyCallback @ 0x1C0001D00 (AcpiNotifyCallback.c)
 *     EvtDeviceD0Entry @ 0x1C00038A0 (EvtDeviceD0Entry.c)
 *     GetProcessorStatusInfo @ 0x1C0004F90 (GetProcessorStatusInfo.c)
 *     AcpiOSCNotifyWorker @ 0x1C0005860 (AcpiOSCNotifyWorker.c)
 *     Display_CPC @ 0x1C0005B7C (Display_CPC.c)
 *     Display_CSD @ 0x1C0005D44 (Display_CSD.c)
 *     Display_CST @ 0x1C0006054 (Display_CST.c)
 *     Display_LPI @ 0x1C00062F0 (Display_LPI.c)
 *     Display_PCT_PTC @ 0x1C0006734 (Display_PCT_PTC.c)
 *     Display_PSS @ 0x1C00068A0 (Display_PSS.c)
 *     Display_TSS @ 0x1C0006B98 (Display_TSS.c)
 *     Display_xSD @ 0x1C0006E4C (Display_xSD.c)
 *     DisplayKernelIdleStates @ 0x1C0008250 (DisplayKernelIdleStates.c)
 *     DisplayKernelPerfStates @ 0x1C00083CC (DisplayKernelPerfStates.c)
 *     DisplayPPMFlags @ 0x1C0008518 (DisplayPPMFlags.c)
 *     UpdateKernelPlatformStates @ 0x1C000B34C (UpdateKernelPlatformStates.c)
 *     DecodeMWaitIdleState @ 0x1C001EC80 (DecodeMWaitIdleState.c)
 *     CpcConnectNativeInterrupt @ 0x1C00203D0 (CpcConnectNativeInterrupt.c)
 *     InitAcpiCpc @ 0x1C0020B78 (InitAcpiCpc.c)
 *     AcpiCStateNotifyWorker @ 0x1C00233D0 (AcpiCStateNotifyWorker.c)
 *     AcpiEval_CPC @ 0x1C002366C (AcpiEval_CPC.c)
 *     AcpiEval_CSD @ 0x1C0023D70 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1C0024088 (AcpiEval_CST.c)
 *     AcpiEval_PCCP @ 0x1C00245A0 (AcpiEval_PCCP.c)
 *     AcpiEval_PPC @ 0x1C0024AAC (AcpiEval_PPC.c)
 *     AcpiEval_PSS @ 0x1C0024F84 (AcpiEval_PSS.c)
 *     AcpiEval_TPC @ 0x1C002534C (AcpiEval_TPC.c)
 *     AcpiEval_TSS @ 0x1C00254AC (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C00257BC (AcpiEval_XPSS.c)
 *     AcpiPStateNotifyWorker @ 0x1C0025FD0 (AcpiPStateNotifyWorker.c)
 *     AcpiParseCore @ 0x1C00261D4 (AcpiParseCore.c)
 *     AcpiParseRegister @ 0x1C0026E20 (AcpiParseRegister.c)
 *     AcpiParseRegisterOrQword @ 0x1C0026EE0 (AcpiParseRegisterOrQword.c)
 *     AcpiParseULong64 @ 0x1C0027020 (AcpiParseULong64.c)
 *     AcpiTStateNotifyWorker @ 0x1C00270B0 (AcpiTStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x1C0027B70 (ProcLibDeviceStart.c)
 *     InitAcpiIdleDomain @ 0x1C0028DAC (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C0028F14 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C0029194 (InitAcpiThrottleDomain.c)
 *     RegisterXsdDomain @ 0x1C00292E4 (RegisterXsdDomain.c)
 *     ValidateAcpiCStates @ 0x1C002996C (ValidateAcpiCStates.c)
 *     ValidateLpiState @ 0x1C002A738 (ValidateLpiState.c)
 *     ValidatePccEntry @ 0x1C002AA00 (ValidatePccEntry.c)
 *     ValidatePccHeader @ 0x1C002AAD8 (ValidatePccHeader.c)
 *     InitCpcStatesInternal @ 0x1C002BE58 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002D3C4 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C002D780 (InitPerfStatesInternal.c)
 *     RegisterIdleComplete @ 0x1C002E058 (RegisterIdleComplete.c)
 *     RegisterKernelPepPerf @ 0x1C002F5B0 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C002FC74 (RegisterKernelPlatformStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C0030764 (InitAcpi3ThrottleStates.c)
 *     InitAcpiPerfStates @ 0x1C00308A8 (InitAcpiPerfStates.c)
 *     InitAcpi2CStates @ 0x1C00310C4 (InitAcpi2CStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C0031D88 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C003204C (PepNotifyQueryProcessorIdleStatesV2.c)
 *     InitPepPerfStates @ 0x1C0033520 (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C0034050 (PepUpdatePerformanceConstraintWorker.c)
 *     QueryPepCapabilites @ 0x1C0034670 (QueryPepCapabilites.c)
 *     InitAcpiLegacyPcc @ 0x1C0034A74 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C0034CA0 (InitAcpiLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C00352E0 (LpiTranslateCoordinatedIdleStates.c)
 *     ProcLibGlobalInit @ 0x1C0036650 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
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
