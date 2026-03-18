/*
 * XREFs of HalpMcaClearError @ 0x140506CA4
 * Callers:
 *     HalpCmcPollProcessor @ 0x1403AAA5C (HalpCmcPollProcessor.c)
 *     HalpMceHandlerCore @ 0x140507820 (HalpMceHandlerCore.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140A61564 (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     HalpWheaWriteMsrStatus @ 0x1403AAD84 (HalpWheaWriteMsrStatus.c)
 *     HalpMcaProcessorBankClear @ 0x140509D78 (HalpMcaProcessorBankClear.c)
 */

__int64 __fastcall HalpMcaClearError(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  HalpMcaProcessorBankClear(a2, *(unsigned int *)(a1 + 36));
  result = HalpWheaWriteMsrStatus(a2, *(_DWORD *)(a1 + 36));
  _mm_mfence();
  return result;
}
