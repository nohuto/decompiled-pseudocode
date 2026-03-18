/*
 * XREFs of ExpWnfSpecializeSecurityDescriptor @ 0x14066FDE8
 * Callers:
 *     NtCreateWnfStateName @ 0x14066F980 (NtCreateWnfStateName.c)
 *     ExpWnfLookupPermanentName @ 0x14075A12C (ExpWnfLookupPermanentName.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140203DD0 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x14066FE80 (RtlGetSaclSecurityDescriptor.c)
 *     RtlpApplyAclToObject @ 0x140727F00 (RtlpApplyAclToObject.c)
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
