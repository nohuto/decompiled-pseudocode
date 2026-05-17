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
  _BYTE *v3; // esi
  NTSTATUS result; // eax
  char v5; // bl
  unsigned int MaximumLength; // esi
  wchar_t *Buffer; // edi
  wchar_t Destination[4]; // [esp+10h] [ebp-204h] BYREF
  _BYTE v9[4]; // [esp+18h] [ebp-1FCh] BYREF
  _BYTE v10[496]; // [esp+1Ch] [ebp-1F8h] BYREF
  _BYTE v11[2]; // [esp+20Ch] [ebp-8h] BYREF
  _BYTE v12[2]; // [esp+20Eh] [ebp-6h] BYREF

  if ( (unsigned __int8)RtlValidSid(Sid) != 1 || *(_BYTE *)Sid != 1 )
    return -1073741704;
  wcscpy_s(Destination, 0x100u, L"S-1-");
  v3 = v9;
  if ( *((_BYTE *)Sid + 2) || *((_BYTE *)Sid + 3) )
  {
    wcscat_s(Destination, 0x100u, L"0x");
    v3 = v10;
    result = RtlLargeIntegerToUnicode(250, v10);
  }
  else
  {
    result = RtlIntegerToUnicode(252, v9);
  }
  if ( result >= 0 )
  {
    v5 = 0;
    if ( *((_BYTE *)Sid + 1) )
    {
      while ( 1 )
      {
        for ( ; v3 < v11; v3 += 2 )
        {
          if ( !*(_WORD *)v3 )
            break;
        }
        *(_WORD *)v3 = 45;
        v3 += 2;
        result = RtlIntegerToUnicode(256 - ((v3 - (_BYTE *)Destination) >> 1), v3);
        if ( result < 0 )
          break;
        if ( (unsigned __int8)++v5 >= *((_BYTE *)Sid + 1) )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      if ( AllocateDestinationString )
      {
        if ( !(unsigned __int8)RtlCreateUnicodeString((int)UnicodeString, Destination) )
          return -1073741801;
      }
      else
      {
        for ( ; v3 < v12; v3 += 2 )
        {
          if ( !*(_WORD *)v3 )
            break;
        }
        MaximumLength = (v3 - (_BYTE *)Destination) & 0xFFFFFFFE;
        if ( MaximumLength >= UnicodeString->MaximumLength )
          return -2147483643;
        Buffer = UnicodeString->Buffer;
        MaximumLength = (unsigned __int16)MaximumLength;
        if ( (unsigned __int16)MaximumLength > UnicodeString->MaximumLength )
          MaximumLength = UnicodeString->MaximumLength;
        UnicodeString->Length = MaximumLength;
        memcpy(Buffer, Destination, MaximumLength);
        if ( (unsigned int)UnicodeString->Length + 2 <= UnicodeString->MaximumLength )
          Buffer[MaximumLength >> 1] = 0;
      }
      return 0;
    }
  }
  return result;
}
