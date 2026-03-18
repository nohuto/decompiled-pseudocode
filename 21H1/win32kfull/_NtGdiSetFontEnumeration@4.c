/*
 * XREFs of _NtGdiSetFontEnumeration@4 @ 0x200FB1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtGdiSetFontEnumeration(int a1)
{
  EngSetLastError(0x32u);
  return _gulFontInformation;
}
