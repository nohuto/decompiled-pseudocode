/*
 * XREFs of _RtlpLangNameInMultiSzString_Size@12 @ 0x4B2D2CBB
 * Callers:
 *     _RtlpMuiRegTryToAppendLangId@20 @ 0x4B2D3519 (_RtlpMuiRegTryToAppendLangId@20.c)
 *     _RtlpMuiRegTryToAppendLanguageName@20 @ 0x4B2E73F5 (_RtlpMuiRegTryToAppendLanguageName@20.c)
 * Callees:
 *     _RtlStringCchLengthW@12 @ 0x4B2D415E (_RtlStringCchLengthW@12.c)
 *     __wcsicmp @ 0x4B2F7990 (__wcsicmp.c)
 */

char __fastcall RtlpLangNameInMultiSzString_Size(wchar_t *String1, wchar_t *String2, unsigned int a3)
{
  const wchar_t *v3; // esi
  char v4; // bl
  unsigned int v6; // ecx
  _BYTE v8[4]; // [esp+Ch] [ebp-8h] BYREF
  unsigned int v9; // [esp+10h] [ebp-4h]

  v3 = String1;
  v4 = 0;
  v9 = 0;
  if ( String1 && String2 && (int)RtlStringCchLengthW(v8) >= 0 && a3 )
  {
    while ( v3 && *v3 )
    {
      if ( !_wcsicmp(v3, String2) )
        return 1;
      v6 = wcslen(v3);
      v9 += v6 + 1;
      v3 += v6 + 1;
      if ( v9 >= a3 )
        return v4;
    }
  }
  return v4;
}
