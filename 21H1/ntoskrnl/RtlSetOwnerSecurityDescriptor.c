/*
 * XREFs of RtlSetOwnerSecurityDescriptor @ 0x14070D8F0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x14035C130 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x140580C40 (RtlCheckTokenCapability.c)
 *     PiUEventInitClientRegistrationContext @ 0x14067D7C0 (PiUEventInitClientRegistrationContext.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14071DFF8 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140751974 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407645F4 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140769DC8 (_CmGetRegKeySecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x14076FDF0 (BiCreateKeySecurityDescriptor.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140772DC4 (LocalConvertStringSDToSD_Rev1.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407B6C8C (_PnpGetEnumSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x14086C9CC (CmpCopySaclToVirtualKey.c)
 *     PiAuCheckTokenMembership @ 0x14089F748 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14089F900 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14089FB84 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlpSysVolTakeOwnership @ 0x140911818 (RtlpSysVolTakeOwnership.c)
 *     CMFCreateSecurityDescriptor @ 0x1409537B4 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097A06C (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140A4A0D8 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140A4A498 (PiAuCreateStandardSecurityObject.c)
 *     SeMakeSystemToken @ 0x140A6134C (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140A618FC (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140A61B88 (SeMakeAnonymousLogonToken.c)
 *     SepInitSystemDacls @ 0x140A63C5C (SepInitSystemDacls.c)
 *     WmipInitializeSecurity @ 0x140A65B3C (WmipInitializeSecurity.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140A6A5BC (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlSetOwnerSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID Owner,
        BOOLEAN OwnerDefaulted)
{
  __int16 v4; // cx
  PSID v5; // rax
  __int16 v6; // cx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = *((_WORD *)SecurityDescriptor + 1);
  if ( v4 < 0 )
    return -1073741703;
  v5 = 0LL;
  if ( Owner )
    v5 = Owner;
  *((_QWORD *)SecurityDescriptor + 1) = v5;
  v6 = v4 & 0xFFFE;
  *((_WORD *)SecurityDescriptor + 1) = v6;
  if ( OwnerDefaulted )
    *((_WORD *)SecurityDescriptor + 1) = v6 | 1;
  return 0;
}
