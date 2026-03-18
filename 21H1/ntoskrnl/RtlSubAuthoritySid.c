/*
 * XREFs of RtlSubAuthoritySid @ 0x14035C480
 * Callers:
 *     LookupSidInTable @ 0x1405E4BB8 (LookupSidInTable.c)
 *     SeQueryInformationToken @ 0x1405E9F20 (SeQueryInformationToken.c)
 *     RtlpNewSecurityObject @ 0x140602F70 (RtlpNewSecurityObject.c)
 *     SepValidateReferencedCachedHandles @ 0x140678680 (SepValidateReferencedCachedHandles.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14067DF00 (ObpVerifyCreatorAccessCheck.c)
 *     SepCheckCapabilities @ 0x1406D4A94 (SepCheckCapabilities.c)
 *     NtSetInformationToken @ 0x1406F7D00 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x14070D200 (NtCreateLowBoxToken.c)
 *     RtlIsParentOfChildAppContainer @ 0x14070D9A8 (RtlIsParentOfChildAppContainer.c)
 *     SeQueryMandatoryLabel @ 0x14070DBA8 (SeQueryMandatoryLabel.c)
 *     RtlIsElevatedRid @ 0x14070DC40 (RtlIsElevatedRid.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1407197E8 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140751974 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140769DC8 (_CmGetRegKeySecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14077D1E8 (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14078F6BC (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140791974 (CmpAdminSystemSecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x1407A67F0 (InitializeSidLookupTable.c)
 *     NtSetUuidSeed @ 0x1407B16A0 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407B6C8C (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x14089F688 (PiAuCheckClientInteractive.c)
 *     RtlCapabilityCheck @ 0x14090ECC0 (RtlCapabilityCheck.c)
 *     RtlGetAppContainerParent @ 0x14090F130 (RtlGetAppContainerParent.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x14090F5DC (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x14090FED8 (RtlpGetTokenNamedObjectPath.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1409281B8 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x14094BAD0 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x1409537B4 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097A06C (DrvDbGetSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}
