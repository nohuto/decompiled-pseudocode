/*
 * XREFs of ?ParseFontLinkEntry@@YG_NPAGPAUFontLinkData@@@Z @ 0xDD1BC
 * Callers:
 *     bAddFlEntry @ 0xDCD78 (bAddFlEntry.c)
 *     bDeleteFlEntry @ 0x1F84B8 (bDeleteFlEntry.c)
 * Callees:
 *     ?ParseFontScaleFactor@@YG_NPBGPAJ@Z @ 0xDE244 (-ParseFontScaleFactor@@YG_NPBGPAJ@Z.c)
 */

char __fastcall ParseFontLinkEntry(const wchar_t *a1, const wchar_t **a2)
{
  const wchar_t *v3; // esi
  const wchar_t *v4; // esi
  const wchar_t *v5; // esi
  const wchar_t *v7; // edi
  const unsigned __int16 *v8; // [esp+0h] [ebp-Ch]
  const unsigned __int16 *v9; // [esp+0h] [ebp-Ch]
  int *v10; // [esp+4h] [ebp-8h]
  int *v11; // [esp+4h] [ebp-8h]

  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  *a2 = a1;
  v3 = &a1[_wcscspn(a1, L",")];
  if ( !*v3 )
    return 1;
  *v3 = 0;
  v4 = &v3[_wcsspn(v3 + 1, L" ") + 1];
  if ( !_iswdigit(*v4) )
  {
    a2[1] = v4;
    v5 = &v4[_wcscspn(v4, L",")];
    if ( !*v5 )
      return 1;
    *v5 = 0;
    v4 = &v5[_wcsspn(v5 + 1, L" ") + 1];
  }
  v7 = &v4[_wcscspn(v4, L",")];
  if ( *v7 )
  {
    *v7 = 0;
    _wcsspn(v7 + 1, L" ");
    if ( ParseFontScaleFactor(v8, v10) && ParseFontScaleFactor(v9, v11) )
      return 1;
  }
  return 0;
}
