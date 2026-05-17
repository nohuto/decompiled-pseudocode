/*
 * XREFs of _NtWow64CsrVerifyRegion@8 @ 0x4B2F4780
 * Callers:
 *     _CsrVerifyRegion@8 @ 0x4B33E890 (_CsrVerifyRegion@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtWow64CsrVerifyRegion(int a1, int a2)
{
  return Wow64SystemServiceCall();
}
