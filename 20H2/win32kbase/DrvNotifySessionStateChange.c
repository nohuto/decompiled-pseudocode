/*
 * XREFs of DrvNotifySessionStateChange @ 0x1C0086880
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C0084BB8 (MultiUserNtGreCleanup.c)
 *     InitializeGreCSRSS @ 0x1C00862E0 (InitializeGreCSRSS.c)
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C0060D80 (UserIsUserCritSecIn.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvNotifySessionStateChange(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx

  v3 = (unsigned int)a1;
  if ( gpresUser && (unsigned int)UserIsUserCritSecIn() && (unsigned int)(v3 - 3) > 1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v5 + 24) = v3;
  *(_QWORD *)(v5 + 32) = (unsigned int)PsGetCurrentProcessSessionId();
  WdLogEvent5_WdEvent(v5);
  if ( qword_1C024EE70 )
    return qword_1C024EE70((unsigned int)v3);
  else
    return 3221225659LL;
}
