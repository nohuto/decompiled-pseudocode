/*
 * XREFs of PsGetCurrentThreadProcess @ 0x14034B7B0
 * Callers:
 *     CmQueryKey @ 0x1405E9D20 (CmQueryKey.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405ECE00 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpVEExecuteParseLogic @ 0x1405EDCA0 (CmpVEExecuteParseLogic.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     SepAdtTokenRightAdjusted @ 0x140618FE4 (SepAdtTokenRightAdjusted.c)
 *     SeCheckForCriticalAceRemoval @ 0x14063EBA0 (SeCheckForCriticalAceRemoval.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14068D45C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14068D57C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     CmpIsSystemEntity @ 0x140693D90 (CmpIsSystemEntity.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406F5B60 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpCheckExeOwnerForPca @ 0x14075D284 (CmpCheckExeOwnerForPca.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x140762940 (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     SepAuditAssignPrimaryToken @ 0x1407A60B8 (SepAuditAssignPrimaryToken.c)
 *     CmpPublishEventForPcaResolver @ 0x1408674DC (CmpPublishEventForPcaResolver.c)
 *     CmpDoAccessCheckOnKCB @ 0x14086CD40 (CmpDoAccessCheckOnKCB.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14086E9F4 (CmpReportAuditVirtualizationEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140919F0C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14091A4C0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x14091AF84 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14091B140 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14091B37C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14091B6B8 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091B8E4 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091C058 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14091CB1C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14091CDC0 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentThreadProcess()
{
  return KeGetCurrentThread()->Process;
}
