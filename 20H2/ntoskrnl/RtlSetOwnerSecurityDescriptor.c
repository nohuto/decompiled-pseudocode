/*
 * XREFs of RtlSetOwnerSecurityDescriptor @ 0x1406FC010
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x140340930 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x140584D20 (RtlCheckTokenCapability.c)
 *     PiUEventInitClientRegistrationContext @ 0x14071AE94 (PiUEventInitClientRegistrationContext.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14072DD88 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140764C44 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140774FD8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14077AF38 (_CmGetRegKeySecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x140780800 (BiCreateKeySecurityDescriptor.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1407837D4 (LocalConvertStringSDToSD_Rev1.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407C868C (_PnpGetEnumSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x140873F78 (CmpCopySaclToVirtualKey.c)
 *     PiAuCheckTokenMembership @ 0x1408A6598 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1408A6750 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1408A69D4 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlpSysVolTakeOwnership @ 0x1409186D8 (RtlpSysVolTakeOwnership.c)
 *     CMFCreateSecurityDescriptor @ 0x14095AC44 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1409811DC (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140A501D4 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140A50594 (PiAuCreateStandardSecurityObject.c)
 *     SeMakeSystemToken @ 0x140A65B60 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140A66110 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140A6639C (SeMakeAnonymousLogonToken.c)
 *     SepInitSystemDacls @ 0x140A684D0 (SepInitSystemDacls.c)
 *     WmipInitializeSecurity @ 0x140A6C7EC (WmipInitializeSecurity.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140A71128 (PiAuGetDriverDataDirectorySecurityObject.c)
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
