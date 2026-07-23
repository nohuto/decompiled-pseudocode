/*
 * XREFs of HalpGetCpuInfo @ 0x1403A10C0
 * Callers:
 *     HalpCmciPollProcessor @ 0x1403A0BFC (HalpCmciPollProcessor.c)
 *     HalpCmciSetProcessorConfig @ 0x1403A0D48 (HalpCmciSetProcessorConfig.c)
 *     HalpIsLmceSupported @ 0x1403A0E98 (HalpIsLmceSupported.c)
 *     HalpGetCpuVendor @ 0x1403A108C (HalpGetCpuVendor.c)
 *     HalpProcGetFeatureBits @ 0x1403A8DCC (HalpProcGetFeatureBits.c)
 *     HalpInterruptIsMsiSupported @ 0x1403C9D48 (HalpInterruptIsMsiSupported.c)
 *     HalpTscCheckAdjustMsrCapability @ 0x1403CD2B0 (HalpTscCheckAdjustMsrCapability.c)
 *     HalpTimerConfigureQpcBypass @ 0x1403CDF1C (HalpTimerConfigureQpcBypass.c)
 *     HalpMcaInitializeErrorSection @ 0x1404BA820 (HalpMcaInitializeErrorSection.c)
 *     HalpMcaReportError @ 0x1404BACD0 (HalpMcaReportError.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x1404BC8D8 (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpCmciResetState @ 0x1404BCF10 (HalpCmciResetState.c)
 *     HalpIommuGetPageTableType @ 0x1404C99FC (HalpIommuGetPageTableType.c)
 *     HalpSetSystemInformation @ 0x1407335A0 (HalpSetSystemInformation.c)
 *     HalpIsCmciImplemented @ 0x14099AC64 (HalpIsCmciImplemented.c)
 *     HalpErrataApplyPerProcessor @ 0x14099ACD0 (HalpErrataApplyPerProcessor.c)
 *     HalpCmciInitProcessor @ 0x14099AD20 (HalpCmciInitProcessor.c)
 *     HalpPiix4Detect @ 0x14099B3E0 (HalpPiix4Detect.c)
 *     HalpLbrInitialize @ 0x14099C704 (HalpLbrInitialize.c)
 *     HalpMcaSetFeatureFlags @ 0x1409A2364 (HalpMcaSetFeatureFlags.c)
 *     HalpDpPostReplaceInitialization @ 0x1409A9408 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpGetCpuInfo(char *a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  struct _KPRCB *CurrentPrcb; // r10

  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->CpuID )
    return 0;
  if ( a1 )
    *a1 = CurrentPrcb->CpuType;
  if ( a2 )
    *a2 = CurrentPrcb->CpuStepping;
  if ( a3 )
    *a3 = CurrentPrcb->CpuModel;
  if ( a4 )
    *a4 = CurrentPrcb->CpuVendor;
  return 1;
}
