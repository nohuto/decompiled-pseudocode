/*
 * XREFs of HalpMcaClearError @ 0x1404B8928
 * Callers:
 *     HalpCmcPollProcessor @ 0x1403A0250 (HalpCmcPollProcessor.c)
 *     HalpMceHandlerCore @ 0x1404B9404 (HalpMceHandlerCore.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x1409A9F24 (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     HalpWheaWriteMsrStatus @ 0x1403A05B0 (HalpWheaWriteMsrStatus.c)
 *     HalpGetCpuVendor @ 0x1403A067C (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     HalpMcaProcessorBankClearAMD @ 0x1404BB908 (HalpMcaProcessorBankClearAMD.c)
 */

char __fastcall HalpMcaClearError(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  char result; // al

  if ( *(_DWORD *)(a1 + 64) )
    HalpWheaWriteMsr(a2, 392LL, 0LL);
  HalpWheaWriteMsrStatus(a2, *(_DWORD *)(a1 + 36));
  v4 = *(_DWORD *)(a1 + 36);
  result = HalpGetCpuVendor();
  if ( result == 1 && HalpMcaScalableRasSupported )
    result = HalpMcaProcessorBankClearAMD(a2, v4);
  _mm_mfence();
  return result;
}
