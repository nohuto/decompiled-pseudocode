/*
 * XREFs of HalpMcaClearError @ 0x1404BA2E8
 * Callers:
 *     HalpCmcPollProcessor @ 0x1403A0B10 (HalpCmcPollProcessor.c)
 *     HalpMceHandlerCore @ 0x1404BADC4 (HalpMceHandlerCore.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x1409A6DF0 (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     HalpWheaWriteMsrStatus @ 0x1403A0E70 (HalpWheaWriteMsrStatus.c)
 *     HalpGetCpuVendor @ 0x1403A0F3C (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     HalpMcaProcessorBankClearAMD @ 0x1404BD2C8 (HalpMcaProcessorBankClearAMD.c)
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
