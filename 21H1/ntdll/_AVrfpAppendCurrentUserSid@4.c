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

int __thiscall AVrfpAppendCurrentUserSid(__int16 *this)
{
  int result; // eax
  int InformationToken; // edi
  unsigned int v4; // ecx
  unsigned __int16 v5; // dx
  __int16 v6; // ax
  _BYTE v7[4]; // [esp+4h] [ebp-64h] BYREF
  UNICODE_STRING UnicodeString; // [esp+8h] [ebp-60h] BYREF
  HANDLE Handle; // [esp+10h] [ebp-58h] BYREF
  PSID Sid[20]; // [esp+14h] [ebp-54h] BYREF

  Handle = 0;
  result = ZwOpenProcessTokenEx(-1, 8, 512, (int)&Handle);
  if ( result >= 0 )
  {
    InformationToken = ZwQueryInformationToken((int)Handle, 1, (int)Sid, 80, (int)v7);
    NtClose(Handle);
    if ( InformationToken < 0 )
      return InformationToken;
    v4 = (unsigned __int16)*this;
    UnicodeString.MaximumLength = this[1] - v4;
    UnicodeString.Length = 0;
    UnicodeString.Buffer = (wchar_t *)(*((_DWORD *)this + 1) + 2 * (v4 >> 1));
    InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, Sid[0], 0);
    if ( InformationToken < 0 )
      return InformationToken;
    v5 = *this;
    Handle = (HANDLE)(unsigned __int16)(*this + UnicodeString.Length);
    v6 = v5 + UnicodeString.Length;
    if ( (unsigned __int16)(v5 + UnicodeString.Length) < v5 )
      v6 = -1;
    *this = v6;
    result = -1073741789;
    if ( (unsigned __int16)Handle >= v5 )
      return InformationToken;
  }
  return result;
}
