/*
 * XREFs of ExpWnfSpecializeSecurityDescriptor @ 0x14063D80C
 * Callers:
 *     NtCreateWnfStateName @ 0x140626360 (NtCreateWnfStateName.c)
 *     ExpWnfLookupPermanentName @ 0x14063CBD0 (ExpWnfLookupPermanentName.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1402720C0 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x14063D8A0 (RtlGetSaclSecurityDescriptor.c)
 *     RtlpApplyAclToObject @ 0x14067CC20 (RtlpApplyAclToObject.c)
 */

NTSTATUS __fastcall ExpWnfSpecializeSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  NTSTATUS result; // eax
  BOOLEAN DaclPresent; // [rsp+38h] [rbp+18h] BYREF
  BOOLEAN DaclDefaulted; // [rsp+40h] [rbp+20h] BYREF
  PACL Dacl; // [rsp+48h] [rbp+28h] BYREF

  Dacl = 0LL;
  DaclPresent = 0;
  if ( RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, &DaclDefaulted) >= 0 && DaclPresent && Dacl )
    RtlpApplyAclToObject(Dacl, &ExpWnfNotificationMapping);
  result = RtlGetSaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, &DaclDefaulted);
  if ( result >= 0 && DaclPresent )
  {
    if ( Dacl )
      return RtlpApplyAclToObject(Dacl, &ExpWnfNotificationMapping);
  }
  return result;
}
