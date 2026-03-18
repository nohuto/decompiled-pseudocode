/*
 * XREFs of SepAuditFailed @ 0x140928130
 * Callers:
 *     SepRmCallLsa @ 0x140320260 (SepRmCallLsa.c)
 *     SepRmDispatchDataToLsa @ 0x1403204A8 (SepRmDispatchDataToLsa.c)
 *     SepInitProcessAuditSd @ 0x1403BBE04 (SepInitProcessAuditSd.c)
 *     SepAuditFailedRaisedIrql @ 0x140596248 (SepAuditFailedRaisedIrql.c)
 *     NtOpenObjectAuditAlarm @ 0x1405E2910 (NtOpenObjectAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1405E352C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E3AB0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1405E4E9C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405E4FBC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x1405E5080 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x1405E5150 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x1405E51D0 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1405F44C0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     NtCloseObjectAuditAlarm @ 0x1406C4600 (NtCloseObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1406D8F20 (NtPrivilegedServiceAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1406DC5F8 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     NtDeleteObjectAuditAlarm @ 0x140730AF0 (NtDeleteObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140787C40 (NtPrivilegeObjectAuditAlarm.c)
 *     SepRmCommandServerThread @ 0x1407A4480 (SepRmCommandServerThread.c)
 *     SepAuditAssignPrimaryToken @ 0x1407B7184 (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x1407B7938 (SeAuditProcessCreation.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091FB8C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x140920140 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x140920A84 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x140920C04 (SeAuditSystemTimeChange.c)
 *     SeOperationAuditAlarm @ 0x140920FFC (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x140921338 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x140921564 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x140921AAC (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x140921CD8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14092279C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140922A40 (SepAdtStagingEvent.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x140924040 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1403F8D70 (ZwSetValueKey.c)
 *     ZwFlushKey @ 0x1403F9EB0 (ZwFlushKey.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     SepAdtLogAuditFailureEvent @ 0x1409218B4 (SepAdtLogAuditFailureEvent.c)
 */

void __fastcall SepAuditFailed(signed int a1)
{
  ULONG_PTR v1; // rbx
  NTSTATUS v2; // eax
  NTSTATUS v3; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp+10h] BYREF

  DestinationString = 0LL;
  v1 = a1;
  if ( SepCrashOnAuditFail )
  {
    if ( SepAdtRegNotifyHandle )
    {
      SepAdtLogAuditFailureEvent(a1, 1);
      RtlInitUnicodeString(&DestinationString, L"CrashOnAuditFail");
      LODWORD(BugCheckParameter4) = 2;
      do
      {
        do
          v2 = ZwSetValueKey(SepAdtRegNotifyHandle, &DestinationString, 0, 4u, &BugCheckParameter4, 4u);
        while ( v2 == -1073741670 );
      }
      while ( v2 == -1073741801 );
      if ( v2 >= 0 )
      {
        do
        {
          do
            v3 = ZwFlushKey(SepAdtRegNotifyHandle);
          while ( v3 == -1073741670 );
        }
        while ( v3 == -1073741801 );
      }
      KeBugCheckEx(0xC0000244, v1, 0LL, 0LL, 0LL);
    }
    SepCrashOnAuditFail = 0;
  }
}
