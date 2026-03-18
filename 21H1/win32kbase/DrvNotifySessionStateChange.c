/*
 * XREFs of DrvNotifySessionStateChange @ 0x1C000E250
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C000C588 (MultiUserNtGreCleanup.c)
 *     InitializeGreCSRSS @ 0x1C000DCB0 (InitializeGreCSRSS.c)
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C00B4D20 (UserIsUserCritSecIn.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvNotifySessionStateChange(unsigned int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rbx

  v1 = a1;
  if ( gpresUser && (unsigned int)UserIsUserCritSecIn() && (unsigned int)(v1 - 3) > 1 )
  {
    v2 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v2);
  }
  v3 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v3 + 24) = v1;
  *(_QWORD *)(v3 + 32) = (unsigned int)PsGetCurrentProcessSessionId();
  WdLogEvent5_WdEvent(v3);
  if ( qword_1C0256E50 )
    return qword_1C0256E50((unsigned int)v1);
  else
    return 3221225659LL;
}
