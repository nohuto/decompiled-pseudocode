/*
 * XREFs of ?bIsPathInSystemFontsDir@@YGHPBG@Z @ 0xD2AA2
 * Callers:
 *     UmfdLoadFontFileView @ 0xDDE4C (UmfdLoadFontFileView.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall bIsPathInSystemFontsDir(const wchar_t *this)
{
  size_t v2; // eax
  BOOL result; // eax

  result = 0;
  if ( gpwszFontsDirectory )
  {
    v2 = _wcsnlen(gpwszFontsDirectory, 0x104u);
    if ( !_wcsncmp(this, gpwszFontsDirectory, v2) )
      return 1;
  }
  return result;
}
