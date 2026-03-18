/*
 * XREFs of HalpGetCpuVendor @ 0x14039E1AC
 * Callers:
 *     HalpWheaReadMsrStatus @ 0x14039E08C (HalpWheaReadMsrStatus.c)
 *     HalpWheaWriteMsrStatus @ 0x14039E0E0 (HalpWheaWriteMsrStatus.c)
 *     HalpMcaProcessorBankConfig @ 0x14039E128 (HalpMcaProcessorBankConfig.c)
 *     HalpWheaWriteMsrControl @ 0x14039E158 (HalpWheaWriteMsrControl.c)
 *     HalpMcaClearError @ 0x1404B5408 (HalpMcaClearError.c)
 *     HalpMcaPopulateErrorData @ 0x1404B579C (HalpMcaPopulateErrorData.c)
 *     HalpMcaReadError @ 0x1404B5930 (HalpMcaReadError.c)
 *     HalpMcaReadErrorCorrected @ 0x1404B8490 (HalpMcaReadErrorCorrected.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x1404BD1A0 (HalpHvInitMcaStatusMsrCache.c)
 *     HalpHvLpReadMcaStatusMsr @ 0x1404BD2F8 (HalpHvLpReadMcaStatusMsr.c)
 *     HalpWheaReadMsrAddress @ 0x1404CA890 (HalpWheaReadMsrAddress.c)
 *     HalpWheaReadMsrMisc @ 0x1404CA8E8 (HalpWheaReadMsrMisc.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x14039E1E0 (HalpGetCpuInfo.c)
 */

char HalpGetCpuVendor()
{
  char CpuInfo; // al
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, &v2);
  return CpuInfo != 0 ? v2 : 0;
}
