/*
 * XREFs of PopCoalescingCallbackWorker @ 0x1408E6980
 * Callers:
 *     <none>
 * Callees:
 *     PoIssueCoalescingNotification @ 0x14056ECB8 (PoIssueCoalescingNotification.c)
 *     PopCoalescingSetActiveState @ 0x14056EE04 (PopCoalescingSetActiveState.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopCoalescingCallbackWorker(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // rcx

  while ( 1 )
  {
    PopAcquirePolicyLock(a1);
    if ( (PopCoalescingState & 2) != 0 )
      break;
    if ( (PopCoalescingState & 1) == 0 )
      goto LABEL_9;
    PopCoalescingSetActiveState(0);
    PopReleasePolicyLock(v4, v3);
    v5 = 2;
LABEL_8:
    PoIssueCoalescingNotification(PopCoalescingRegistration, v5);
  }
  if ( (PopCoalescingState & 1) == 0 )
  {
    PopCoalescingState &= ~4u;
    PopCoalescingSetActiveState(1);
    PopReleasePolicyLock(v7, v6);
    v5 = 1;
    goto LABEL_8;
  }
  if ( (PopCoalescingState & 4) != 0 )
  {
    PopCoalescingState &= ~4u;
    PopReleasePolicyLock(v2, v1);
    v5 = 3;
    goto LABEL_8;
  }
LABEL_9:
  PopCoalescingState &= ~8u;
  return PopReleasePolicyLock(v2, v1);
}
