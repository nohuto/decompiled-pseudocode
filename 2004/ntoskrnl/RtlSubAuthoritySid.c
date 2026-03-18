/*
 * XREFs of RtlSubAuthoritySid @ 0x1402FE9C0
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x140631DF4 (SepValidateReferencedCachedHandles.c)
 *     RtlpNewSecurityObject @ 0x14067B050 (RtlpNewSecurityObject.c)
 *     LookupSidInTable @ 0x14068E37C (LookupSidInTable.c)
 *     SeQueryInformationToken @ 0x140693460 (SeQueryInformationToken.c)
 *     NtSetInformationToken @ 0x1406B9BC0 (NtSetInformationToken.c)
 *     RtlIsParentOfChildAppContainer @ 0x1406BAB88 (RtlIsParentOfChildAppContainer.c)
 *     SeQueryMandatoryLabel @ 0x1406BAD88 (SeQueryMandatoryLabel.c)
 *     RtlIsElevatedRid @ 0x1406BAE20 (RtlIsElevatedRid.c)
 *     NtCreateLowBoxToken @ 0x1406BAFC0 (NtCreateLowBoxToken.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406F4050 (ObpVerifyCreatorAccessCheck.c)
 *     SepCheckCapabilities @ 0x1406F7DD0 (SepCheckCapabilities.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14071BB78 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140756004 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14076C508 (_CmGetRegKeySecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140785BE8 (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140790630 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140791ABC (CmpHiveRootSecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x140799824 (InitializeSidLookupTable.c)
 *     NtSetUuidSeed @ 0x1407B4810 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407B9DFC (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x1408A09A8 (PiAuCheckClientInteractive.c)
 *     RtlCapabilityCheck @ 0x140910060 (RtlCapabilityCheck.c)
 *     RtlGetAppContainerParent @ 0x1409104D0 (RtlGetAppContainerParent.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x14091097C (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140911278 (RtlpGetTokenNamedObjectPath.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x140929468 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x14094CE70 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x140954E84 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097B40C (DrvDbGetSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}
