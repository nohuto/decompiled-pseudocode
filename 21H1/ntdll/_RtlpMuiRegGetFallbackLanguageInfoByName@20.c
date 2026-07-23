/*
 * XREFs of _RtlpMuiRegGetFallbackLanguageInfoByName@20 @ 0x4B36B525
 * Callers:
 *     _RtlGetUILanguageInfo@20 @ 0x4B352940 (_RtlGetUILanguageInfo@20.c)
 *     _RtlpAutoCompleteLanguageFallback@12 @ 0x4B35338F (_RtlpAutoCompleteLanguageFallback@12.c)
 *     _RtlpMuiRegGetFallbackLanguageInfoByLangId@20 @ 0x4B36B3BE (_RtlpMuiRegGetFallbackLanguageInfoByLangId@20.c)
 * Callees:
 *     _RtlpMuiRegGetOrAddString@16 @ 0x4B2AD813 (_RtlpMuiRegGetOrAddString@16.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _RtlpMuiRegGetFallbackLanguageInfoByLangId@20 @ 0x4B36B3BE (_RtlpMuiRegGetFallbackLanguageInfoByLangId@20.c)
 */

int __fastcall RtlpMuiRegGetFallbackLanguageInfoByName(_DWORD *a1, int a2, WCHAR *SourceString, char a4, _WORD *a5)
{
  _WORD *v7; // ebx
  int v8; // eax
  __int16 v9; // dx
  __int16 v10; // ax
  __int16 v12; // [esp+10h] [ebp-18h] BYREF
  int v13; // [esp+14h] [ebp-14h]
  int v14; // [esp+18h] [ebp-10h]
  DWORD Lcid; // [esp+1Ch] [ebp-Ch] BYREF
  _UNICODE_STRING DestinationString; // [esp+20h] [ebp-8h] BYREF

  if ( !a1 )
    return -1073741811;
  if ( !a2 )
    return -1073741811;
  if ( !SourceString )
    return -1073741811;
  v7 = a5;
  if ( !a5 )
    return -1073741811;
  if ( RtlpMuiRegGetOrAddString(a1, SourceString, 0, &v12) < 0 )
  {
LABEL_13:
    if ( a4
      && (RtlInitUnicodeString(&DestinationString, SourceString), RtlCultureNameToLCID(&DestinationString, &Lcid))
      && Lcid != 4096 )
    {
      return RtlpMuiRegGetFallbackLanguageInfoByLangId((int)a1, a2, Lcid, 0, v7);
    }
    else
    {
      return -1073741772;
    }
  }
  v13 = 0;
  LOBYTE(v8) = 0;
  v14 = 0;
  while ( 1 )
  {
    v9 = (*(_WORD *)(a2 + 8) >> v8) & 3;
    v10 = *(_WORD *)(a2 + 2 * (__int16)v13 + 12);
    if ( v9 != 2 )
      break;
    Lcid = *(_DWORD *)(a1[5] + 12);
    v7 = a5;
    if ( *(_WORD *)(28 * v10 + Lcid + 6) == v12 )
    {
      qmemcpy(a5, (const void *)(Lcid + 28 * v10), 0x1Cu);
      return 0;
    }
LABEL_12:
    ++v13;
    v8 = v14 + 2;
    v14 = v8;
    if ( (__int16)v8 >= 8 )
      goto LABEL_13;
  }
  if ( v10 == v12 || v9 == 3 )
    goto LABEL_12;
  memset(v7, 0, 0x1Cu);
  v7[3] = v12;
  return 0;
}
