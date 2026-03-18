/*
 * XREFs of HalpWheaWriteMsrStatus @ 0x1403AAD84
 * Callers:
 *     HalpMcaClearError @ 0x140506CA4 (HalpMcaClearError.c)
 *     HalpMcaReadError @ 0x1405071C4 (HalpMcaReadError.c)
 *     HalpMcaReadErrorUncorrectedAMD @ 0x140509EE4 (HalpMcaReadErrorUncorrectedAMD.c)
 *     HalpMcaSetProcessorConfig @ 0x140A53828 (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x1403AAE50 (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
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
