/*
 * XREFs of HalpWheaReadMsrAddress @ 0x1404CA890
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x1404B579C (HalpMcaPopulateErrorData.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14039E1AC (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpWheaReadMsrAddress(__int64 a1, int a2)
{
  __int64 v4; // rdx

  if ( HalpGetCpuVendor() == 1 && HalpMcaScalableRasSupported )
    v4 = (unsigned int)(16 * a2 - 1073733630);
  else
    v4 = (unsigned int)(4 * a2 + 1026);
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD))HalpWheaReadMsr)(a1, v4, 0LL);
}
