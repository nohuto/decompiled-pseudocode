/*
 * XREFs of PopCreateNotificationName @ 0x1406E7694
 * Callers:
 *     PopGetSettingNotificationName @ 0x140751120 (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x1402E0B30 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x14041D180 (ZwCreateWnfStateName.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1407B4900 (RtlpAddKnownAce.c)
 */

NTSTATUS __fastcall PopCreateNotificationName(__int64 a1)
{
  NTSTATUS result; // eax
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v5; // [rsp+70h] [rbp-90h]
  _OWORD Src[3]; // [rsp+78h] [rbp-88h] BYREF
  _OWORD Sid[3]; // [rsp+A8h] [rbp-58h] BYREF
  ACL Acl; // [rsp+E0h] [rbp-20h] BYREF

  *(_QWORD *)&SourceString.Length = 2752552LL;
  v5 = 0LL;
  SourceString.Buffer = L"lpacPnpNotifications";
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  RtlCreateAcl(&Acl, 0x148u, 2u);
  RtlpAddKnownAce((int)&Acl, 2, 0, 2031619, SeLocalSystemSid, 0);
  RtlpAddKnownAce((int)&Acl, 2, 0, 1179649, SeWorldSid, 0);
  RtlpAddKnownAce((int)&Acl, 2, 0, 1179649, SeAllAppPackagesSid, 0);
  result = RtlDeriveCapabilitySidsFromName(&SourceString, Sid, Src);
  if ( result >= 0 )
  {
    RtlpAddKnownAce((int)&Acl, 2, 0, 1179649, Src, 0);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    return ZwCreateWnfStateName(a1, 3LL);
  }
  return result;
}
