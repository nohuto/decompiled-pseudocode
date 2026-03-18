/*
 * XREFs of HalpMcaProcessorBankConfig @ 0x14039D998
 * Callers:
 *     HalpMcaSetProcessorConfig @ 0x1409954B8 (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14039DA1C (HalpGetCpuVendor.c)
 *     HalpMcaProcessorBankConfigAmd @ 0x1404B7D5C (HalpMcaProcessorBankConfigAmd.c)
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
