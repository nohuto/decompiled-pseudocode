/*
 * XREFs of ObpIsKernelHandle @ 0x1403488C0
 * Callers:
 *     ObIsKernelHandle @ 0x14035B910 (ObIsKernelHandle.c)
 *     ObWaitForMultipleObjects @ 0x1405FCDC0 (ObWaitForMultipleObjects.c)
 *     ObCloseHandle @ 0x14061AB80 (ObCloseHandle.c)
 *     ObpCloseHandle @ 0x14061ABC0 (ObpCloseHandle.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14062792C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ObQueryObjectAuditingByHandle @ 0x140684FE0 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x1406918A0 (ObSetHandleAttributes.c)
 *     NtClose @ 0x1406F0980 (NtClose.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091D34C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x14091DACC (SeAuditHandleDuplication.c)
 *     SeOperationAuditAlarm @ 0x14091E7BC (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14091EAF8 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091ED24 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091F498 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14091FF5C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140920200 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpIsKernelHandle(unsigned __int64 a1, char a2)
{
  return !a2 && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 <= 0xFFFFFFFFFFFFFFFDuLL;
}
