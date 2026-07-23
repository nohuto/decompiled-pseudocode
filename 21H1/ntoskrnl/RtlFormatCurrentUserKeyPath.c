/*
 * XREFs of RtlFormatCurrentUserKeyPath @ 0x14068F280
 * Callers:
 *     RtlpGetRegistryHandle @ 0x140617BCC (RtlpGetRegistryHandle.c)
 *     RtlOpenCurrentUser @ 0x140777D90 (RtlOpenCurrentUser.c)
 *     AslRegistryBuildUserPath @ 0x1407ACA74 (AslRegistryBuildUserPath.c)
 *     _RegRtlOpenPredefinedKey @ 0x1407B7DD4 (_RegRtlOpenPredefinedKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14025BA90 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x1403F2750 (ZwQueryInformationToken.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     RtlLengthSidAsUnicodeString @ 0x14068F228 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x140690990 (RtlConvertSidToUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x1406D0920 (ExpAllocateStringRoutine.c)
 */

NTSTATUS __cdecl RtlFormatCurrentUserKeyPath(PUNICODE_STRING CurrentUserKeyPath)
{
  NTSTATUS result; // eax
  unsigned __int16 v3; // di
  SIZE_T v4; // rcx
  wchar_t *StringRoutine; // rax
  wchar_t *Buffer; // rax
  unsigned __int64 v7; // rdx
  int v8; // edi
  ULONG StringLength; // [rsp+38h] [rbp-39h] BYREF
  ULONG ReturnLength; // [rsp+3Ch] [rbp-35h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-31h] BYREF
  PSID TokenInformation[12]; // [rsp+58h] [rbp-19h] BYREF

  ReturnLength = 0;
  StringLength = 0;
  *(_DWORD *)(&UnicodeString.MaximumLength + 1) = 0;
  result = ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, TokenUser, TokenInformation, 0x58u, &ReturnLength);
  if ( result >= 0 )
  {
    result = RtlLengthSidAsUnicodeString(TokenInformation[0], &StringLength);
    if ( result >= 0 )
    {
      v3 = StringLength;
      CurrentUserKeyPath->Length = 0;
      v4 = (unsigned __int16)(v3 + 34);
      CurrentUserKeyPath->MaximumLength = v4;
      StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v4);
      CurrentUserKeyPath->Buffer = StringRoutine;
      if ( StringRoutine )
      {
        RtlAppendUnicodeToString(CurrentUserKeyPath, L"\\REGISTRY\\USER\\");
        Buffer = CurrentUserKeyPath->Buffer;
        v7 = (unsigned __int64)CurrentUserKeyPath->Length >> 1;
        UnicodeString.MaximumLength = v3;
        UnicodeString.Length = 0;
        UnicodeString.Buffer = &Buffer[v7];
        v8 = RtlConvertSidToUnicodeString(&UnicodeString, TokenInformation[0], 0);
        if ( v8 < 0 )
          RtlFreeAnsiString(CurrentUserKeyPath);
        else
          CurrentUserKeyPath->Length += UnicodeString.Length;
        return v8;
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return result;
}
