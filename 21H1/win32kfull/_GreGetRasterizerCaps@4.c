/*
 * XREFs of _GreGetRasterizerCaps@4 @ 0x221153
 * Callers:
 *     _NtGdiGetRasterizerCaps@8 @ 0x2131F9 (_NtGdiGetRasterizerCaps@8.c)
 * Callees:
 *     <none>
 */

int __thiscall GreGetRasterizerCaps(_WORD *this)
{
  if ( this )
  {
    *this = 6;
    this[1] = 2;
    this[1] = (_gcTrueTypeFonts != 0) + 2;
    this[2] = _gusLanguageID;
    return 1;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0;
  }
}
