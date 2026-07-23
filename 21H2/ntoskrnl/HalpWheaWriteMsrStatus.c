/*
 * XREFs of HalpWheaWriteMsrStatus @ 0x1403A0FC0
 * Callers:
 *     HalpMcaClearError @ 0x1404BA528 (HalpMcaClearError.c)
 *     HalpMcaReadErrorUncorrectedAMD @ 0x1404BD680 (HalpMcaReadErrorUncorrectedAMD.c)
 *     HalpMcaReadErrorUncorrectedUnknown @ 0x1404BD6DC (HalpMcaReadErrorUncorrectedUnknown.c)
 *     HalpMcaSetProcessorConfig @ 0x14099AE48 (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x1403A108C (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
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
