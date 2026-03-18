/*
 * XREFs of HalpGetCpuInfo @ 0x14039DA50
 * Callers:
 *     HalpCmciPollProcessor @ 0x14039D58C (HalpCmciPollProcessor.c)
 *     HalpCmciSetProcessorConfig @ 0x14039D6D8 (HalpCmciSetProcessorConfig.c)
 *     HalpIsLmceSupported @ 0x14039D828 (HalpIsLmceSupported.c)
 *     HalpGetCpuVendor @ 0x14039DA1C (HalpGetCpuVendor.c)
 *     HalpProcGetFeatureBits @ 0x1403A49F4 (HalpProcGetFeatureBits.c)
 *     HalpInterruptIsMsiSupported @ 0x1403C5608 (HalpInterruptIsMsiSupported.c)
 *     HalpTscCheckAdjustMsrCapability @ 0x1403C8D20 (HalpTscCheckAdjustMsrCapability.c)
 *     HalpTimerConfigureQpcBypass @ 0x1403C99A4 (HalpTimerConfigureQpcBypass.c)
 *     HalpMcaInitializeErrorSection @ 0x1404B5020 (HalpMcaInitializeErrorSection.c)
 *     HalpMcaReportError @ 0x1404B54D0 (HalpMcaReportError.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x1404B70D8 (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpCmciResetState @ 0x1404B7710 (HalpCmciResetState.c)
 *     HalpIommuGetPageTableType @ 0x1404C4410 (HalpIommuGetPageTableType.c)
 *     HalpSetSystemInformation @ 0x14071F2E0 (HalpSetSystemInformation.c)
 *     HalpIsCmciImplemented @ 0x1409952D4 (HalpIsCmciImplemented.c)
 *     HalpErrataApplyPerProcessor @ 0x140995340 (HalpErrataApplyPerProcessor.c)
 *     HalpCmciInitProcessor @ 0x140995390 (HalpCmciInitProcessor.c)
 *     HalpPiix4Detect @ 0x140995A50 (HalpPiix4Detect.c)
 *     HalpLbrInitialize @ 0x140996D74 (HalpLbrInitialize.c)
 *     HalpMcaSetFeatureFlags @ 0x14099C374 (HalpMcaSetFeatureFlags.c)
 *     HalpDpPostReplaceInitialization @ 0x1409A4868 (HalpDpPostReplaceInitialization.c)
 *     HalpProcIsSmtDisabled @ 0x140A69494 (HalpProcIsSmtDisabled.c)
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
