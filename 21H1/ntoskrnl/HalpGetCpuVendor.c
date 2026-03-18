/*
 * XREFs of HalpGetCpuVendor @ 0x14039DA1C
 * Callers:
 *     HalpWheaReadMsrStatus @ 0x14039D8FC (HalpWheaReadMsrStatus.c)
 *     HalpWheaWriteMsrStatus @ 0x14039D950 (HalpWheaWriteMsrStatus.c)
 *     HalpMcaProcessorBankConfig @ 0x14039D998 (HalpMcaProcessorBankConfig.c)
 *     HalpWheaWriteMsrControl @ 0x14039D9C8 (HalpWheaWriteMsrControl.c)
 *     HalpMcaClearError @ 0x1404B4D28 (HalpMcaClearError.c)
 *     HalpMcaPopulateErrorData @ 0x1404B50BC (HalpMcaPopulateErrorData.c)
 *     HalpMcaReadError @ 0x1404B5250 (HalpMcaReadError.c)
 *     HalpMcaReadErrorCorrected @ 0x1404B7DB0 (HalpMcaReadErrorCorrected.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x1404BCAC0 (HalpHvInitMcaStatusMsrCache.c)
 *     HalpHvLpReadMcaStatusMsr @ 0x1404BCC18 (HalpHvLpReadMcaStatusMsr.c)
 *     HalpWheaReadMsrAddress @ 0x1404CA3E0 (HalpWheaReadMsrAddress.c)
 *     HalpWheaReadMsrMisc @ 0x1404CA438 (HalpWheaReadMsrMisc.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x14039DA50 (HalpGetCpuInfo.c)
 */

char HalpGetCpuVendor()
{
  char CpuInfo; // al
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, &v2);
  return CpuInfo != 0 ? v2 : 0;
}
