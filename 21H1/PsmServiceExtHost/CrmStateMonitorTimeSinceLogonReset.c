/*
 * XREFs of CrmStateMonitorTimeSinceLogonReset @ 0x18003DC70
 * Callers:
 *     CrmSessionUserNotification @ 0x18003DBCC (CrmSessionUserNotification.c)
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002B6B4 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorTimeSinceLogonReset(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  TpSetTimer(*(_QWORD *)(a1 + 72), 0LL, 0LL, 0LL);
  TpWaitForTimer(*(_QWORD *)(a1 + 72), 1LL);
  v4 = 0LL;
  CrmStateMonitorStateSet((void **)a1, &v4, 8uLL, 1);
  v2 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 64) = 30LL;
  v5 = -300000000LL;
  return TpSetTimer(v2, &v5, 0LL, 0LL);
}
