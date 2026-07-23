/*
 * XREFs of RtlInitializeSid @ 0x1406F4200
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x14034A710 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlInitializeSidEx @ 0x1403C67B0 (RtlInitializeSidEx.c)
 *     WdipAccessCheck @ 0x1405A0140 (WdipAccessCheck.c)
 *     RtlpSetSecurityObject @ 0x140669BF0 (RtlpSetSecurityObject.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406F4050 (ObpVerifyCreatorAccessCheck.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14071BB78 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140756004 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14076C508 (_CmGetRegKeySecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140785BE8 (PopCreateHiberFileSecurityDescriptor.c)
 *     PiAuAllocateAndInitializeSid @ 0x14078C464 (PiAuAllocateAndInitializeSid.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140790630 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140791ABC (CmpHiveRootSecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x140799824 (InitializeSidLookupTable.c)
 *     NtSetUuidSeed @ 0x1407B4810 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407B9DFC (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x1408A09A8 (PiAuCheckClientInteractive.c)
 *     RtlCapabilityCheck @ 0x140910060 (RtlCapabilityCheck.c)
 *     RtlGetAppContainerParent @ 0x1409104D0 (RtlGetAppContainerParent.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x14091097C (RtlpCapabilityCheckSystemCapability.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x140929468 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x14094CE70 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x140954E84 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097B40C (DrvDbGetSecurityDescriptor.c)
 *     PopNetInitialize @ 0x140A3BBDC (PopNetInitialize.c)
 *     IopCreateUmdfDirectory @ 0x140A4D578 (IopCreateUmdfDirectory.c)
 *     SepVariableInitialization @ 0x140A5F45C (SepVariableInitialization.c)
 *     PopCreateTimebrokerServiceSid @ 0x140A6DBDC (PopCreateTimebrokerServiceSid.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140A6E23C (CmpInitializeTrustedInstallerSid.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlInitializeSid(PSID Sid, PSID_IDENTIFIER_AUTHORITY IdentifierAuthority, UCHAR SubAuthorityCount)
{
  if ( SubAuthorityCount > 0xFu )
    return -1073741811;
  *((_BYTE *)Sid + 1) = SubAuthorityCount;
  *(_BYTE *)Sid = 1;
  *(_SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = *IdentifierAuthority;
  return 0;
}
