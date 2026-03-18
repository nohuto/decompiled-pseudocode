/*
 * XREFs of PsGetCurrentThreadProcess @ 0x14031C770
 * Callers:
 *     SeCheckForCriticalAceRemoval @ 0x1405E2050 (SeCheckForCriticalAceRemoval.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1405E4E9C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405E4FBC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405F3F40 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpIsSystemEntity @ 0x14060D910 (CmpIsSystemEntity.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmpVEExecuteParseLogic @ 0x14061C220 (CmpVEExecuteParseLogic.c)
 *     SepAdtTokenRightAdjusted @ 0x140631204 (SepAdtTokenRightAdjusted.c)
 *     CmQueryKey @ 0x1406784D0 (CmQueryKey.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406C8BF0 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpCheckExeOwnerForPca @ 0x14076B9E4 (CmpCheckExeOwnerForPca.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x140770F50 (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     SepAuditAssignPrimaryToken @ 0x1407B7184 (SepAuditAssignPrimaryToken.c)
 *     CmpPublishEventForPcaResolver @ 0x14086CEFC (CmpPublishEventForPcaResolver.c)
 *     CmpDoAccessCheckOnKCB @ 0x1408725DC (CmpDoAccessCheckOnKCB.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14087454C (CmpReportAuditVirtualizationEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091FB8C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x140920140 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x140920C04 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x140920DC0 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x140920FFC (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x140921338 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x140921564 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x140921CD8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14092279C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140922A40 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentThreadProcess()
{
  return KeGetCurrentThread()->Process;
}
