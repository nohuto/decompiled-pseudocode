/*
 * XREFs of SeAccessCheck @ 0x14029AA90
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x14020B050 (SeComputeCreatorDeniedRights.c)
 *     IopCreateSecurityCheck @ 0x140333A14 (IopCreateSecurityCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1404E776C (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     SeIsSystemContext @ 0x140591CFC (SeIsSystemContext.c)
 *     WdipAccessCheck @ 0x1405A0140 (WdipAccessCheck.c)
 *     CmpCheckNotifyAccess @ 0x1405E5294 (CmpCheckNotifyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405ECE00 (CmpCheckOpenAccessOnKeyBody.c)
 *     ObpCreateHandle @ 0x1405F6330 (ObpCreateHandle.c)
 *     ExpWnfCheckCallerAccess @ 0x140623C90 (ExpWnfCheckCallerAccess.c)
 *     AlpcpCheckConnectionSecurity @ 0x14062DAA8 (AlpcpCheckConnectionSecurity.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14064CDF0 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     ObCheckCreateObjectAccess @ 0x140668330 (ObCheckCreateObjectAccess.c)
 *     ObpCheckObjectReference @ 0x140668AD0 (ObpCheckObjectReference.c)
 *     EtwpAccessCheck @ 0x14066BB48 (EtwpAccessCheck.c)
 *     SPCall2ServerInternal @ 0x14066C0B8 (SPCall2ServerInternal.c)
 *     EtwpRegisterUMGuid @ 0x14066E310 (EtwpRegisterUMGuid.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     RtlpNewSecurityObject @ 0x14067B050 (RtlpNewSecurityObject.c)
 *     CmpCheckKeyBodyAccess @ 0x1406DCBB4 (CmpCheckKeyBodyAccess.c)
 *     ObCheckObjectAccess @ 0x1406DCDF0 (ObCheckObjectAccess.c)
 *     CmpCheckCreateAccess @ 0x1406EE638 (CmpCheckCreateAccess.c)
 *     ExIsRestrictedCaller @ 0x1406F252C (ExIsRestrictedCaller.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406F5B60 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PiAuVerifyAccessToObject @ 0x1406F7FE0 (PiAuVerifyAccessToObject.c)
 *     PopBootStatAccessCheck @ 0x1407AF0DC (PopBootStatAccessCheck.c)
 *     NtSetUuidSeed @ 0x1407B4810 (NtSetUuidSeed.c)
 *     CmUpdateFeatureConfiguration @ 0x140867CE0 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140867E70 (CmUpdateFeatureUsageSubscription.c)
 *     PiAuCheckTokenMembership @ 0x1408A0A68 (PiAuCheckTokenMembership.c)
 *     ObpCheckTraverseAccess @ 0x1408D9B30 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x14090581C (PspCheckJobAccessState.c)
 *     PspIumVerifyParentSd @ 0x1409098E4 (PspIumVerifyParentSd.c)
 *     CMFCheckAccess @ 0x140954C34 (CMFCheckAccess.c)
 *     VfUtilIsLocalSystem @ 0x1409C37D4 (VfUtilIsLocalSystem.c)
 * Callees:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x14029BDD0 (SeAccessCheckWithHintWithAdminlessChecks.c)
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
