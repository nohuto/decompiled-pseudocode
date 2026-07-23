/*
 * XREFs of _RtlDeriveCapabilitySidsFromName@12 @ 0x4B2EE4F0
 * Callers:
 *     _RtlCapabilityCheck@12 @ 0x4B2EF210 (_RtlCapabilityCheck@12.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlEqualUnicodeString@12 @ 0x4B2D1250 (_RtlEqualUnicodeString@12.c)
 *     _RtlUpcaseUnicodeString@12 @ 0x4B2D2BD0 (_RtlUpcaseUnicodeString@12.c)
 *     _RtlInitializeSid@12 @ 0x4B2D82C0 (_RtlInitializeSid@12.c)
 *     _SHA256Final@8 @ 0x4B2EE630 (_SHA256Final@8.c)
 *     _SHA256Init@4 @ 0x4B2EE6E0 (_SHA256Init@4.c)
 *     _SHA256Update@12 @ 0x4B2EE726 (_SHA256Update@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

NTSTATUS __cdecl RtlDeriveCapabilitySidsFromName(
        PUNICODE_STRING UnicodeString,
        PSID CapabilityGroupSid,
        PSID CapabilitySid)
{
  NTSTATUS result; // eax
  int v4; // esi
  _UNICODE_STRING *v5; // edi
  size_t v6; // [esp-4h] [ebp-ACh]
  size_t v7; // [esp-4h] [ebp-ACh]
  _DWORD StackCookie[3]; // [esp+Ch] [ebp-9Ch] BYREF
  _BYTE v9[108]; // [esp+18h] [ebp-90h] BYREF
  _BYTE v10[32]; // [esp+84h] [ebp-24h] BYREF

  if ( !UnicodeString || !CapabilityGroupSid || !CapabilitySid )
    __fastfail(5u);
  LODWORD(v6) = 48;
  memset(CapabilitySid, 0, v6);
  LODWORD(v7) = 44;
  memset(CapabilityGroupSid, 0, v7);
  result = RtlUpcaseUnicodeString((PUNICODE_STRING)&StackCookie[1], UnicodeString, 1u);
  if ( result >= 0 )
  {
    SHA256Init(v9);
    SHA256Update(LOWORD(StackCookie[1]));
    SHA256Final(v9, v10);
    RtlInitializeSid(CapabilityGroupSid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 9u);
    *((_DWORD *)CapabilityGroupSid + 2) = 32;
    qmemcpy((char *)CapabilityGroupSid + 12, v10, 0x20u);
    v4 = 0;
    v5 = (_UNICODE_STRING *)&RtlpLegacyApplicationCapabilityNames;
    while ( 1 )
    {
      StackCookie[0] = v4 + 1;
      if ( RtlEqualUnicodeString((PUNICODE_STRING)&StackCookie[1], v5, 0) )
        break;
      ++v4;
      ++v5;
      if ( StackCookie[0] >= 0xCu )
        goto LABEL_8;
    }
    RtlInitializeSid(CapabilitySid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u);
    *((_DWORD *)CapabilitySid + 2) = 3;
    *((_DWORD *)CapabilitySid + 3) = StackCookie[0];
LABEL_8:
    RtlFreeAnsiString((PUNICODE_STRING)&StackCookie[1]);
    if ( v4 == 12 )
    {
      RtlInitializeSid(CapabilitySid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 0xAu);
      *((_DWORD *)CapabilitySid + 2) = 3;
      *((_DWORD *)CapabilitySid + 3) = 1024;
      qmemcpy((char *)CapabilitySid + 16, v10, 0x20u);
    }
    return 0;
  }
  return result;
}
