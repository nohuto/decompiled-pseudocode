/*
 * XREFs of _RtlUnicodeStringToLcid@8 @ 0x4B352FCF
 * Callers:
 *     _RtlGetUILanguageInfo@20 @ 0x4B352940 (_RtlGetUILanguageInfo@20.c)
 *     _RtlpConvertLCIDsToCultureNames@8 @ 0x4B353B60 (_RtlpConvertLCIDsToCultureNames@8.c)
 *     _RtlpSetInstallLanguage@8 @ 0x4B354A70 (_RtlpSetInstallLanguage@8.c)
 * Callees:
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _RtlUnicodeStringToInteger@12 @ 0x4B2E07A0 (_RtlUnicodeStringToInteger@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _iswctype @ 0x4B2F86F0 (_iswctype.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlIsValidLocaleName@8 @ 0x4B3630F0 (_RtlIsValidLocaleName@8.c)
 */

int __fastcall RtlUnicodeStringToLcid(_UNICODE_STRING *a1, ULONG *a2)
{
  int v2; // edi
  unsigned int v5; // esi
  int v6; // ebx
  size_t v8; // [esp-4h] [ebp-DCh]
  _UNICODE_STRING v10; // [esp+14h] [ebp-C4h] BYREF
  PUNICODE_STRING String; // [esp+1Ch] [ebp-BCh]
  _BYTE v12[180]; // [esp+20h] [ebp-B8h] BYREF

  v2 = 0;
  LODWORD(v8) = 170;
  String = a1;
  memset(v12, 0, v8);
  if ( !a1 )
    return -1073741811;
  if ( !a2 )
    return -1073741811;
  v5 = a1->Length >> 1;
  if ( v5 > 4 )
    return -1073741811;
  v6 = 0;
  if ( v5 )
  {
    while ( iswctype(String->Buffer[v6], 0x80u) )
    {
      if ( ++v6 >= v5 )
        goto LABEL_7;
    }
    return -1073741811;
  }
LABEL_7:
  if ( RtlUnicodeStringToInteger(String, 0x10u, a2) < 0 )
    return -1073741811;
  *(_DWORD *)&v10.Length = 11141290;
  v10.Buffer = (wchar_t *)v12;
  if ( !RtlLCIDToCultureName(*a2, &v10) || !RtlIsValidLocaleName((PCWSTR)v10.Buffer, 2u) )
    return -1073741811;
  return v2;
}
