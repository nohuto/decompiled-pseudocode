/*
 * XREFs of PopNetRefreshTimerWorkerCallback @ 0x1408ED870
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x1403217D4 (PopOkayToQueueNextWorkItem.c)
 *     PopNetArmRefreshTimer @ 0x1408ED500 (PopNetArmRefreshTimer.c)
 *     PopNetDisengageNetworkRefresh @ 0x1408ED61C (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x1408ED668 (PopNetEngageNetworkRefresh.c)
 *     PopNetGetNextDueRefreshTime @ 0x1408ED6B4 (PopNetGetNextDueRefreshTime.c)
 *     PopNetIsNetworkRefreshEnabled @ 0x1408ED7E4 (PopNetIsNetworkRefreshEnabled.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
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
  PopOkayToQueueNextWorkItem((__int64)&unk_140C209C8);
  return PopReleasePolicyLock(v6, v5);
}
