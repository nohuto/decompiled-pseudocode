/*
 * XREFs of PopNetRefreshTimerWorkerCallback @ 0x1408EEB60
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x14035F184 (PopOkayToQueueNextWorkItem.c)
 *     PopNetArmRefreshTimer @ 0x1408EE7F0 (PopNetArmRefreshTimer.c)
 *     PopNetDisengageNetworkRefresh @ 0x1408EE90C (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x1408EE958 (PopNetEngageNetworkRefresh.c)
 *     PopNetGetNextDueRefreshTime @ 0x1408EE9A4 (PopNetGetNextDueRefreshTime.c)
 *     PopNetIsNetworkRefreshEnabled @ 0x1408EEAD4 (PopNetIsNetworkRefreshEnabled.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetRefreshTimerWorkerCallback(int a1)
{
  __int64 v1; // rcx
  __int64 QuadPart; // rcx
  char v3; // dl
  LARGE_INTEGER NextDueRefreshTime; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  PopAcquirePolicyLock(a1);
  if ( PopNetInLpePhase && PopNetIsNetworkRefreshEnabled() && _InterlockedExchangeAdd(&PopNetRefreshTimerState, 0) == 2 )
  {
    if ( PopNetRefreshIntervalActive )
    {
      PopNetDisengageNetworkRefresh();
      NextDueRefreshTime = PopNetGetNextDueRefreshTime();
      v3 = 1;
      _InterlockedExchange(&PopNetRefreshTimerState, 1);
      QuadPart = NextDueRefreshTime.QuadPart;
    }
    else
    {
      PopNetEngageNetworkRefresh(v1);
      QuadPart = 300000000LL;
      _InterlockedExchange(&PopNetRefreshTimerState, 1);
      v3 = 0;
    }
    PopNetArmRefreshTimer(QuadPart, v3);
  }
  PopOkayToQueueNextWorkItem((__int64)&unk_140C20868);
  return PopReleasePolicyLock(v6, v5);
}
