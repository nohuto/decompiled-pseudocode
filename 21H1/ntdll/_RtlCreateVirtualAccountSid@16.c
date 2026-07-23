/*
 * XREFs of _RtlCreateVirtualAccountSid@16 @ 0x4B3461A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlUpcaseUnicodeString@12 @ 0x4B2D2BD0 (_RtlUpcaseUnicodeString@12.c)
 *     _RtlInitializeSid@12 @ 0x4B2D82C0 (_RtlInitializeSid@12.c)
 *     _A_SHAFinal@8 @ 0x4B2E7AE0 (_A_SHAFinal@8.c)
 *     _A_SHAUpdate@12 @ 0x4B2E7BC0 (_A_SHAUpdate@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _A_SHAInit@4 @ 0x4B308A40 (_A_SHAInit@4.c)
 */

NTSTATUS __cdecl RtlCreateVirtualAccountSid(PUNICODE_STRING Name, ULONG BaseSubAuthority, PSID Sid, PULONG SidLength)
{
  ULONG v4; // eax
  NTSTATUS result; // eax
  int v6; // eax
  _UNICODE_STRING DestinationString; // [esp+8h] [ebp-7Ch] BYREF
  int v8[23]; // [esp+10h] [ebp-74h] BYREF
  int v9[5]; // [esp+6Ch] [ebp-18h] BYREF

  if ( !Name || !SidLength || BaseSubAuthority - 80 > 0x1F )
    return -1073741811;
  v4 = *SidLength;
  *SidLength = 32;
  if ( v4 < 0x20 )
    return -1073741789;
  result = RtlUpcaseUnicodeString(&DestinationString, Name, 1u);
  if ( result >= 0 )
  {
    A_SHAInit(v8);
    A_SHAUpdate((int)Sid, v8, (char *)DestinationString.Buffer, DestinationString.Length);
    A_SHAFinal(v8, (int)v9);
    RtlFreeAnsiString(&DestinationString);
    RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 6u);
    v6 = v9[0];
    *((_DWORD *)Sid + 2) = BaseSubAuthority;
    *((_DWORD *)Sid + 3) = v6;
    *((_DWORD *)Sid + 4) = v9[1];
    *((_DWORD *)Sid + 5) = v9[2];
    *((_DWORD *)Sid + 6) = v9[3];
    *((_DWORD *)Sid + 7) = v9[4];
    return 0;
  }
  return result;
}
