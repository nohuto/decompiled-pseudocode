/*
 * XREFs of RtlFormatCurrentUserKeyPath @ 0x180036C40
 * Callers:
 *     RtlOpenCurrentUser @ 0x180016790 (RtlOpenCurrentUser.c)
 *     RtlpGetRegistryHandle @ 0x18004595C (RtlpGetRegistryHandle.c)
 *     LdrpCodeAuthzInitialize @ 0x18007B340 (LdrpCodeAuthzInitialize.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlLengthSidAsUnicodeString @ 0x180036D50 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x180037250 (RtlConvertSidToUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180037990 (RtlAppendUnicodeToString.c)
 *     NtdllpAllocateStringRoutine @ 0x18006DBB0 (NtdllpAllocateStringRoutine.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x18009D4D0 (NtQueryInformationToken.c)
 */

__int64 __fastcall RtlFormatCurrentUserKeyPath(PUNICODE_STRING UnicodeString)
{
  __int64 result; // rax
  unsigned __int16 v3; // di
  __int64 v4; // rcx
  wchar_t *StringRoutine; // rax
  wchar_t *Buffer; // rax
  unsigned __int64 v7; // rdx
  NTSTATUS v8; // edi
  int v9; // [rsp+30h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeStringa; // [rsp+38h] [rbp-90h] BYREF
  PSID Sid[12]; // [rsp+50h] [rbp-78h] BYREF

  result = NtQueryInformationToken(-6LL, 1LL, Sid);
  if ( (int)result >= 0 )
  {
    result = RtlLengthSidAsUnicodeString(Sid[0], &v9);
    if ( (int)result >= 0 )
    {
      v3 = v9;
      UnicodeString->Length = 0;
      v4 = (unsigned __int16)(v3 + 34);
      UnicodeString->MaximumLength = v4;
      StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v4);
      UnicodeString->Buffer = StringRoutine;
      if ( StringRoutine )
      {
        RtlAppendUnicodeToString(UnicodeString, L"\\REGISTRY\\USER\\");
        Buffer = UnicodeString->Buffer;
        v7 = (unsigned __int64)UnicodeString->Length >> 1;
        UnicodeStringa.MaximumLength = v3;
        UnicodeStringa.Length = 0;
        UnicodeStringa.Buffer = &Buffer[v7];
        v8 = RtlConvertSidToUnicodeString(&UnicodeStringa, Sid[0], 0);
        if ( v8 < 0 )
          RtlFreeAnsiString(UnicodeString);
        else
          UnicodeString->Length += UnicodeStringa.Length;
        return (unsigned int)v8;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
  return result;
}
