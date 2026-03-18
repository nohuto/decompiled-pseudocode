/*
 * XREFs of PsGetAllocatedFullProcessImageNameEx @ 0x1406B8108
 * Callers:
 *     SepAdtTokenRightAdjusted @ 0x140618FE4 (SepAdtTokenRightAdjusted.c)
 *     SepQueryNameString @ 0x1406321F0 (SepQueryNameString.c)
 *     SeCheckForCriticalAceRemoval @ 0x14063EBA0 (SeCheckForCriticalAceRemoval.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14068D45C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14068D57C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeLocateProcessImageName @ 0x1406B80F0 (SeLocateProcessImageName.c)
 *     SepAuditAssignPrimaryToken @ 0x1407A60B8 (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x1407A686C (SeAuditProcessCreation.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14086E9F4 (CmpReportAuditVirtualizationEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140919F0C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14091A4C0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x14091AE04 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14091AF84 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14091B140 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14091B37C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14091B6B8 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091B8E4 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091C058 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14091CB1C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14091CDC0 (SepAdtStagingEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     PsGetAllocatedFullProcessImageName @ 0x1406B813C (PsGetAllocatedFullProcessImageName.c)
 */

__int64 __fastcall PsGetAllocatedFullProcessImageNameEx(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 3221226021LL;
  if ( *(_QWORD *)(a1 + 2240) && (_QWORD)xmmword_140C1DE20 )
    return ((__int64 (*)(void))xmmword_140C1DE20)();
  if ( *(_QWORD *)(a1 + 1472) )
    return PsGetAllocatedFullProcessImageName(a1, a2);
  return result;
}
