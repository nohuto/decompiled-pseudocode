/*
 * XREFs of _NtSetSecurityObject@12 @ 0x4B2F43F0
 * Callers:
 *     _RtlpSysVolCheckOwnerAndSecurity@8 @ 0x4B35DAEE (_RtlpSysVolCheckOwnerAndSecurity@8.c)
 *     _RtlpSysVolTakeOwnership@4 @ 0x4B35DEDD (_RtlpSysVolTakeOwnership@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtSetSecurityObject(int a1, int a2, int a3)
{
  return Wow64SystemServiceCall();
}
