/*
 * XREFs of HalpMcaProcessorBankConfig @ 0x1403A0EB8
 * Callers:
 *     HalpMcaSetProcessorConfig @ 0x140999E48 (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x1403A0F3C (HalpGetCpuVendor.c)
 *     HalpMcaProcessorBankConfigAmd @ 0x1404BD31C (HalpMcaProcessorBankConfigAmd.c)
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
