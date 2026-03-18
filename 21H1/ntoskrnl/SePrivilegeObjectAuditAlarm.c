/*
 * XREFs of SePrivilegeObjectAuditAlarm @ 0x1405E3210
 * Callers:
 *     ObpCreateHandle @ 0x14062B8A0 (ObpCreateHandle.c)
 *     PspCreateObjectHandle @ 0x1406F3A00 (PspCreateObjectHandle.c)
 *     SeCheckPrivilegedObject @ 0x140779674 (SeCheckPrivilegedObject.c)
 * Callees:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405E326C (SepAdtPrivilegeObjectAuditAlarm.c)
 */

__int64 __fastcall SePrivilegeObjectAuditAlarm(int a1, __int64 *a2, int a3, __int64 a4, char a5, char a6)
{
  __int64 result; // rax

  if ( a6 )
    return SepAdtPrivilegeObjectAuditAlarm((unsigned int)&SeSubsystemName, 0, 0, a1, *a2, a2[2], a2[3], a3, a4, a5);
  return result;
}
