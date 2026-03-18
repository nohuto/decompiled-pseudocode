/*
 * XREFs of HalpGetCpuVendor @ 0x1403A067C
 * Callers:
 *     HalpWheaReadMsrStatus @ 0x1403A055C (HalpWheaReadMsrStatus.c)
 *     HalpWheaWriteMsrStatus @ 0x1403A05B0 (HalpWheaWriteMsrStatus.c)
 *     HalpMcaProcessorBankConfig @ 0x1403A05F8 (HalpMcaProcessorBankConfig.c)
 *     HalpWheaWriteMsrControl @ 0x1403A0628 (HalpWheaWriteMsrControl.c)
 *     HalpMcaClearError @ 0x1404B8928 (HalpMcaClearError.c)
 *     HalpMcaPopulateErrorData @ 0x1404B8CBC (HalpMcaPopulateErrorData.c)
 *     HalpMcaReadError @ 0x1404B8E50 (HalpMcaReadError.c)
 *     HalpMcaReadErrorCorrected @ 0x1404BB9B0 (HalpMcaReadErrorCorrected.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x1404C06C0 (HalpHvInitMcaStatusMsrCache.c)
 *     HalpHvLpReadMcaStatusMsr @ 0x1404C0818 (HalpHvLpReadMcaStatusMsr.c)
 *     HalpWheaReadMsrAddress @ 0x1404CDDF0 (HalpWheaReadMsrAddress.c)
 *     HalpWheaReadMsrMisc @ 0x1404CDE48 (HalpWheaReadMsrMisc.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x1403A06B0 (HalpGetCpuInfo.c)
 */

char HalpGetCpuVendor()
{
  char CpuInfo; // al
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, &v2);
  return CpuInfo != 0 ? v2 : 0;
}
