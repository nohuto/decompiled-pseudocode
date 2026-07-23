/*
 * XREFs of HalpGetCpuVendor @ 0x1403A108C
 * Callers:
 *     HalpWheaReadMsrStatus @ 0x1403A0F6C (HalpWheaReadMsrStatus.c)
 *     HalpWheaWriteMsrStatus @ 0x1403A0FC0 (HalpWheaWriteMsrStatus.c)
 *     HalpMcaProcessorBankConfig @ 0x1403A1008 (HalpMcaProcessorBankConfig.c)
 *     HalpWheaWriteMsrControl @ 0x1403A1038 (HalpWheaWriteMsrControl.c)
 *     HalpMcaClearError @ 0x1404BA528 (HalpMcaClearError.c)
 *     HalpMcaPopulateErrorData @ 0x1404BA8BC (HalpMcaPopulateErrorData.c)
 *     HalpMcaReadError @ 0x1404BAA50 (HalpMcaReadError.c)
 *     HalpMcaReadErrorCorrected @ 0x1404BD5B0 (HalpMcaReadErrorCorrected.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x1404C22D0 (HalpHvInitMcaStatusMsrCache.c)
 *     HalpHvLpReadMcaStatusMsr @ 0x1404C2428 (HalpHvLpReadMcaStatusMsr.c)
 *     HalpWheaReadMsrAddress @ 0x1404CFA00 (HalpWheaReadMsrAddress.c)
 *     HalpWheaReadMsrMisc @ 0x1404CFA58 (HalpWheaReadMsrMisc.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x1403A10C0 (HalpGetCpuInfo.c)
 */

char HalpGetCpuVendor()
{
  char CpuInfo; // al
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, &v2);
  return CpuInfo != 0 ? v2 : 0;
}
