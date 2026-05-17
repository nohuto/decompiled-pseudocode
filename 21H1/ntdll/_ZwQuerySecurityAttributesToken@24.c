/*
 * XREFs of _ZwQuerySecurityAttributesToken@24 @ 0x4B2F3F20
 * Callers:
 *     _RtlpQueryPackageIdentityAttributes@20 @ 0x4B2E4EE1 (_RtlpQueryPackageIdentityAttributes@20.c)
 *     _RtlQueryTokenHostIdAsUlong64@8 @ 0x4B369B10 (_RtlQueryTokenHostIdAsUlong64@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwQuerySecurityAttributesToken(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return Wow64SystemServiceCall();
}
