/*
 * XREFs of _RtlpAutoCompleteLanguageFallback@12 @ 0x4B35338F
 * Callers:
 *     _RtlpSetPreferredUILanguages@12 @ 0x4B3552F0 (_RtlpSetPreferredUILanguages@12.c)
 * Callees:
 *     _RtlpMuiRegGetInstalledLanguageIndexByName@16 @ 0x4B2D4753 (_RtlpMuiRegGetInstalledLanguageIndexByName@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpGetCompleteLanguageFallback@20 @ 0x4B353F7A (_RtlpGetCompleteLanguageFallback@20.c)
 *     _RtlpMuiRegGetFallbackLanguageInfoByName@20 @ 0x4B36B525 (_RtlpMuiRegGetFallbackLanguageInfoByName@20.c)
 */

int __fastcall RtlpAutoCompleteLanguageFallback(int a1, const WCHAR *a2, int a3)
{
  int result; // eax
  int v6; // ecx
  int *v7; // edx
  const WCHAR *v8; // esi
  const WCHAR *v9; // ecx
  unsigned int v11; // eax
  const WCHAR *v12; // [esp+10h] [ebp-24h] BYREF
  int v13[7]; // [esp+14h] [ebp-20h] BYREF

  if ( !a1 || !a2 || !*a2 )
    return -1073741811;
  result = RtlpMuiRegGetInstalledLanguageIndexByName(a1, a2, 1, &v12);
  if ( result >= 0 )
  {
    v6 = *(_DWORD *)(a1 + 20);
    if ( v6 && *(unsigned __int16 *)(v6 + 6) > (unsigned int)(__int16)v12 && *(_DWORD *)(v6 + 12) )
      v7 = (int *)(*(_DWORD *)(v6 + 12) + 28 * (__int16)v12);
    else
      v7 = 0;
    if ( v7 )
    {
      v8 = &a2[wcslen((const unsigned __int16 *)a2) + 1];
      if ( v8 )
      {
        while ( 1 )
        {
          result = 0;
          if ( !*v8 )
            break;
          result = RtlpMuiRegGetFallbackLanguageInfoByName(v8, 1, (int)v13);
          if ( result < 0 )
            return result;
          v9 = v8;
          v7 = v13;
          v12 = v8 + 1;
          while ( *v9++ )
            ;
          v8 += v9 - v12 + 1;
          if ( !v8 )
            goto LABEL_18;
        }
      }
      else
      {
LABEL_18:
        result = 0;
      }
      if ( (*(_BYTE *)v7 & 6) != 0 )
      {
        v11 = v8 - a2;
        if ( v11 < 0x105 )
        {
          result = RtlpGetCompleteLanguageFallback(0, v8, 261 - v11);
          if ( result >= 0 )
            return 0;
        }
        else
        {
          return -1073741789;
        }
      }
    }
    else
    {
      return -1073741275;
    }
  }
  return result;
}
