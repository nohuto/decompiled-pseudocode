/*
 * XREFs of _RtlpGetNameFromLangInfoNode@12 @ 0x4B2AC660
 * Callers:
 *     __RtlpMuiRegValidateInstalled@4 @ 0x4B2AC387 (__RtlpMuiRegValidateInstalled@4.c)
 *     _RtlpAddLanguagesToMultiSZ@28 @ 0x4B35313F (_RtlpAddLanguagesToMultiSZ@28.c)
 * Callees:
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _RtlStringCbCopyW@12 @ 0x4B2D5C0F (_RtlStringCbCopyW@12.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __stdcall RtlpGetNameFromLangInfoNode(int a1, int a2, PUNICODE_STRING String)
{
  int v3; // esi
  __int16 v4; // cx
  LCID v6; // eax
  _UNICODE_STRING DestinationString; // [esp+8h] [ebp-Ch] BYREF

  v3 = 0;
  if ( a1 && a2 && String )
  {
    v4 = *(_WORD *)(a2 + 6);
    if ( v4 <= 0 )
    {
      v6 = *(unsigned __int16 *)(a2 + 4);
      if ( (_WORD)v6 != 4096 && (_WORD)v6 != 5120 && RtlLCIDToCultureName(v6, String) )
        return v3;
    }
    else
    {
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 16)
               + 2 * *(__int16 *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 12) + 2 * v4)));
      if ( DestinationString.Length <= String->MaximumLength && (int)RtlStringCbCopyW(DestinationString.Buffer) >= 0 )
      {
        String->Length = DestinationString.Length;
        return v3;
      }
    }
    return -1073741595;
  }
  return -1073741811;
}
