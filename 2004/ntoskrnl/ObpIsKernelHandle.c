/*
 * XREFs of ObpIsKernelHandle @ 0x14020B240
 * Callers:
 *     ObIsKernelHandle @ 0x140310AB0 (ObIsKernelHandle.c)
 *     NtClose @ 0x1405F78C0 (NtClose.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     ObpCloseHandle @ 0x140602550 (ObpCloseHandle.c)
 *     ObWaitForMultipleObjects @ 0x14066F900 (ObWaitForMultipleObjects.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14068D57C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ObQueryObjectAuditingByHandle @ 0x1406D4430 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x1406E1A90 (ObSetHandleAttributes.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140919F0C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x14091A68C (SeAuditHandleDuplication.c)
 *     SeOperationAuditAlarm @ 0x14091B37C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14091B6B8 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091B8E4 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091C058 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14091CB1C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14091CDC0 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpIsKernelHandle(unsigned __int64 a1, char a2)
{
  return !a2 && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 <= 0xFFFFFFFFFFFFFFFDuLL;
}
