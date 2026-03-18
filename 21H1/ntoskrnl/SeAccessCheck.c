/*
 * XREFs of SeAccessCheck @ 0x140207F80
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x140263F30 (SeComputeCreatorDeniedRights.c)
 *     IopCreateSecurityCheck @ 0x1402F6C58 (IopCreateSecurityCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1404E7130 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     SeIsSystemContext @ 0x14059160C (SeIsSystemContext.c)
 *     WdipAccessCheck @ 0x14059FA50 (WdipAccessCheck.c)
 *     ExIsRestrictedCaller @ 0x1405CEDDC (ExIsRestrictedCaller.c)
 *     SPCall2ServerInternal @ 0x1405D6678 (SPCall2ServerInternal.c)
 *     EtwpAccessCheck @ 0x1405F4798 (EtwpAccessCheck.c)
 *     EtwpRegisterUMGuid @ 0x1405F6270 (EtwpRegisterUMGuid.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     RtlpNewSecurityObject @ 0x140602F70 (RtlpNewSecurityObject.c)
 *     ObpCheckObjectReference @ 0x1406137F0 (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x1406170B0 (ObCheckCreateObjectAccess.c)
 *     CmpCheckNotifyAccess @ 0x14061A8B4 (CmpCheckNotifyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140622420 (CmpCheckOpenAccessOnKeyBody.c)
 *     ObpCreateHandle @ 0x14062B8A0 (ObpCreateHandle.c)
 *     AlpcpCheckConnectionSecurity @ 0x14064B658 (AlpcpCheckConnectionSecurity.c)
 *     ExpWnfCheckCallerAccess @ 0x1406693B0 (ExpWnfCheckCallerAccess.c)
 *     PiAuVerifyAccessToObject @ 0x1406B2B64 (PiAuVerifyAccessToObject.c)
 *     CmpCheckKeyBodyAccess @ 0x1406BB974 (CmpCheckKeyBodyAccess.c)
 *     ObCheckObjectAccess @ 0x1406BBBB0 (ObCheckObjectAccess.c)
 *     CmpCheckCreateAccess @ 0x1406CD338 (CmpCheckCreateAccess.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406D2F90 (CmpCheckKeySecurityDescriptorAccess.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1407001B0 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopBootStatAccessCheck @ 0x1407ABF7C (PopBootStatAccessCheck.c)
 *     NtSetUuidSeed @ 0x1407B16A0 (NtSetUuidSeed.c)
 *     CmUpdateFeatureConfiguration @ 0x14086699C (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140866B2C (CmUpdateFeatureUsageSubscription.c)
 *     PiAuCheckTokenMembership @ 0x14089F748 (PiAuCheckTokenMembership.c)
 *     ObpCheckTraverseAccess @ 0x1408D87C0 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x14090453C (PspCheckJobAccessState.c)
 *     PspIumVerifyParentSd @ 0x140908634 (PspIumVerifyParentSd.c)
 *     CMFCheckAccess @ 0x140953564 (CMFCheckAccess.c)
 *     VfUtilIsLocalSystem @ 0x1409C37C4 (VfUtilIsLocalSystem.c)
 * Callees:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1402092C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 */

BOOLEAN __stdcall SeAccessCheck(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        BOOLEAN SubjectContextLocked,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK PreviouslyGrantedAccess,
        PPRIVILEGE_SET *Privileges,
        PGENERIC_MAPPING GenericMapping,
        KPROCESSOR_MODE AccessMode,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  char v12; // [rsp+58h] [rbp-10h]

  v12 = 0;
  return SeAccessCheckWithHintWithAdminlessChecks(
           SecurityDescriptor,
           0LL,
           SubjectSecurityContext,
           SubjectContextLocked,
           DesiredAccess,
           PreviouslyGrantedAccess,
           Privileges,
           GenericMapping,
           AccessMode,
           GrantedAccess,
           AccessStatus,
           v12);
}
