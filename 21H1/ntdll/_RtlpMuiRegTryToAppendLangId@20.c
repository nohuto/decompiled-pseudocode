/*
 * XREFs of _RtlpMuiRegTryToAppendLangId@20 @ 0x4B2D3519
 * Callers:
 *     _RtlpMuiRegTryToAppendLanguageToMuiszFromLangList@24 @ 0x4B2D3477 (_RtlpMuiRegTryToAppendLanguageToMuiszFromLangList@24.c)
 *     _RtlpMuiRegGetFallbackLanguagesAsMultiSZ@20 @ 0x4B36B664 (_RtlpMuiRegGetFallbackLanguagesAsMultiSZ@20.c)
 * Callees:
 *     _RtlpLangNameInMultiSzString_Size@12 @ 0x4B2D2CBB (_RtlpLangNameInMultiSzString_Size@12.c)
 *     _RtlIntegerToUnicode@16 @ 0x4B2D3B50 (_RtlIntegerToUnicode@16.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall RtlpMuiRegTryToAppendLangId(int a1, int a2, unsigned int *a3, wchar_t *String1, unsigned int a5)
{
  DWORD v5; // edi
  int v6; // esi
  unsigned int v7; // ecx
  unsigned int v8; // edi
  __int16 v10; // ax
  size_t v11; // [esp-4h] [ebp-38h]
  unsigned int v12; // [esp+Ch] [ebp-28h]
  DWORD Lcid; // [esp+14h] [ebp-20h] BYREF
  _UNICODE_STRING DestinationString; // [esp+18h] [ebp-1Ch] BYREF
  _DWORD SourceString[2]; // [esp+20h] [ebp-14h] BYREF
  __int16 v16; // [esp+28h] [ebp-Ch]

  Lcid = 0;
  SourceString[0] = 0;
  SourceString[1] = 0;
  v16 = 0;
  if ( a2 && a1 && a3 )
  {
    v12 = *a3;
    if ( *(_WORD *)(a2 + 4) )
    {
      v5 = *(unsigned __int16 *)(a2 + 4);
    }
    else
    {
      v10 = *(_WORD *)(a2 + 6);
      if ( v10 <= 0 )
        return -1073741595;
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 16)
               + 2 * *(__int16 *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 12) + 2 * v10)));
      if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
        return -1073741811;
      v5 = Lcid;
    }
    v6 = RtlIntegerToUnicode(-4, SourceString);
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, (PCWSTR)SourceString);
      v7 = a5;
      if ( v5 == 4096 || !*a3 || *a3 > a5 )
      {
LABEL_12:
        v8 = (DestinationString.Length >> 1) + v12 + 1;
        if ( String1 && v12 < v8 )
        {
          if ( v8 < v7 )
          {
            LODWORD(v11) = DestinationString.Length;
            memcpy(&String1[v12], DestinationString.Buffer, v11);
            String1[v8 - 1] = 0;
LABEL_16:
            *a3 = v8;
            return v6;
          }
        }
        else if ( v8 < v7 )
        {
          goto LABEL_16;
        }
        if ( String1 )
          v6 = -1073741789;
        goto LABEL_16;
      }
      if ( !RtlpLangNameInMultiSzString_Size(String1, DestinationString.Buffer, *a3) )
      {
        v7 = a5;
        goto LABEL_12;
      }
    }
    return v6;
  }
  return -1073741811;
}
