/*
 * XREFs of RtlCreateSecurityDescriptor @ 0x1406320E0
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x140201394 (SepVerifyDesktopAppxImage.c)
 *     SepMandatorySubProcessToken @ 0x1402E37EC (SepMandatorySubProcessToken.c)
 *     RtlCheckTokenMembershipEx @ 0x140340930 (RtlCheckTokenMembershipEx.c)
 *     SepInitProcessAuditSd @ 0x1403BBE04 (SepInitProcessAuditSd.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F6F78 (SepSetProcessTrustLabelAceForToken.c)
 *     RtlCheckTokenCapability @ 0x140584D20 (RtlCheckTokenCapability.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14059453C (SepBuildCapeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x1405A3BE0 (WdipAccessCheck.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C10BC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1405D7CC0 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1405D9630 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1405D9708 (IopCreateSecurityDescriptorPerType.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x14062F538 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     sub_140689640 @ 0x140689640 (sub_140689640.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1406DC5F8 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1407112A0 (PspAllocateAndQueryNotificationChannel.c)
 *     PiUEventInitClientRegistrationContext @ 0x14071AE94 (PiUEventInitClientRegistrationContext.c)
 *     PopCreateNotificationName @ 0x14071BEE8 (PopCreateNotificationName.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x14072DC2C (RtlpSysVolCreateSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140759CA8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140764C44 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140774FD8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14077AF38 (_CmGetRegKeySecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x140780800 (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x1407826A4 (MiSessionObjectCreate.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1407837D4 (LocalConvertStringSDToSD_Rev1.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140793854 (PopCreateHiberFileSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x14079678C (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x140796B74 (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x140796D6C (MiCreateMemoryEventSD.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14079CFE0 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14079E35C (CmpHiveRootSecurityDescriptor.c)
 *     SepInitializationPhase1 @ 0x1407A88DC (SepInitializationPhase1.c)
 *     MiCreatePagingFile @ 0x1407B19AC (MiCreatePagingFile.c)
 *     PfpCreateEvent @ 0x1407BBA4C (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x1407C3040 (NtSetUuidSeed.c)
 *     DbgkpCreateNotificationEvent @ 0x1407C62AC (DbgkpCreateNotificationEvent.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407C868C (_PnpGetEnumSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x140873F78 (CmpCopySaclToVirtualKey.c)
 *     PiAuCheckTokenMembership @ 0x1408A6598 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1408A6750 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1408A69D4 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlpSysVolTakeOwnership @ 0x1409186D8 (RtlpSysVolTakeOwnership.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14092F290 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x14095AC44 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1409811DC (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x14098326C (ObpGetSilosRootDirectory.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1409C9BC8 (ViInitializeLocalSystemDescriptor.c)
 *     ObInitSystem @ 0x140A409B8 (ObInitSystem.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140A501D4 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140A50594 (PiAuCreateStandardSecurityObject.c)
 *     IopCreateUmdfDirectory @ 0x140A5C514 (IopCreateUmdfDirectory.c)
 *     SeMakeSystemToken @ 0x140A65B60 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140A66110 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140A6639C (SeMakeAnonymousLogonToken.c)
 *     SepInitSystemDacls @ 0x140A684D0 (SepInitSystemDacls.c)
 *     WmipInitializeSecurity @ 0x140A6C7EC (WmipInitializeSecurity.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140A70E10 (PspInitializeSystemPartitionPhase0.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140A71128 (PiAuGetDriverDataDirectorySecurityObject.c)
 *     ExpKeyedEventInitialization @ 0x140A7236C (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x140A72EFC (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x140A93060 (IopApplySystemPartitionProt.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlCreateSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor, ULONG Revision)
{
  NTSTATUS result; // eax

  if ( Revision != 1 )
    return -1073741736;
  result = 0;
  *(_OWORD *)SecurityDescriptor = 0LL;
  *((_OWORD *)SecurityDescriptor + 1) = 0LL;
  *((_QWORD *)SecurityDescriptor + 4) = 0LL;
  *(_BYTE *)SecurityDescriptor = 1;
  return result;
}
