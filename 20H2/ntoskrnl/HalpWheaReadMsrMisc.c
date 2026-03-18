/*
 * XREFs of HalpWheaReadMsrMisc @ 0x1404CDE48
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x1404B8CBC (HalpMcaPopulateErrorData.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x1404BB440 (HalpCmciSetProcessorConfigAMD.c)
 *     HalpIsCmciImplementedAMD @ 0x1409AA0C0 (HalpIsCmciImplementedAMD.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x1403A067C (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpWheaReadMsrMisc(__int64 a1, int a2)
{
  __int64 v4; // rdx

  if ( HalpGetCpuVendor() == 1 && HalpMcaScalableRasSupported )
    v4 = (unsigned int)(16 * a2 - 1073733629);
  else
    v4 = (unsigned int)(4 * a2 + 1027);
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD))HalpWheaReadMsr)(a1, v4, 0LL);
}
