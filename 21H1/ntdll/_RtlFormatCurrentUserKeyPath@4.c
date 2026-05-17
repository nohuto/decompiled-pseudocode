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

NTSTATUS __stdcall RtlFormatCurrentUserKeyPath(PUNICODE_STRING a1)
{
  NTSTATUS result; // eax
  unsigned __int8 *v2; // edi
  __int16 v3; // ax
  __int16 v4; // cx
  __int16 v5; // ax
  unsigned __int16 v6; // ax
  wchar_t *StringRoutine; // ebx
  unsigned int Length; // edx
  unsigned __int16 v9; // di
  wchar_t *v10; // ebx
  NTSTATUS v11; // edi
  _BYTE v12[4]; // [esp+4h] [ebp-64h] BYREF
  int v13; // [esp+8h] [ebp-60h]
  UNICODE_STRING UnicodeString; // [esp+Ch] [ebp-5Ch] BYREF
  PSID Sid[20]; // [esp+14h] [ebp-54h] BYREF

  result = ZwQueryInformationToken(-6, 1, Sid, 80, v12);
  if ( result >= 0 )
  {
    v2 = (unsigned __int8 *)Sid[0];
    if ( (unsigned __int8)RtlValidSid(Sid[0]) == 1 )
    {
      if ( v2[2] || v2[3] )
        v3 = 36;
      else
        v3 = 28;
      v4 = v3;
      v5 = 22 * v2[1];
      a1->Length = 0;
      v13 = (unsigned __int16)(v4 + v5);
      v6 = v13 + 34;
      a1->MaximumLength = v13 + 34;
      StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v6);
      a1->Buffer = StringRoutine;
      if ( StringRoutine )
      {
        Length = a1->Length;
        v9 = a1->Length;
        if ( Length + 30 <= a1->MaximumLength )
        {
          v10 = &StringRoutine[Length >> 1];
          memmove(v10, L"\\REGISTRY\\USER\\", 0x1Eu);
          a1->Length += 30;
          v9 = a1->Length;
          if ( (unsigned int)a1->Length + 1 < a1->MaximumLength )
          {
            v10[15] = 0;
            v9 = a1->Length;
          }
        }
        UnicodeString.MaximumLength = v13;
        UnicodeString.Length = 0;
        UnicodeString.Buffer = &a1->Buffer[v9 >> 1];
        v11 = RtlConvertSidToUnicodeString(&UnicodeString, Sid[0], 0);
        if ( v11 < 0 )
          RtlFreeAnsiString(a1);
        else
          a1->Length += UnicodeString.Length;
        return v11;
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
