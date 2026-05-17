/*
 * XREFs of _CsrVerifyRegion@8 @ 0x4B33E890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall CsrVerifyRegion(int a1, int a2)
{
  return NtWow64CsrVerifyRegion(a1, a2);
}
