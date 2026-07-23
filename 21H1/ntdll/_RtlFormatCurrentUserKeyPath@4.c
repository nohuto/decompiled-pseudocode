/*
 * XREFs of _RtlFormatCurrentUserKeyPath@4 @ 0x4B2D3860
 * Callers:
 *     _RtlOpenCurrentUser@8 @ 0x4B2AD730 (_RtlOpenCurrentUser@8.c)
 *     _LdrpCodeAuthzInitialize@0 @ 0x4B2E82F2 (_LdrpCodeAuthzInitialize@0.c)
 *     _RtlpGetRegistryHandle@16 @ 0x4B2EB2C1 (_RtlpGetRegistryHandle@16.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlConvertSidToUnicodeString@12 @ 0x4B2D3990 (_RtlConvertSidToUnicodeString@12.c)
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 */

NTSTATUS __cdecl RtlFormatCurrentUserKeyPath(PUNICODE_STRING CurrentUserKeyPath)
{
  int v1; // ebx
  NTSTATUS result; // eax
  unsigned __int8 *v3; // edi
  __int16 v4; // ax
  __int16 v5; // cx
  __int16 v6; // ax
  unsigned __int16 v7; // ax
  wchar_t *StringRoutine; // ebx
  unsigned int Length; // edx
  unsigned __int16 v10; // di
  wchar_t *v11; // ebx
  int v12; // edi
  size_t v13; // [esp-Ch] [ebp-74h]
  ULONG ReturnLength; // [esp+4h] [ebp-64h] BYREF
  int v15; // [esp+8h] [ebp-60h]
  _UNICODE_STRING UnicodeString; // [esp+Ch] [ebp-5Ch] BYREF
  PSID TokenInformation[20]; // [esp+14h] [ebp-54h] BYREF

  result = ZwQueryInformationToken((HANDLE)0xFFFFFFFA, 1u, TokenInformation, 0x50u, &ReturnLength);
  if ( result >= 0 )
  {
    v3 = (unsigned __int8 *)TokenInformation[0];
    if ( RtlValidSid(TokenInformation[0]) == 1 )
    {
      if ( v3[2] || v3[3] )
        v4 = 36;
      else
        v4 = 28;
      v5 = v4;
      v6 = 22 * v3[1];
      HIDWORD(v13) = v1;
      CurrentUserKeyPath->Length = 0;
      v15 = (unsigned __int16)(v5 + v6);
      v7 = v15 + 34;
      CurrentUserKeyPath->MaximumLength = v15 + 34;
      StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v7);
      CurrentUserKeyPath->Buffer = StringRoutine;
      if ( StringRoutine )
      {
        Length = CurrentUserKeyPath->Length;
        v10 = CurrentUserKeyPath->Length;
        if ( Length + 30 <= CurrentUserKeyPath->MaximumLength )
        {
          LODWORD(v13) = 30;
          v11 = &StringRoutine[Length >> 1];
          memmove(v11, L"\\REGISTRY\\USER\\", v13);
          CurrentUserKeyPath->Length += 30;
          v10 = CurrentUserKeyPath->Length;
          if ( (unsigned int)CurrentUserKeyPath->Length + 1 < CurrentUserKeyPath->MaximumLength )
          {
            v11[15] = 0;
            v10 = CurrentUserKeyPath->Length;
          }
        }
        UnicodeString.MaximumLength = v15;
        UnicodeString.Length = 0;
        UnicodeString.Buffer = &CurrentUserKeyPath->Buffer[v10 >> 1];
        v12 = RtlConvertSidToUnicodeString(&UnicodeString, TokenInformation[0], 0);
        if ( v12 < 0 )
          RtlFreeAnsiString(CurrentUserKeyPath);
        else
          CurrentUserKeyPath->Length += UnicodeString.Length;
        return v12;
      }
      else
      {
        return -1073741801;
      }
    }
    else
    {
      return -1073741704;
    }
  }
  return result;
}
