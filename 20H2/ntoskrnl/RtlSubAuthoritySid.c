/*
 * XREFs of RtlSubAuthoritySid @ 0x140340E50
 * Callers:
 *     RtlpNewSecurityObject @ 0x140602BE0 (RtlpNewSecurityObject.c)
 *     SeQueryInformationToken @ 0x14060D9F0 (SeQueryInformationToken.c)
 *     SepValidateReferencedCachedHandles @ 0x14068E2B0 (SepValidateReferencedCachedHandles.c)
 *     NtSetInformationToken @ 0x1406AB220 (NtSetInformationToken.c)
 *     SepCheckCapabilities @ 0x1406CAEC0 (SepCheckCapabilities.c)
 *     NtCreateLowBoxToken @ 0x1406FB890 (NtCreateLowBoxToken.c)
 *     RtlIsParentOfChildAppContainer @ 0x1406FCB64 (RtlIsParentOfChildAppContainer.c)
 *     SeQueryMandatoryLabel @ 0x1406FD864 (SeQueryMandatoryLabel.c)
 *     LookupSidInTable @ 0x1406FD8FC (LookupSidInTable.c)
 *     RtlIsElevatedRid @ 0x1406FDA90 (RtlIsElevatedRid.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14071B5E0 (ObpVerifyCreatorAccessCheck.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140729B68 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140764C44 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14077AF38 (_CmGetRegKeySecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140793854 (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14079CFE0 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14079E35C (CmpHiveRootSecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x1407A8B54 (InitializeSidLookupTable.c)
 *     NtSetUuidSeed @ 0x1407C3040 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407C868C (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x1408A64D8 (PiAuCheckClientInteractive.c)
 *     RtlCapabilityCheck @ 0x140915BA0 (RtlCapabilityCheck.c)
 *     RtlGetAppContainerParent @ 0x140916010 (RtlGetAppContainerParent.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x1409164BC (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140916DB8 (RtlpGetTokenNamedObjectPath.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14092F290 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140952C30 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x14095AC44 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1409811DC (DrvDbGetSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}
