/*
 * XREFs of ExpWnfSpecializeSecurityDescriptor @ 0x14066BDE4
 * Callers:
 *     NtCreateWnfStateName @ 0x14066BA80 (NtCreateWnfStateName.c)
 *     ExpWnfLookupPermanentName @ 0x14068A1F4 (ExpWnfLookupPermanentName.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1402D70E0 (RtlGetDaclSecurityDescriptor.c)
 *     RtlpApplyAclToObject @ 0x140604B40 (RtlpApplyAclToObject.c)
 *     RtlGetSaclSecurityDescriptor @ 0x14066BE80 (RtlGetSaclSecurityDescriptor.c)
 */

void __fastcall ExpWnfSpecializeSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN DaclPresent; // [rsp+38h] [rbp+18h] BYREF
  BOOLEAN DaclDefaulted; // [rsp+40h] [rbp+20h] BYREF
  PACL Dacl; // [rsp+48h] [rbp+28h] BYREF

  Dacl = 0LL;
  DaclPresent = 0;
  if ( RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, &DaclDefaulted) >= 0 && DaclPresent && Dacl )
    RtlpApplyAclToObject((__int64)Dacl, &ExpWnfNotificationMapping);
  if ( RtlGetSaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, &DaclDefaulted) >= 0 && DaclPresent )
  {
    if ( Dacl )
      RtlpApplyAclToObject((__int64)Dacl, &ExpWnfNotificationMapping);
  }
}
