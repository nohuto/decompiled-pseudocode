/*
 * XREFs of _RtlConvertSidToUnicodeString@12 @ 0x4B2D3990
 * Callers:
 *     _RtlFormatCurrentUserKeyPath@4 @ 0x4B2D3860 (_RtlFormatCurrentUserKeyPath@4.c)
 *     _AVrfpAppendCurrentUserSid@4 @ 0x4B338986 (_AVrfpAppendCurrentUserSid@4.c)
 *     _WerEscalationLazyInit@0 @ 0x4B33B780 (_WerEscalationLazyInit@0.c)
 *     _RtlpGetTokenNamedObjectPath@16 @ 0x4B348B45 (_RtlpGetTokenNamedObjectPath@16.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x4B38B10C (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     _RtlIntegerToUnicode@16 @ 0x4B2D3B50 (_RtlIntegerToUnicode@16.c)
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 *     _RtlCreateUnicodeString@8 @ 0x4B2D40C0 (_RtlCreateUnicodeString@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _wcscat_s @ 0x4B300500 (_wcscat_s.c)
 *     _wcscpy_s @ 0x4B300590 (_wcscpy_s.c)
 *     _RtlLargeIntegerToUnicode@16 @ 0x4B3506E9 (_RtlLargeIntegerToUnicode@16.c)
 */

NTSTATUS __stdcall RtlConvertSidToUnicodeString(
        PUNICODE_STRING UnicodeString,
        PSID Sid,
        BOOLEAN AllocateDestinationString)
{
  int v3; // ebx
  const wchar_t *v4; // esi
  _BYTE *v5; // esi
  NTSTATUS result; // eax
  char v7; // bl
  unsigned int MaximumLength; // esi
  wchar_t *Buffer; // edi
  rsize_t v10; // [esp-Ch] [ebp-220h]
  size_t v11; // [esp-Ch] [ebp-220h]
  rsize_t v12; // [esp-Ch] [ebp-220h]
  const wchar_t *v13; // [esp-4h] [ebp-218h]
  wchar_t Destination[4]; // [esp+10h] [ebp-204h] BYREF
  _BYTE v15[4]; // [esp+18h] [ebp-1FCh] BYREF
  _BYTE v16[496]; // [esp+1Ch] [ebp-1F8h] BYREF
  _BYTE v17[2]; // [esp+20Ch] [ebp-8h] BYREF
  _BYTE v18[2]; // [esp+20Eh] [ebp-6h] BYREF

  if ( RtlValidSid(Sid) != 1 || *(_BYTE *)Sid != 1 )
    return -1073741704;
  HIDWORD(v10) = L"S-1-";
  LODWORD(v10) = 256;
  wcscpy_s(Destination, v10, v4);
  v5 = v15;
  if ( *((_BYTE *)Sid + 2) || *((_BYTE *)Sid + 3) )
  {
    HIDWORD(v12) = L"0x";
    LODWORD(v12) = 256;
    wcscat_s(Destination, v12, v13);
    v5 = v16;
    result = RtlLargeIntegerToUnicode(250, v16);
  }
  else
  {
    result = RtlIntegerToUnicode(252, v15);
  }
  if ( result >= 0 )
  {
    HIDWORD(v11) = v3;
    v7 = 0;
    if ( *((_BYTE *)Sid + 1) )
    {
      while ( 1 )
      {
        for ( ; v5 < v17; v5 += 2 )
        {
          if ( !*(_WORD *)v5 )
            break;
        }
        *(_WORD *)v5 = 45;
        v5 += 2;
        result = RtlIntegerToUnicode(256 - ((v5 - (_BYTE *)Destination) >> 1), v5);
        if ( result < 0 )
          break;
        if ( (unsigned __int8)++v7 >= *((_BYTE *)Sid + 1) )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      if ( AllocateDestinationString )
      {
        if ( !RtlCreateUnicodeString(UnicodeString, (PCWSTR)Destination) )
          return -1073741801;
      }
      else
      {
        for ( ; v5 < v18; v5 += 2 )
        {
          if ( !*(_WORD *)v5 )
            break;
        }
        MaximumLength = (v5 - (_BYTE *)Destination) & 0xFFFFFFFE;
        if ( MaximumLength >= UnicodeString->MaximumLength )
          return -2147483643;
        Buffer = UnicodeString->Buffer;
        MaximumLength = (unsigned __int16)MaximumLength;
        if ( (unsigned __int16)MaximumLength > UnicodeString->MaximumLength )
          MaximumLength = UnicodeString->MaximumLength;
        LODWORD(v11) = MaximumLength;
        UnicodeString->Length = MaximumLength;
        memcpy(Buffer, Destination, v11);
        if ( (unsigned int)UnicodeString->Length + 2 <= UnicodeString->MaximumLength )
          Buffer[MaximumLength >> 1] = 0;
      }
      return 0;
    }
  }
  return result;
}
