/*
 * XREFs of _NtQuerySecurityObject@20 @ 0x4B2F3F30
 * Callers:
 *     _RtlAppxIsFileOwnedByTrustedInstaller@8 @ 0x4B32C800 (_RtlAppxIsFileOwnedByTrustedInstaller@8.c)
 *     _RtlIsUntrustedObject@12 @ 0x4B3465C0 (_RtlIsUntrustedObject@12.c)
 *     _RtlpSysVolCheckOwnerAndSecurity@8 @ 0x4B35DAEE (_RtlpSysVolCheckOwnerAndSecurity@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtQuerySecurityObject(int a1, int a2, int a3, int a4, int a5)
{
  return Wow64SystemServiceCall();
}
