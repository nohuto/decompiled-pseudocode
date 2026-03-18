/*
 * XREFs of SePrivilegeCheck @ 0x1405E9C20
 * Callers:
 *     SeSinglePrivilegeCheckEx @ 0x1405E30A8 (SeSinglePrivilegeCheckEx.c)
 *     IopCheckBackupRestorePrivilege @ 0x1405FFE10 (IopCheckBackupRestorePrivilege.c)
 *     PsOpenProcess @ 0x140602740 (PsOpenProcess.c)
 *     RtlpNewSecurityObject @ 0x140602F70 (RtlpNewSecurityObject.c)
 *     ObpAdjustCreatorAccessState @ 0x140616FB4 (ObpAdjustCreatorAccessState.c)
 *     ObpCreateHandle @ 0x14062B8A0 (ObpCreateHandle.c)
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     PspSinglePrivCheck @ 0x1406D368C (PspSinglePrivCheck.c)
 *     PiAuDoesClientHavePrivilege @ 0x14071B518 (PiAuDoesClientHavePrivilege.c)
 *     SeCheckPrivilegedObject @ 0x140779674 (SeCheckPrivilegedObject.c)
 *     CMFCheckAccess @ 0x140953564 (CMFCheckAccess.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x140206380 (SepPrivilegeCheck.c)
 */

BOOLEAN __stdcall SePrivilegeCheck(
        PPRIVILEGE_SET RequiredPrivileges,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        KPROCESSOR_MODE AccessMode)
{
  PACCESS_TOKEN ClientToken; // rcx

  if ( !AccessMode )
    return 1;
  ClientToken = SubjectSecurityContext->ClientToken;
  if ( !SubjectSecurityContext->ClientToken )
  {
    ClientToken = SubjectSecurityContext->PrimaryToken;
    return SepPrivilegeCheck(
             (__int64)ClientToken,
             (__int64)RequiredPrivileges->Privilege,
             RequiredPrivileges->PrivilegeCount,
             RequiredPrivileges->Control,
             AccessMode);
  }
  if ( SubjectSecurityContext->ImpersonationLevel >= SecurityImpersonation )
    return SepPrivilegeCheck(
             (__int64)ClientToken,
             (__int64)RequiredPrivileges->Privilege,
             RequiredPrivileges->PrivilegeCount,
             RequiredPrivileges->Control,
             AccessMode);
  return 0;
}
