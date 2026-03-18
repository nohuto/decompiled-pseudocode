/*
 * XREFs of HalpGetCpuInfo @ 0x1403A06B0
 * Callers:
 *     HalpCmciPollProcessor @ 0x1403A01EC (HalpCmciPollProcessor.c)
 *     HalpCmciSetProcessorConfig @ 0x1403A0338 (HalpCmciSetProcessorConfig.c)
 *     HalpIsLmceSupported @ 0x1403A0488 (HalpIsLmceSupported.c)
 *     HalpGetCpuVendor @ 0x1403A067C (HalpGetCpuVendor.c)
 *     HalpProcGetFeatureBits @ 0x1403AE08C (HalpProcGetFeatureBits.c)
 *     HalpInterruptIsMsiSupported @ 0x1403C9008 (HalpInterruptIsMsiSupported.c)
 *     HalpTscCheckAdjustMsrCapability @ 0x1403CC770 (HalpTscCheckAdjustMsrCapability.c)
 *     HalpTimerConfigureQpcBypass @ 0x1403CD3C4 (HalpTimerConfigureQpcBypass.c)
 *     HalpMcaInitializeErrorSection @ 0x1404B8C20 (HalpMcaInitializeErrorSection.c)
 *     HalpMcaReportError @ 0x1404B90D0 (HalpMcaReportError.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x1404BACD8 (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpCmciResetState @ 0x1404BB310 (HalpCmciResetState.c)
 *     HalpIommuGetPageTableType @ 0x1404C7DEC (HalpIommuGetPageTableType.c)
 *     HalpSetSystemInformation @ 0x14072F190 (HalpSetSystemInformation.c)
 *     HalpIsCmciImplemented @ 0x14099C6E4 (HalpIsCmciImplemented.c)
 *     HalpErrataApplyPerProcessor @ 0x14099C750 (HalpErrataApplyPerProcessor.c)
 *     HalpCmciInitProcessor @ 0x14099C7A0 (HalpCmciInitProcessor.c)
 *     HalpPiix4Detect @ 0x14099CE60 (HalpPiix4Detect.c)
 *     HalpLbrInitialize @ 0x1409A13E4 (HalpLbrInitialize.c)
 *     HalpMcaSetFeatureFlags @ 0x1409A3C14 (HalpMcaSetFeatureFlags.c)
 *     HalpDpPostReplaceInitialization @ 0x1409AB608 (HalpDpPostReplaceInitialization.c)
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
