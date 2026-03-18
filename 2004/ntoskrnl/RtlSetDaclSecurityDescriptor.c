/*
 * XREFs of RtlSetDaclSecurityDescriptor @ 0x14066A940
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1402FEA00 (RtlCheckTokenMembershipEx.c)
 *     SepInitProcessAuditSd @ 0x1403B9984 (SepInitProcessAuditSd.c)
 *     RtlCheckTokenCapability @ 0x1405813C0 (RtlCheckTokenCapability.c)
 *     SepBuildCapeSecurityDescriptor @ 0x140590A9C (SepBuildCapeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x1405A0140 (WdipAccessCheck.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405BD444 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1406339C0 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x140634700 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1406347D8 (IopCreateSecurityDescriptorPerType.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140668DA0 (SepAppendAceToTokenObjectAcl.c)
 *     SPCall2ServerInternal @ 0x14066C0B8 (SPCall2ServerInternal.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ECDEC (PspAllocateAndQueryNotificationChannel.c)
 *     PopCreateNotificationName @ 0x1406F3424 (PopCreateNotificationName.c)
 *     PiUEventInitClientRegistrationContext @ 0x1406F3904 (PiUEventInitClientRegistrationContext.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406F64D4 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14070A1F8 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x14071FC3C (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14071FD98 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14074B0C8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140756004 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140765FA8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14076C508 (_CmGetRegKeySecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x140772200 (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x1407740A4 (MiSessionObjectCreate.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1407751D4 (LocalConvertStringSDToSD_Rev1.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140785BE8 (PopCreateHiberFileSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x140788A7C (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x140788E64 (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x14078905C (MiCreateMemoryEventSD.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140790630 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140791ABC (CmpHiveRootSecurityDescriptor.c)
 *     SepInitializationPhase1 @ 0x1407995AC (SepInitializationPhase1.c)
 *     MiCreatePagingFile @ 0x1407A267C (MiCreatePagingFile.c)
 *     PfpCreateEvent @ 0x1407ADB0C (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x1407B4810 (NtSetUuidSeed.c)
 *     DbgkpCreateNotificationEvent @ 0x1407B7A20 (DbgkpCreateNotificationEvent.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407B9DFC (_PnpGetEnumSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x14086E48C (CmpCopySaclToVirtualKey.c)
 *     PiAuCheckTokenMembership @ 0x1408A0A68 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1408A0C20 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1408A0EA4 (PiAuGetStateDirectorySecurityObject.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x140929468 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x140954E84 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097B40C (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x14097D49C (ObpGetSilosRootDirectory.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1409C3BA8 (ViInitializeLocalSystemDescriptor.c)
 *     ObInitSystem @ 0x140A3A924 (ObInitSystem.c)
 *     IopCreateUmdfDirectory @ 0x140A4D578 (IopCreateUmdfDirectory.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140A4FB54 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140A4FF14 (PiAuCreateStandardSecurityObject.c)
 *     SeMakeSystemToken @ 0x140A5E800 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140A5EDB0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140A5F03C (SeMakeAnonymousLogonToken.c)
 *     SepInitSystemDacls @ 0x140A61110 (SepInitSystemDacls.c)
 *     WmipInitializeSecurity @ 0x140A6551C (WmipInitializeSecurity.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140A6A504 (PspInitializeSystemPartitionPhase0.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140A6A81C (PiAuGetDriverDataDirectorySecurityObject.c)
 *     ExpKeyedEventInitialization @ 0x140A6BA88 (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x140A6C61C (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x140A8D360 (IopApplySystemPartitionProt.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlSetDaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        BOOLEAN DaclPresent,
        PACL Dacl,
        BOOLEAN DaclDefaulted)
{
  __int16 v5; // cx
  __int16 v6; // cx
  PACL v7; // rax
  __int16 v8; // cx
  __int16 v10; // cx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v5 = *((_WORD *)SecurityDescriptor + 1);
  if ( v5 >= 0 )
  {
    if ( DaclPresent )
    {
      v6 = v5 | 4;
      v7 = 0LL;
      if ( Dacl )
        v7 = Dacl;
      *((_QWORD *)SecurityDescriptor + 4) = v7;
      v8 = v6 & 0xFFF7;
      *((_WORD *)SecurityDescriptor + 1) = v8;
      if ( !DaclDefaulted )
        return 0;
      v10 = v8 | 8;
    }
    else
    {
      v10 = v5 & 0xFFFB;
    }
    *((_WORD *)SecurityDescriptor + 1) = v10;
    return 0;
  }
  return -1073741703;
}
