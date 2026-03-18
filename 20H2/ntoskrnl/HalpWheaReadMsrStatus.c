/*
 * XREFs of HalpWheaReadMsrStatus @ 0x1403A055C
 * Callers:
 *     HalpMcaReadErrorPresence @ 0x1403A04D8 (HalpMcaReadErrorPresence.c)
 *     HalpMcaReadError @ 0x1404B8E50 (HalpMcaReadError.c)
 *     HalpMcaProcessorBankClearAMD @ 0x1404BB908 (HalpMcaProcessorBankClearAMD.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x1403A067C (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpWheaReadMsrStatus(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rdx

  if ( (unsigned __int8)HalpGetCpuVendor() == 1 && HalpMcaScalableRasSupported )
    v6 = (unsigned int)(16 * a2 - 1073733631);
  else
    v6 = (unsigned int)(4 * a2 + 1025);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))HalpWheaReadMsr)(a1, v6, a3);
}
