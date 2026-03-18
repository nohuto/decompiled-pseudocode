/*
 * XREFs of PsGetCurrentThreadProcess @ 0x14030E2D0
 * Callers:
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1405E3150 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405E326C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     CmpIsSystemEntity @ 0x1405EA850 (CmpIsSystemEntity.c)
 *     CmQueryKey @ 0x14061F340 (CmQueryKey.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140622420 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpVEExecuteParseLogic @ 0x1406232C0 (CmpVEExecuteParseLogic.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     SepAdtTokenRightAdjusted @ 0x140670704 (SepAdtTokenRightAdjusted.c)
 *     SeCheckForCriticalAceRemoval @ 0x14068C0B0 (SeCheckForCriticalAceRemoval.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406D2F90 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpCheckExeOwnerForPca @ 0x14075AD9C (CmpCheckExeOwnerForPca.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x140761060 (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     SepAuditAssignPrimaryToken @ 0x1407A3868 (SepAuditAssignPrimaryToken.c)
 *     CmpPublishEventForPcaResolver @ 0x1408661BC (CmpPublishEventForPcaResolver.c)
 *     CmpDoAccessCheckOnKCB @ 0x14086B9F0 (CmpDoAccessCheckOnKCB.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14086CF34 (CmpReportAuditVirtualizationEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140918C5C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x140919210 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x140919CD4 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x140919E90 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14091A0CC (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14091A408 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091A634 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091ADA8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14091B86C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14091BB10 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentThreadProcess()
{
  return KeGetCurrentThread()->Process;
}
