/*
 * XREFs of ObpIsKernelHandle @ 0x140353610
 * Callers:
 *     ObIsKernelHandle @ 0x1402A06B0 (ObIsKernelHandle.c)
 *     ObQueryObjectAuditingByHandle @ 0x1405E2BC0 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x1405F1710 (ObSetHandleAttributes.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     ObpCloseHandle @ 0x140684820 (ObpCloseHandle.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140693A3C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ObWaitForMultipleObjects @ 0x1406EC520 (ObWaitForMultipleObjects.c)
 *     NtClose @ 0x140707D60 (NtClose.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091D4AC (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x14091DC2C (SeAuditHandleDuplication.c)
 *     SeOperationAuditAlarm @ 0x14091E91C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14091EC58 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091EE84 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091F5F8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409200BC (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140920360 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpIsKernelHandle(unsigned __int64 a1, char a2)
{
  return !a2 && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 <= 0xFFFFFFFFFFFFFFFDuLL;
}
