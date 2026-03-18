/*
 * XREFs of SePrivilegeCheck @ 0x140693160
 * Callers:
 *     ObpCreateHandle @ 0x1405F6330 (ObpCreateHandle.c)
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     SeSinglePrivilegeCheckEx @ 0x140667BF8 (SeSinglePrivilegeCheckEx.c)
 *     ObpAdjustCreatorAccessState @ 0x14066844C (ObpAdjustCreatorAccessState.c)
 *     IopCheckBackupRestorePrivilege @ 0x140677EF0 (IopCheckBackupRestorePrivilege.c)
 *     PsOpenProcess @ 0x14067A820 (PsOpenProcess.c)
 *     RtlpNewSecurityObject @ 0x14067B050 (RtlpNewSecurityObject.c)
 *     PspSinglePrivCheck @ 0x1406F625C (PspSinglePrivCheck.c)
 *     PiAuDoesClientHavePrivilege @ 0x14071D498 (PiAuDoesClientHavePrivilege.c)
 *     SeCheckPrivilegedObject @ 0x14077BA84 (SeCheckPrivilegedObject.c)
 *     CMFCheckAccess @ 0x140954C34 (CMFCheckAccess.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x140298E90 (SepPrivilegeCheck.c)
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
