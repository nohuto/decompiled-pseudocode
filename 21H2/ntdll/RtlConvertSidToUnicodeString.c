/*
 * XREFs of RtlConvertSidToUnicodeString @ 0x180037250
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x180036C40 (RtlFormatCurrentUserKeyPath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180044040 (RtlpGetTokenNamedObjectPath.c)
 *     AVrfpAppendCurrentUserSid @ 0x1800DA514 (AVrfpAppendCurrentUserSid.c)
 *     WerEscalationLazyInit @ 0x1800DE178 (WerEscalationLazyInit.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180119C20 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     RtlIntegerToUnicode @ 0x180037440 (RtlIntegerToUnicode.c)
 *     RtlValidSid @ 0x180037950 (RtlValidSid.c)
 *     RtlCreateUnicodeString @ 0x180038AF0 (RtlCreateUnicodeString.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     wcscat_s @ 0x180098250 (wcscat_s.c)
 *     wcscpy_s @ 0x1800982F0 (wcscpy_s.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 *     RtlLargeIntegerToUnicode @ 0x1800EDB80 (RtlLargeIntegerToUnicode.c)
 */

NTSTATUS __stdcall RtlConvertSidToUnicodeString(
        PUNICODE_STRING UnicodeString,
        PSID Sid,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS v6; // edi
  char *v7; // rbx
  NTSTATUS result; // eax
  unsigned __int8 v9; // r14
  unsigned int MaximumLength; // ecx
  unsigned int v11; // ebx
  wchar_t *Buffer; // rsi
  unsigned __int64 v13; // rbx
  size_t v14; // r8
  wchar_t *v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  _DWORD v18[4]; // [rsp+20h] [rbp-E0h] BYREF
  wchar_t Destination; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v20[4]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v21[496]; // [rsp+3Ch] [rbp-C4h] BYREF
  char v22; // [rsp+22Ch] [rbp+12Ch] BYREF
  char v23; // [rsp+22Eh] [rbp+12Eh] BYREF

  if ( RtlValidSid(Sid) != 1 || *(_BYTE *)Sid != 1 )
    return -1073741704;
  wcscpy_s(&Destination, 0x100uLL, L"S-1-");
  v6 = 0;
  v7 = v20;
  if ( *((_BYTE *)Sid + 2) || *((_BYTE *)Sid + 3) )
  {
    wcscat_s(&Destination, 0x100uLL, L"0x");
    v7 = v21;
    v16 = *((unsigned __int8 *)Sid + 5);
    v18[1] = (*((unsigned __int8 *)Sid + 2) << 8) + *((unsigned __int8 *)Sid + 3);
    v18[0] = *((unsigned __int8 *)Sid + 7)
           + (*((unsigned __int8 *)Sid + 6) << 8)
           + (v16 << 16)
           + (*((unsigned __int8 *)Sid + 4) << 24);
    result = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, _BYTE *))RtlLargeIntegerToUnicode)(
               v18,
               v17,
               250LL,
               v21);
  }
  else
  {
    result = RtlIntegerToUnicode(
               *((unsigned __int8 *)Sid + 7)
             + (*((unsigned __int8 *)Sid + 6) << 8)
             + (*((unsigned __int8 *)Sid + 5) << 16)
             + (*((unsigned __int8 *)Sid + 4) << 24),
               10LL,
               252LL,
               v20);
  }
  if ( result >= 0 )
  {
    v9 = 0;
    if ( *((_BYTE *)Sid + 1) )
    {
      while ( 1 )
      {
        while ( v7 < &v22 && *(_WORD *)v7 )
          v7 += 2;
        *(_WORD *)v7 = 45;
        v7 += 2;
        result = RtlIntegerToUnicode(
                   *((unsigned int *)Sid + v9 + 2),
                   10LL,
                   256 - (unsigned int)((v7 - (char *)&Destination) >> 1),
                   v7);
        if ( result < 0 )
          break;
        if ( ++v9 >= *((_BYTE *)Sid + 1) )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      if ( AllocateDestinationString )
        return RtlCreateUnicodeString(UnicodeString, &Destination) == 0 ? 0xC0000017 : 0;
      while ( v7 < &v23 && *(_WORD *)v7 )
        v7 += 2;
      MaximumLength = UnicodeString->MaximumLength;
      v11 = 2 * ((v7 - (char *)&Destination) >> 1);
      if ( v11 >= MaximumLength )
        return -2147483643;
      Buffer = UnicodeString->Buffer;
      if ( (unsigned __int16)v11 <= (unsigned __int16)MaximumLength )
        MaximumLength = (unsigned __int16)v11;
      v13 = MaximumLength;
      v14 = MaximumLength;
      v15 = UnicodeString->Buffer;
      UnicodeString->Length = v13;
      memmove(v15, &Destination, v14);
      if ( (unsigned __int64)UnicodeString->Length + 2 <= UnicodeString->MaximumLength )
        Buffer[v13 >> 1] = 0;
      return v6;
    }
  }
  return result;
}
