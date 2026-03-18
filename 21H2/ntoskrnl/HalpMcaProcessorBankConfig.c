/*
 * XREFs of HalpMcaProcessorBankConfig @ 0x1403AADCC
 * Callers:
 *     HalpMcaSetProcessorConfig @ 0x140A53828 (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x1403AAE50 (HalpGetCpuVendor.c)
 *     HalpMcaProcessorBankConfigAmd @ 0x140509E04 (HalpMcaProcessorBankConfigAmd.c)
 */

__int64 __fastcall HalpMcaProcessorBankConfig(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = HalpGetCpuVendor();
  if ( (_BYTE)result == 1 )
  {
    if ( HalpMcaScalableRasSupported )
      return HalpMcaProcessorBankConfigAmd(a1, a2);
  }
  return result;
}
