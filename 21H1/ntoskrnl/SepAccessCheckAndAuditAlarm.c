/*
 * XREFs of SepAccessCheckAndAuditAlarm @ 0x1405E18A0
 * Callers:
 *     NtAccessCheckAndAuditAlarm @ 0x1406CE7C0 (NtAccessCheckAndAuditAlarm.c)
 *     NtAccessCheckByTypeAndAuditAlarm @ 0x1406D0EF0 (NtAccessCheckByTypeAndAuditAlarm.c)
 *     NtAccessCheckByTypeResultListAndAuditAlarm @ 0x14091CA80 (NtAccessCheckByTypeResultListAndAuditAlarm.c)
 *     NtAccessCheckByTypeResultListAndAuditAlarmByHandle @ 0x14091CB30 (NtAccessCheckByTypeResultListAndAuditAlarmByHandle.c)
 * Callees:
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E1B90 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 */

__int64 __fastcall SepAccessCheckAndAuditAlarm(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        char a10,
        __int64 a11,
        int a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        char a17)
{
  return SepAccessCheckAndAuditAlarmWithAdminlessChecks(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           0);
}
