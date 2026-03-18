/*
 * XREFs of SeCheckAuditPrivilege @ 0x1405E2FB8
 * Callers:
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E1B90 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     NtCloseObjectAuditAlarm @ 0x1406CFE60 (NtCloseObjectAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1406D5CC0 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1406E27E0 (NtPrivilegedServiceAuditAlarm.c)
 *     NtDeleteObjectAuditAlarm @ 0x140720B20 (NtDeleteObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140777230 (NtPrivilegeObjectAuditAlarm.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x140206380 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1405E5240 (SePrivilegedServiceAuditAlarm.c)
 */

char __fastcall SeCheckAuditPrivilege(__int64 a1, char a2)
{
  __int64 v4; // rcx
  char v5; // al
  __int64 v6; // r9
  char v7; // di
  _DWORD v9[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  int v11; // [rsp+40h] [rbp-18h]

  v9[0] = 1;
  v4 = *(_QWORD *)(a1 + 16);
  v9[1] = 1;
  v10 = SeAuditPrivilege;
  v11 = 0;
  v5 = SepPrivilegeCheck(v4, (__int64)&v10, 1u, 1, a2);
  v7 = v5;
  if ( a2 )
  {
    LOBYTE(v6) = v5;
    SePrivilegedServiceAuditAlarm(0LL, a1, v9, v6);
  }
  return v7;
}
