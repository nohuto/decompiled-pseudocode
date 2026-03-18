/*
 * XREFs of HalpMcaProcessorBankConfig @ 0x14039E128
 * Callers:
 *     HalpMcaSetProcessorConfig @ 0x140996888 (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14039E1AC (HalpGetCpuVendor.c)
 *     HalpMcaProcessorBankConfigAmd @ 0x1404B843C (HalpMcaProcessorBankConfigAmd.c)
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
