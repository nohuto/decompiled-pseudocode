/*
 * XREFs of CrmSessionUserNotification @ 0x18003DBCC
 * Callers:
 *     PsmCrmSessionUserNotification @ 0x18003DBC0 (PsmCrmSessionUserNotification.c)
 * Callees:
 *     CrmGlobalsRundown @ 0x18003B540 (CrmGlobalsRundown.c)
 *     CrmStateMonitorTimeSinceLogonReset @ 0x18003DC70 (CrmStateMonitorTimeSinceLogonReset.c)
 */

void __fastcall CrmSessionUserNotification(int a1)
{
  _DWORD *v1; // rdi

  if ( a1 == 6 )
  {
    CrmGlobalsRundown();
  }
  else if ( a1 == 5 )
  {
    RtlAcquireSRWLockShared(&CrmGlobals);
    v1 = qword_1800B3DD0;
    if ( qword_1800B3DD0 )
    {
      RtlAcquireSRWLockExclusive((char *)qword_1800B3DD0 + 8);
      v1[4] = GetCurrentThreadId();
    }
    RtlReleaseSRWLockShared(&CrmGlobals);
    if ( v1 )
    {
      CrmStateMonitorTimeSinceLogonReset(v1);
      v1[4] = 0;
      RtlReleaseSRWLockExclusive(v1 + 2);
    }
  }
}
