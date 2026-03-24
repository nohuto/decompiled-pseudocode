/*
 * XREFs of HalpGetCpuVendor @ 0x1403A0F3C
 * Callers:
 *     HalpWheaReadMsrStatus @ 0x1403A0E1C (HalpWheaReadMsrStatus.c)
 *     HalpWheaWriteMsrStatus @ 0x1403A0E70 (HalpWheaWriteMsrStatus.c)
 *     HalpMcaProcessorBankConfig @ 0x1403A0EB8 (HalpMcaProcessorBankConfig.c)
 *     HalpWheaWriteMsrControl @ 0x1403A0EE8 (HalpWheaWriteMsrControl.c)
 *     HalpMcaClearError @ 0x1404BA2E8 (HalpMcaClearError.c)
 *     HalpMcaPopulateErrorData @ 0x1404BA67C (HalpMcaPopulateErrorData.c)
 *     HalpMcaReadError @ 0x1404BA810 (HalpMcaReadError.c)
 *     HalpMcaReadErrorCorrected @ 0x1404BD370 (HalpMcaReadErrorCorrected.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x1404C2090 (HalpHvInitMcaStatusMsrCache.c)
 *     HalpHvLpReadMcaStatusMsr @ 0x1404C21E8 (HalpHvLpReadMcaStatusMsr.c)
 *     HalpWheaReadMsrAddress @ 0x1404CF7C0 (HalpWheaReadMsrAddress.c)
 *     HalpWheaReadMsrMisc @ 0x1404CF818 (HalpWheaReadMsrMisc.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x1403A0F70 (HalpGetCpuInfo.c)
 */

char HalpGetCpuVendor()
{
  char CpuInfo; // al
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, &v2);
  return CpuInfo != 0 ? v2 : 0;
}
