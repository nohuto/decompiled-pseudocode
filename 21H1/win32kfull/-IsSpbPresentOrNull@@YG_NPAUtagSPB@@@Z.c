/*
 * XREFs of ?IsSpbPresentOrNull@@YG_NPAUtagSPB@@@Z @ 0xF3F28
 * Callers:
 *     _SpbCheckPwnd@4 @ 0x17E6EC (_SpbCheckPwnd@4.c)
 *     _SpbCheckRect@12 @ 0x17E755 (_SpbCheckRect@12.c)
 * Callees:
 *     <none>
 */

char __thiscall IsSpbPresentOrNull(_DWORD *this)
{
  _DWORD *i; // eax

  if ( !this )
    return 1;
  for ( i = *(_DWORD **)(_gpDispInfo + 16); i; i = (_DWORD *)*i )
  {
    if ( i == this )
      return 1;
  }
  return 0;
}
