/*
 * XREFs of SeAccessCheck @ 0x140209C20
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x140225DE0 (SeComputeCreatorDeniedRights.c)
 *     IopCreateSecurityCheck @ 0x140323A1C (IopCreateSecurityCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1404EAD18 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     SeIsSystemContext @ 0x14059579C (SeIsSystemContext.c)
 *     WdipAccessCheck @ 0x1405A3BE0 (WdipAccessCheck.c)
 *     ObCheckObjectAccess @ 0x1405E0970 (ObCheckObjectAccess.c)
 *     AlpcpCheckConnectionSecurity @ 0x1405E5AF4 (AlpcpCheckConnectionSecurity.c)
 *     EtwpRegisterUMGuid @ 0x1405F3400 (EtwpRegisterUMGuid.c)
 *     CmpCheckNotifyAccess @ 0x1405F3EC4 (CmpCheckNotifyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405F3F40 (CmpCheckOpenAccessOnKeyBody.c)
 *     ObpCheckObjectReference @ 0x1405F53C4 (ObpCheckObjectReference.c)
 *     EtwpAccessCheck @ 0x1405F753C (EtwpAccessCheck.c)
 *     ExpWnfCheckCallerAccess @ 0x1405F75F4 (ExpWnfCheckCallerAccess.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     RtlpNewSecurityObject @ 0x140602BE0 (RtlpNewSecurityObject.c)
 *     ObpCreateHandle @ 0x140616FD0 (ObpCreateHandle.c)
 *     sub_140689640 @ 0x140689640 (sub_140689640.c)
 *     ObCheckCreateObjectAccess @ 0x1406BCF50 (ObCheckCreateObjectAccess.c)
 *     CmpCheckCreateAccess @ 0x1406C2558 (CmpCheckCreateAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x1406C3268 (CmpCheckKeyBodyAccess.c)
 *     ExIsRestrictedCaller @ 0x1406C58CC (ExIsRestrictedCaller.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406C8BF0 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PiAuVerifyAccessToObject @ 0x1406CB0D0 (PiAuVerifyAccessToObject.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14071E008 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopBootStatAccessCheck @ 0x1407BD01C (PopBootStatAccessCheck.c)
 *     NtSetUuidSeed @ 0x1407C3040 (NtSetUuidSeed.c)
 *     CmUpdateFeatureConfiguration @ 0x14086D700 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x14086D890 (CmUpdateFeatureUsageSubscription.c)
 *     PiAuCheckTokenMembership @ 0x1408A6598 (PiAuCheckTokenMembership.c)
 *     ObpCheckTraverseAccess @ 0x1408DF970 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x14090B43C (PspCheckJobAccessState.c)
 *     PspIumVerifyParentSd @ 0x14090F504 (PspIumVerifyParentSd.c)
 *     CMFCheckAccess @ 0x14095A9F4 (CMFCheckAccess.c)
 *     VfUtilIsLocalSystem @ 0x1409C97F4 (VfUtilIsLocalSystem.c)
 * Callees:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140223E30 (SeAccessCheckWithHintWithAdminlessChecks.c)
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
