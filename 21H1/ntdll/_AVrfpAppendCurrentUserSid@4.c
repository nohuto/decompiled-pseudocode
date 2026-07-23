/*
 * XREFs of _AVrfpAppendCurrentUserSid@4 @ 0x4B338986
 * Callers:
 *     _AVrfpFormatCurrentUserKeyPath@4 @ 0x4B339025 (_AVrfpFormatCurrentUserKeyPath@4.c)
 * Callees:
 *     _RtlConvertSidToUnicodeString@12 @ 0x4B2D3990 (_RtlConvertSidToUnicodeString@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     _ZwOpenProcessTokenEx@16 @ 0x4B2F2C80 (_ZwOpenProcessTokenEx@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __thiscall AVrfpAppendCurrentUserSid(__int16 *this)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  unsigned int v4; // ecx
  unsigned __int16 v5; // dx
  __int16 v6; // ax
  ULONG ReturnLength; // [esp+4h] [ebp-64h] BYREF
  _UNICODE_STRING UnicodeString; // [esp+8h] [ebp-60h] BYREF
  HANDLE TokenHandle; // [esp+10h] [ebp-58h] BYREF
  PSID TokenInformation[20]; // [esp+14h] [ebp-54h] BYREF

  TokenHandle = 0;
  result = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFF, 8u, 0x200u, &TokenHandle);
  if ( result >= 0 )
  {
    v3 = ZwQueryInformationToken(TokenHandle, 1u, TokenInformation, 0x50u, &ReturnLength);
    NtClose(TokenHandle);
    if ( v3 < 0 )
      return v3;
    v4 = (unsigned __int16)*this;
    UnicodeString.MaximumLength = this[1] - v4;
    UnicodeString.Length = 0;
    UnicodeString.Buffer = (wchar_t *)(*((_DWORD *)this + 1) + 2 * (v4 >> 1));
    v3 = RtlConvertSidToUnicodeString(&UnicodeString, TokenInformation[0], 0);
    if ( v3 < 0 )
      return v3;
    v5 = *this;
    TokenHandle = (HANDLE)(unsigned __int16)(*this + UnicodeString.Length);
    v6 = v5 + UnicodeString.Length;
    if ( (unsigned __int16)(v5 + UnicodeString.Length) < v5 )
      v6 = -1;
    *this = v6;
    result = -1073741789;
    if ( (unsigned __int16)TokenHandle >= v5 )
      return v3;
  }
  return result;
}
