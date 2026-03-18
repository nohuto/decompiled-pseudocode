/*
 * XREFs of RtlCreateAcl @ 0x140615800
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x140319CA4 (SepAppendAceToTokenDefaultDacl.c)
 *     RtlCheckTokenMembershipEx @ 0x14035C130 (RtlCheckTokenMembershipEx.c)
 *     SepInitProcessAuditSd @ 0x1403BF73C (SepInitProcessAuditSd.c)
 *     RtlCheckTokenCapability @ 0x140580C40 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x14059FA50 (WdipAccessCheck.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405BCD24 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1405D5DEC (PspAllocateAndQueryProcessNotificationChannel.c)
 *     SPCall2ServerInternal @ 0x1405D6678 (SPCall2ServerInternal.c)
 *     RtlpNewSecurityObject @ 0x140602F70 (RtlpNewSecurityObject.c)
 *     SepCreateImpersonationTokenDacl @ 0x140605930 (SepCreateImpersonationTokenDacl.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140613AC0 (SepAppendAceToTokenObjectAcl.c)
 *     PiUEventInitClientRegistrationContext @ 0x14067D7C0 (PiUEventInitClientRegistrationContext.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406CBAEC (PspAllocateAndQueryNotificationChannel.c)
 *     RtlpCreateServerAcl @ 0x1406DE744 (RtlpCreateServerAcl.c)
 *     PopCreateNotificationName @ 0x1406EACC0 (PopCreateNotificationName.c)
 *     IopCreateSecurityDescriptorPerType @ 0x140702E88 (IopCreateSecurityDescriptorPerType.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140703C00 (ObpVerifyAccessToBoundaryEntry.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x14071DE9C (RtlpSysVolCreateSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140721AA8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140751974 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407645F4 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140769DC8 (_CmGetRegKeySecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x14076FDF0 (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x140771C94 (MiSessionObjectCreate.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14077D1E8 (PopCreateHiberFileSecurityDescriptor.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14077ECE0 (ObpCreateDefaultObjectTypeSD.c)
 *     ObCreateKernelObjectsSD @ 0x1407830F8 (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x1407834E0 (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x1407836D8 (MiCreateMemoryEventSD.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14078F6BC (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140791974 (CmpAdminSystemSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x14079E69C (MiCreatePagingFile.c)
 *     SepInitializationPhase1 @ 0x1407A6578 (SepInitializationPhase1.c)
 *     PfpCreateEvent @ 0x1407AA9AC (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x1407B16A0 (NtSetUuidSeed.c)
 *     DbgkpCreateNotificationEvent @ 0x1407B48B0 (DbgkpCreateNotificationEvent.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407B6C8C (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x14089F748 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14089F900 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14089FB84 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlpComputeMergedAcl2 @ 0x14090F9C8 (RtlpComputeMergedAcl2.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1409281B8 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x1409537B4 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097A06C (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x14097C0FC (ObpGetSilosRootDirectory.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1409C3B98 (ViInitializeLocalSystemDescriptor.c)
 *     ObInitSystem @ 0x140A3AAB4 (ObInitSystem.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140A4A0D8 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140A4A498 (PiAuCreateStandardSecurityObject.c)
 *     IopCreateUmdfDirectory @ 0x140A56114 (IopCreateUmdfDirectory.c)
 *     SeMakeSystemToken @ 0x140A6134C (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140A618FC (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140A61B88 (SeMakeAnonymousLogonToken.c)
 *     SepInitSystemDacls @ 0x140A63C5C (SepInitSystemDacls.c)
 *     WmipInitializeSecurity @ 0x140A65B3C (WmipInitializeSecurity.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140A6A2A4 (PspInitializeSystemPartitionPhase0.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140A6A5BC (PiAuGetDriverDataDirectorySecurityObject.c)
 *     ExpKeyedEventInitialization @ 0x140A6B800 (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x140A6C34C (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x140A8DD70 (IopApplySystemPartitionProt.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 */

NTSTATUS __stdcall RtlCreateAcl(PACL Acl, ULONG AclLength, ULONG AclRevision)
{
  __int16 v3; // bx
  UCHAR v4; // si
  NTSTATUS result; // eax

  v3 = AclLength;
  v4 = AclRevision;
  if ( AclLength < 8 )
    return -1073741789;
  if ( AclRevision - 2 > 2 || AclLength > 0xFFFC )
    return -1073741811;
  memset(Acl, 0, AclLength);
  result = 0;
  Acl->AclRevision = v4;
  Acl->Sbz1 = 0;
  Acl->AclSize = v3 & 0xFFFC;
  *(_DWORD *)&Acl->AceCount = 0;
  return result;
}
