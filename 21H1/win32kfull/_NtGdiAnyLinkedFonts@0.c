/*
 * XREFs of _NtGdiAnyLinkedFonts@0 @ 0xAE714
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall NtGdiAnyLinkedFonts()
{
  return gbAnyLinkedFonts || gappfeSysEUDC || dword_27569C;
}
