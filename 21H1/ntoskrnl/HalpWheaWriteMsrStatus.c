/*
 * XREFs of HalpWheaWriteMsrStatus @ 0x14039D950
 * Callers:
 *     HalpMcaClearError @ 0x1404B4D28 (HalpMcaClearError.c)
 *     HalpMcaReadErrorUncorrectedAMD @ 0x1404B7E80 (HalpMcaReadErrorUncorrectedAMD.c)
 *     HalpMcaReadErrorUncorrectedUnknown @ 0x1404B7EDC (HalpMcaReadErrorUncorrectedUnknown.c)
 *     HalpMcaSetProcessorConfig @ 0x1409954B8 (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14039DA1C (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpWheaWriteMsrStatus(__int64 a1, int a2)
{
  __int64 v4; // rdx

  if ( (unsigned __int8)HalpGetCpuVendor() == 1 && HalpMcaScalableRasSupported )
    v4 = (unsigned int)(16 * a2 - 1073733631);
  else
    v4 = (unsigned int)(4 * a2 + 1025);
  return HalpWheaWriteMsr(a1, v4, 0LL);
}
