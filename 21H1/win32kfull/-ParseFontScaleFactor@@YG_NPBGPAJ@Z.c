/*
 * XREFs of ?ParseFontScaleFactor@@YG_NPBGPAJ@Z @ 0xDE244
 * Callers:
 *     ?ParseFontLinkEntry@@YG_NPAGPAUFontLinkData@@@Z @ 0xDD1BC (-ParseFontLinkEntry@@YG_NPAGPAUFontLinkData@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ParseFontScaleFactor(wint_t *a1, signed int *a2)
{
  char v4; // bl
  signed int v5; // ecx
  wchar_t *v6; // eax
  wchar_t *EndPtr; // [esp+8h] [ebp-4h] BYREF

  if ( !_iswdigit(*a1) )
    return 0;
  v4 = 0;
  EndPtr = 0;
  v5 = _wcstoul(a1, &EndPtr, 10);
  v6 = EndPtr;
  *a2 = v5;
  if ( !*v6 )
    return v5 > 0;
  return v4;
}
