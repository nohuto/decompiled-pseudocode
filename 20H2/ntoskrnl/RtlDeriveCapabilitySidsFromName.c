/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x140360F50
 * Callers:
 *     PiUEventInitClientRegistrationContext @ 0x14071AE94 (PiUEventInitClientRegistrationContext.c)
 *     PopCreateNotificationName @ 0x14071BEE8 (PopCreateNotificationName.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14079E35C (CmpHiveRootSecurityDescriptor.c)
 *     DbgkpCreateNotificationEvent @ 0x1407C62AC (DbgkpCreateNotificationEvent.c)
 *     RtlCapabilityCheck @ 0x140915BA0 (RtlCapabilityCheck.c)
 *     SepVariableInitialization @ 0x140A667BC (SepVariableInitialization.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     SymCryptSha256 @ 0x1403EB7E8 (SymCryptSha256.c)
 *     RtlEqualUnicodeString @ 0x14061FE70 (RtlEqualUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     RtlUpcaseUnicodeString @ 0x140682390 (RtlUpcaseUnicodeString.c)
 *     RtlInitializeSid @ 0x14071B790 (RtlInitializeSid.c)
 */

NTSTATUS __cdecl RtlDeriveCapabilitySidsFromName(
        PUNICODE_STRING UnicodeString,
        PSID CapabilityGroupSid,
        PSID CapabilitySid)
{
  NTSTATUS result; // eax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  unsigned int v8; // edi
  unsigned int v9; // esi
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-58h] BYREF
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h]

  DestinationString = 0LL;
  if ( !UnicodeString || !CapabilityGroupSid || !CapabilitySid )
    __fastfail(5u);
  *(_OWORD *)CapabilitySid = 0LL;
  *((_OWORD *)CapabilitySid + 1) = 0LL;
  *((_OWORD *)CapabilitySid + 2) = 0LL;
  *(_OWORD *)CapabilityGroupSid = 0LL;
  *((_OWORD *)CapabilityGroupSid + 1) = 0LL;
  *((_QWORD *)CapabilityGroupSid + 4) = 0LL;
  *((_DWORD *)CapabilityGroupSid + 10) = 0;
  result = RtlUpcaseUnicodeString(&DestinationString, UnicodeString, 1u);
  if ( result >= 0 )
  {
    SymCryptSha256(DestinationString.Buffer, DestinationString.Length, &v13);
    RtlInitializeSid(CapabilityGroupSid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 9u);
    v6 = v13;
    *((_DWORD *)CapabilityGroupSid + 2) = 32;
    v7 = v14;
    *(_OWORD *)((char *)CapabilityGroupSid + 12) = v6;
    *(_OWORD *)((char *)CapabilityGroupSid + 28) = v7;
    v8 = 0;
    while ( 1 )
    {
      v9 = v8 + 1;
      if ( RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)&RtlpLegacyApplicationCapabilityNames[2 * v8], 0) )
        break;
      ++v8;
      if ( v9 >= 0xC )
        goto LABEL_8;
    }
    RtlInitializeSid(CapabilitySid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u);
    *((_DWORD *)CapabilitySid + 2) = 3;
    *((_DWORD *)CapabilitySid + 3) = v9;
LABEL_8:
    RtlFreeAnsiString(&DestinationString);
    if ( v8 == 12 )
    {
      RtlInitializeSid(CapabilitySid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 0xAu);
      v10 = v13;
      *((_DWORD *)CapabilitySid + 2) = 3;
      v11 = v14;
      *((_DWORD *)CapabilitySid + 3) = 1024;
      *((_OWORD *)CapabilitySid + 1) = v10;
      *((_OWORD *)CapabilitySid + 2) = v11;
    }
    return 0;
  }
  return result;
}
