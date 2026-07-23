/*
 * XREFs of AVrfpAppendCurrentUserSid @ 0x1800DA404
 * Callers:
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800DA2FC (AVrfOpenCurrentUserImageFileOptionsKey.c)
 * Callees:
 *     RtlConvertSidToUnicodeString @ 0x180037250 (RtlConvertSidToUnicodeString.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtQueryInformationToken @ 0x18009D230 (NtQueryInformationToken.c)
 *     NtOpenProcessTokenEx @ 0x18009D410 (NtOpenProcessTokenEx.c)
 */

NTSTATUS __fastcall AVrfpAppendCurrentUserSid(__int16 *a1)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int16 v6; // cx
  bool v7; // cf
  __int16 v8; // r8
  HANDLE TokenHandle; // [rsp+38h] [rbp-39h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-31h] BYREF
  ULONG ReturnLength; // [rsp+50h] [rbp-21h] BYREF
  PSID TokenInformation[12]; // [rsp+58h] [rbp-19h] BYREF

  TokenHandle = 0LL;
  result = NtOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
  if ( result >= 0 )
  {
    v3 = NtQueryInformationToken(TokenHandle, 1u, TokenInformation, 0x58u, &ReturnLength);
    NtClose(TokenHandle);
    if ( v3 >= 0 )
    {
      v4 = (unsigned __int16)*a1;
      UnicodeString.MaximumLength = a1[1] - v4;
      v5 = *((_QWORD *)a1 + 1);
      UnicodeString.Length = 0;
      UnicodeString.Buffer = (wchar_t *)(v5 + 2 * (v4 >> 1));
      result = RtlConvertSidToUnicodeString(&UnicodeString, TokenInformation[0], 0);
      if ( result >= 0 )
      {
        v6 = UnicodeString.Length + *a1;
        v7 = v6 < (unsigned __int16)*a1;
        if ( v6 < (unsigned __int16)*a1 )
          v8 = -1;
        else
          v8 = UnicodeString.Length + *a1;
        *a1 = v8;
        if ( v7 )
          return -1073741789;
      }
    }
    else
    {
      return v3;
    }
  }
  return result;
}
