/*
 * XREFs of HalpWheaWriteMsrControl @ 0x1403A1038
 * Callers:
 *     HalpMcaSetProcessorConfig @ 0x14099AE48 (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x1403A108C (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpWheaWriteMsrControl(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rdx

  if ( (unsigned __int8)HalpGetCpuVendor() == 1 && HalpMcaScalableRasSupported )
    v6 = (unsigned int)(16 * a2 - 1073733632);
  else
    v6 = (unsigned int)(4 * a2 + 1024);
  return HalpWheaWriteMsr(a1, v6, a3);
}
