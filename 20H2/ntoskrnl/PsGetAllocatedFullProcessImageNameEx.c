/*
 * XREFs of PsGetAllocatedFullProcessImageNameEx @ 0x14064D5D8
 * Callers:
 *     SeCheckForCriticalAceRemoval @ 0x1405E2050 (SeCheckForCriticalAceRemoval.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1405E4E9C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405E4FBC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x140631204 (SepAdtTokenRightAdjusted.c)
 *     SeLocateProcessImageName @ 0x14064D5C0 (SeLocateProcessImageName.c)
 *     SepQueryNameString @ 0x14068E6AC (SepQueryNameString.c)
 *     SepAuditAssignPrimaryToken @ 0x1407B7184 (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x1407B7938 (SeAuditProcessCreation.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14087454C (CmpReportAuditVirtualizationEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091FB8C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x140920140 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x140920A84 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x140920C04 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x140920DC0 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x140920FFC (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x140921338 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x140921564 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x140921CD8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14092279C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140922A40 (SepAdtStagingEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PsGetAllocatedFullProcessImageName @ 0x14064D60C (PsGetAllocatedFullProcessImageName.c)
 */

__int64 __fastcall PsGetAllocatedFullProcessImageNameEx(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 3221226021LL;
  if ( *(_QWORD *)(a1 + 2240) && (_QWORD)xmmword_140C1DEE0 )
    return ((__int64 (*)(void))xmmword_140C1DEE0)();
  if ( *(_QWORD *)(a1 + 1472) )
    return PsGetAllocatedFullProcessImageName(a1, a2);
  return result;
}
