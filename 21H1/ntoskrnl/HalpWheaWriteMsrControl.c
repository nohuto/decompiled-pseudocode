/*
 * XREFs of HalpWheaWriteMsrControl @ 0x14039D9C8
 * Callers:
 *     HalpMcaSetProcessorConfig @ 0x1409954B8 (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14039DA1C (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
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
