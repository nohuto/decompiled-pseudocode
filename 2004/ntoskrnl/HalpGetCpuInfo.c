/*
 * XREFs of HalpGetCpuInfo @ 0x14039E1E0
 * Callers:
 *     HalpCmciPollProcessor @ 0x14039DD1C (HalpCmciPollProcessor.c)
 *     HalpCmciSetProcessorConfig @ 0x14039DE68 (HalpCmciSetProcessorConfig.c)
 *     HalpIsLmceSupported @ 0x14039DFB8 (HalpIsLmceSupported.c)
 *     HalpGetCpuVendor @ 0x14039E1AC (HalpGetCpuVendor.c)
 *     HalpProcGetFeatureBits @ 0x1403ABABC (HalpProcGetFeatureBits.c)
 *     HalpInterruptIsMsiSupported @ 0x1403C6578 (HalpInterruptIsMsiSupported.c)
 *     HalpTscCheckAdjustMsrCapability @ 0x1403C9B30 (HalpTscCheckAdjustMsrCapability.c)
 *     HalpTimerConfigureQpcBypass @ 0x1403CA784 (HalpTimerConfigureQpcBypass.c)
 *     HalpMcaInitializeErrorSection @ 0x1404B5700 (HalpMcaInitializeErrorSection.c)
 *     HalpMcaReportError @ 0x1404B5BB0 (HalpMcaReportError.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x1404B77B8 (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpCmciResetState @ 0x1404B7DF0 (HalpCmciResetState.c)
 *     HalpIommuGetPageTableType @ 0x1404C48C4 (HalpIommuGetPageTableType.c)
 *     HalpSetSystemInformation @ 0x1407211A0 (HalpSetSystemInformation.c)
 *     HalpIsCmciImplemented @ 0x1409966A4 (HalpIsCmciImplemented.c)
 *     HalpErrataApplyPerProcessor @ 0x140996710 (HalpErrataApplyPerProcessor.c)
 *     HalpCmciInitProcessor @ 0x140996760 (HalpCmciInitProcessor.c)
 *     HalpPiix4Detect @ 0x140996E20 (HalpPiix4Detect.c)
 *     HalpLbrInitialize @ 0x14099B2E4 (HalpLbrInitialize.c)
 *     HalpMcaSetFeatureFlags @ 0x14099DB14 (HalpMcaSetFeatureFlags.c)
 *     HalpDpPostReplaceInitialization @ 0x1409A56A8 (HalpDpPostReplaceInitialization.c)
 *     HalpProcIsSmtDisabled @ 0x140A69914 (HalpProcIsSmtDisabled.c)
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
