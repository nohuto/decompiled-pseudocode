/*
 * XREFs of _RtlCreateServiceSid@12 @ 0x4B2AC190
 * Callers:
 *     _RtlAppxIsFileOwnedByTrustedInstaller@8 @ 0x4B32C800 (_RtlAppxIsFileOwnedByTrustedInstaller@8.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlUpcaseUnicodeString@12 @ 0x4B2D2BD0 (_RtlUpcaseUnicodeString@12.c)
 *     _RtlInitializeSid@12 @ 0x4B2D82C0 (_RtlInitializeSid@12.c)
 *     _A_SHAFinal@8 @ 0x4B2E7AE0 (_A_SHAFinal@8.c)
 *     _A_SHAUpdate@12 @ 0x4B2E7BC0 (_A_SHAUpdate@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _A_SHAInit@4 @ 0x4B308A40 (_A_SHAInit@4.c)
 */

NTSTATUS __cdecl RtlCreateServiceSid(PUNICODE_STRING ServiceName, PSID ServiceSid, PULONG ServiceSidLength)
{
  ULONG v3; // eax
  NTSTATUS result; // eax
  int v5; // eax
  _UNICODE_STRING DestinationString; // [esp+4h] [ebp-7Ch] BYREF
  int v7[23]; // [esp+Ch] [ebp-74h] BYREF
  int v8[5]; // [esp+68h] [ebp-18h] BYREF

  if ( !ServiceName || !ServiceSidLength )
    return -1073741811;
  v3 = *ServiceSidLength;
  *ServiceSidLength = 32;
  if ( v3 < 0x20 )
    return -1073741789;
  result = RtlUpcaseUnicodeString(&DestinationString, ServiceName, 1u);
  if ( result >= 0 )
  {
    A_SHAInit(v7);
    A_SHAUpdate((int)v7, DestinationString.Buffer, DestinationString.Length);
    A_SHAFinal(v7, (int)v8);
    RtlFreeAnsiString(&DestinationString);
    RtlInitializeSid(ServiceSid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 6u);
    v5 = v8[0];
    *((_DWORD *)ServiceSid + 2) = 80;
    *((_DWORD *)ServiceSid + 3) = v5;
    *((_DWORD *)ServiceSid + 4) = v8[1];
    *((_DWORD *)ServiceSid + 5) = v8[2];
    *((_DWORD *)ServiceSid + 6) = v8[3];
    *((_DWORD *)ServiceSid + 7) = v8[4];
    return 0;
  }
  return result;
}
