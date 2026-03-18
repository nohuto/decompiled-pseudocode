/*
 * XREFs of SePrivilegeCheck @ 0x14060BF30
 * Callers:
 *     IopCheckBackupRestorePrivilege @ 0x140600360 (IopCheckBackupRestorePrivilege.c)
 *     PsOpenProcess @ 0x1406023B0 (PsOpenProcess.c)
 *     RtlpNewSecurityObject @ 0x140602BE0 (RtlpNewSecurityObject.c)
 *     ObpCreateHandle @ 0x140616FD0 (ObpCreateHandle.c)
 *     SeSinglePrivilegeCheckEx @ 0x14063B9F8 (SeSinglePrivilegeCheckEx.c)
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 *     ObpAdjustCreatorAccessState @ 0x1406BD90C (ObpAdjustCreatorAccessState.c)
 *     PspSinglePrivCheck @ 0x1406C92EC (PspSinglePrivCheck.c)
 *     PiAuDoesClientHavePrivilege @ 0x14072B334 (PiAuDoesClientHavePrivilege.c)
 *     SeCheckPrivilegedObject @ 0x14078A084 (SeCheckPrivilegedObject.c)
 *     CMFCheckAccess @ 0x14095A9F4 (CMFCheckAccess.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x140210C80 (SepPrivilegeCheck.c)
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
