/*
 * XREFs of __RtlpMuiRegInitPartialLanguage@12 @ 0x4B36C7D0
 * Callers:
 *     _RtlpMuiRegAddLanguageByName@24 @ 0x4B2AC9AE (_RtlpMuiRegAddLanguageByName@24.c)
 * Callees:
 *     __RtlpMuiRegPopulateBaseLanguages@20 @ 0x4B36C81E (__RtlpMuiRegPopulateBaseLanguages@20.c)
 */

int __fastcall _RtlpMuiRegInitPartialLanguage(int a1, int a2, _BYTE *a3)
{
  int v4; // [esp+8h] [ebp-4h] BYREF

  v4 = 0;
  if ( !a1 || !a2 || !a3 || (*a3 & 2) == 0 )
    return -1073741811;
  if ( _RtlpMuiRegPopulateBaseLanguages(a3, &v4, a1) < 0 )
    *(_WORD *)a3 |= 0x1000u;
  if ( !v4 )
    *(_WORD *)a3 |= 0x1000u;
  return 0;
}
