/*
 * XREFs of HalpGetCpuVendor @ 0x1403AAE50
 * Callers:
 *     HalpCmciPollProcessor @ 0x1403AAA10 (HalpCmciPollProcessor.c)
 *     HalpCmcPollProcessor @ 0x1403AAA5C (HalpCmcPollProcessor.c)
 *     HalpCmciSetProcessorConfig @ 0x1403AAB4C (HalpCmciSetProcessorConfig.c)
 *     HalpIsLmceSupported @ 0x1403AAC80 (HalpIsLmceSupported.c)
 *     HalpWheaReadMsrStatus @ 0x1403AAD30 (HalpWheaReadMsrStatus.c)
 *     HalpWheaWriteMsrStatus @ 0x1403AAD84 (HalpWheaWriteMsrStatus.c)
 *     HalpMcaProcessorBankConfig @ 0x1403AADCC (HalpMcaProcessorBankConfig.c)
 *     HalpWheaWriteMsrControl @ 0x1403AADFC (HalpWheaWriteMsrControl.c)
 *     HalpMcaInitializeErrorSection @ 0x140506F6C (HalpMcaInitializeErrorSection.c)
 *     HalpMcaPopulateErrorData @ 0x140507040 (HalpMcaPopulateErrorData.c)
 *     HalpMcaReadError @ 0x1405071C4 (HalpMcaReadError.c)
 *     HalpMcaReportError @ 0x14050745C (HalpMcaReportError.c)
 *     HalpCmciHandler @ 0x140509620 (HalpCmciHandler.c)
 *     HalpMcaProcessorBankClear @ 0x140509D78 (HalpMcaProcessorBankClear.c)
 *     HalpMcaReadErrorCorrected @ 0x140509E58 (HalpMcaReadErrorCorrected.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x14050E490 (HalpHvInitMcaStatusMsrCache.c)
 *     HalpHvLpReadMcaStatusMsr @ 0x14050E638 (HalpHvLpReadMcaStatusMsr.c)
 *     HalpWheaReadMsrAddress @ 0x14051BC28 (HalpWheaReadMsrAddress.c)
 *     HalpWheaReadMsrMisc @ 0x14051BC80 (HalpWheaReadMsrMisc.c)
 *     HaliWheaInitProcessorGenericSection @ 0x14051C5D8 (HaliWheaInitProcessorGenericSection.c)
 *     HalpIsCmciImplemented @ 0x140A5367C (HalpIsCmciImplemented.c)
 *     HalpCmciInitProcessor @ 0x140A53718 (HalpCmciInitProcessor.c)
 *     HalpMcaSetFeatureFlags @ 0x140A5B19C (HalpMcaSetFeatureFlags.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x1403AAE80 (HalpGetCpuInfo.c)
 */

char HalpGetCpuVendor()
{
  char CpuInfo; // al
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, &v2);
  return CpuInfo != 0 ? v2 : 0;
}
