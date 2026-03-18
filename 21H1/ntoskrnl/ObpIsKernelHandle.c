/*
 * XREFs of ObpIsKernelHandle @ 0x140264120
 * Callers:
 *     ObIsKernelHandle @ 0x1403232C0 (ObIsKernelHandle.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405E326C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ObWaitForMultipleObjects @ 0x1405F7860 (ObWaitForMultipleObjects.c)
 *     NtClose @ 0x14062C900 (NtClose.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     ObpCloseHandle @ 0x140637590 (ObpCloseHandle.c)
 *     ObQueryObjectAuditingByHandle @ 0x1406B60A0 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x1406C1510 (ObSetHandleAttributes.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140918C5C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x1409193DC (SeAuditHandleDuplication.c)
 *     SeOperationAuditAlarm @ 0x14091A0CC (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14091A408 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091A634 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091ADA8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14091B86C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14091BB10 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpIsKernelHandle(unsigned __int64 a1, char a2)
{
  return !a2 && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 <= 0xFFFFFFFFFFFFFFFDuLL;
}
