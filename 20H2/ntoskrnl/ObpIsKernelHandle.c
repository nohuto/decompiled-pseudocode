/*
 * XREFs of ObpIsKernelHandle @ 0x14021E8F0
 * Callers:
 *     ObIsKernelHandle @ 0x14033B660 (ObIsKernelHandle.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405E4FBC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     NtClose @ 0x140611680 (NtClose.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     ObpCloseHandle @ 0x140627DB0 (ObpCloseHandle.c)
 *     ObSetHandleAttributes @ 0x1406295A0 (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x140629840 (ObQueryObjectAuditingByHandle.c)
 *     ObWaitForMultipleObjects @ 0x140688460 (ObWaitForMultipleObjects.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091FB8C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x14092030C (SeAuditHandleDuplication.c)
 *     SeOperationAuditAlarm @ 0x140920FFC (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x140921338 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x140921564 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x140921CD8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14092279C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140922A40 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpIsKernelHandle(unsigned __int64 a1, char a2)
{
  return !a2 && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 <= 0xFFFFFFFFFFFFFFFDuLL;
}
