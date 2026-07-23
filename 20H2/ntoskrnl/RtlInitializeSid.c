/*
 * XREFs of RtlInitializeSid @ 0x14071B790
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x140360F50 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlInitializeSidEx @ 0x1403C9240 (RtlInitializeSidEx.c)
 *     WdipAccessCheck @ 0x1405A3BE0 (WdipAccessCheck.c)
 *     RtlpSetSecurityObject @ 0x1405F64F0 (RtlpSetSecurityObject.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14071B5E0 (ObpVerifyCreatorAccessCheck.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140729B68 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140764C44 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14077AF38 (_CmGetRegKeySecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140793854 (PopCreateHiberFileSecurityDescriptor.c)
 *     PiAuAllocateAndInitializeSid @ 0x140798BA4 (PiAuAllocateAndInitializeSid.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14079CFE0 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14079E35C (CmpHiveRootSecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x1407A8B54 (InitializeSidLookupTable.c)
 *     NtSetUuidSeed @ 0x1407C3040 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407C868C (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x1408A64D8 (PiAuCheckClientInteractive.c)
 *     RtlCapabilityCheck @ 0x140915BA0 (RtlCapabilityCheck.c)
 *     RtlGetAppContainerParent @ 0x140916010 (RtlGetAppContainerParent.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x1409164BC (RtlpCapabilityCheckSystemCapability.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14092F290 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140952C30 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x14095AC44 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1409811DC (DrvDbGetSecurityDescriptor.c)
 *     PopNetInitialize @ 0x140A41C60 (PopNetInitialize.c)
 *     IopCreateUmdfDirectory @ 0x140A5C514 (IopCreateUmdfDirectory.c)
 *     SepVariableInitialization @ 0x140A667BC (SepVariableInitialization.c)
 *     PopCreateTimebrokerServiceSid @ 0x140A742FC (PopCreateTimebrokerServiceSid.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140A74A1C (CmpInitializeTrustedInstallerSid.c)
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
