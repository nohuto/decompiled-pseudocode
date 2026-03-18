/*
 * XREFs of SeDeleteObjectAuditAlarm @ 0x14091CC90
 * Callers:
 *     <none>
 * Callees:
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x14091CCB0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 */

void __stdcall SeDeleteObjectAuditAlarm(PVOID Object, HANDLE Handle)
{
  SeDeleteObjectAuditAlarmWithTransaction(Object, Handle, 0LL);
}
