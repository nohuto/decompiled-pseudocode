/*
 * XREFs of HalpGetCpuInfo @ 0x1403A0F70
 * Callers:
 *     HalpCmciPollProcessor @ 0x1403A0AAC (HalpCmciPollProcessor.c)
 *     HalpCmciSetProcessorConfig @ 0x1403A0BF8 (HalpCmciSetProcessorConfig.c)
 *     HalpIsLmceSupported @ 0x1403A0D48 (HalpIsLmceSupported.c)
 *     HalpGetCpuVendor @ 0x1403A0F3C (HalpGetCpuVendor.c)
 *     HalpProcGetFeatureBits @ 0x1403A803C (HalpProcGetFeatureBits.c)
 *     HalpInterruptIsMsiSupported @ 0x1403C9BA8 (HalpInterruptIsMsiSupported.c)
 *     HalpTscCheckAdjustMsrCapability @ 0x1403CD140 (HalpTscCheckAdjustMsrCapability.c)
 *     HalpTimerConfigureQpcBypass @ 0x1403CDDAC (HalpTimerConfigureQpcBypass.c)
 *     HalpMcaInitializeErrorSection @ 0x1404BA5E0 (HalpMcaInitializeErrorSection.c)
 *     HalpMcaReportError @ 0x1404BAA90 (HalpMcaReportError.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x1404BC698 (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpCmciResetState @ 0x1404BCCD0 (HalpCmciResetState.c)
 *     HalpIommuGetPageTableType @ 0x1404C97BC (HalpIommuGetPageTableType.c)
 *     HalpSetSystemInformation @ 0x1407333E0 (HalpSetSystemInformation.c)
 *     HalpIsCmciImplemented @ 0x140999C64 (HalpIsCmciImplemented.c)
 *     HalpErrataApplyPerProcessor @ 0x140999CD0 (HalpErrataApplyPerProcessor.c)
 *     HalpCmciInitProcessor @ 0x140999D20 (HalpCmciInitProcessor.c)
 *     HalpPiix4Detect @ 0x14099A3E0 (HalpPiix4Detect.c)
 *     HalpLbrInitialize @ 0x14099B704 (HalpLbrInitialize.c)
 *     HalpMcaSetFeatureFlags @ 0x1409A1434 (HalpMcaSetFeatureFlags.c)
 *     HalpDpPostReplaceInitialization @ 0x1409A84D8 (HalpDpPostReplaceInitialization.c)
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
