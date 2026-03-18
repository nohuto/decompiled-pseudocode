/*
 * XREFs of RtlFormatCurrentUserKeyPath @ 0x1406FB700
 * Callers:
 *     RtlpGetRegistryHandle @ 0x14066D824 (RtlpGetRegistryHandle.c)
 *     RtlOpenCurrentUser @ 0x1407887A0 (RtlOpenCurrentUser.c)
 *     AslRegistryBuildUserPath @ 0x1407BDB14 (AslRegistryBuildUserPath.c)
 *     _RegRtlOpenPredefinedKey @ 0x1407C97D4 (_RegRtlOpenPredefinedKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140267DE0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x1403F8590 (ZwQueryInformationToken.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     ExpAllocateStringRoutine @ 0x1406C4F70 (ExpAllocateStringRoutine.c)
 *     RtlLengthSidAsUnicodeString @ 0x1406FB6A8 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x1406FDB70 (RtlConvertSidToUnicodeString.c)
 */

int __fastcall RtlFormatCurrentUserKeyPath(PUNICODE_STRING UnicodeString)
{
  int result; // eax
  unsigned __int16 v3; // di
  SIZE_T v4; // rcx
  wchar_t *StringRoutine; // rax
  wchar_t *Buffer; // rax
  unsigned __int64 v7; // rdx
  NTSTATUS v8; // edi
  int v9; // [rsp+38h] [rbp-39h] BYREF
  ULONG ReturnLength; // [rsp+3Ch] [rbp-35h] BYREF
  UNICODE_STRING UnicodeStringa; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int8 *TokenInformation; // [rsp+58h] [rbp-19h] BYREF

  ReturnLength = 0;
  v9 = 0;
  *(_DWORD *)(&UnicodeStringa.MaximumLength + 1) = 0;
  result = ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, TokenUser, &TokenInformation, 0x58u, &ReturnLength);
  if ( result >= 0 )
  {
    result = RtlLengthSidAsUnicodeString(TokenInformation, &v9);
    if ( result >= 0 )
    {
      v3 = v9;
      UnicodeString->Length = 0;
      v4 = (unsigned __int16)(v3 + 34);
      UnicodeString->MaximumLength = v4;
      StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v4);
      UnicodeString->Buffer = StringRoutine;
      if ( StringRoutine )
      {
        RtlAppendUnicodeToString(UnicodeString, L"\\REGISTRY\\USER\\");
        Buffer = UnicodeString->Buffer;
        v7 = (unsigned __int64)UnicodeString->Length >> 1;
        UnicodeStringa.MaximumLength = v3;
        UnicodeStringa.Length = 0;
        UnicodeStringa.Buffer = &Buffer[v7];
        v8 = RtlConvertSidToUnicodeString(&UnicodeStringa, TokenInformation, 0);
        if ( v8 < 0 )
          RtlFreeAnsiString(UnicodeString);
        else
          UnicodeString->Length += UnicodeStringa.Length;
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
