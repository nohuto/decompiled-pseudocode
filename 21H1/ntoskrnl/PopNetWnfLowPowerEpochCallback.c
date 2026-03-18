/*
 * XREFs of PopNetWnfLowPowerEpochCallback @ 0x1408ED9B0
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140256BF0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     KeCancelTimer2 @ 0x14035B660 (KeCancelTimer2.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x1406E54C0 (ExQueryWnfStateData.c)
 *     PopNetArmRefreshTimer @ 0x1408ED500 (PopNetArmRefreshTimer.c)
 *     PopNetDisengageNetworkRefresh @ 0x1408ED61C (PopNetDisengageNetworkRefresh.c)
 *     PopNetGetNextDueRefreshTime @ 0x1408ED6B4 (PopNetGetNextDueRefreshTime.c)
 *     PopNetIsNetworkRefreshEnabled @ 0x1408ED7E4 (PopNetIsNetworkRefreshEnabled.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetWnfLowPowerEpochCallback(__int64 a1)
{
  int v1; // ecx
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  LARGE_INTEGER NextDueRefreshTime; // rax
  REGHANDLE v6; // rdi
  unsigned int v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+38h] [rbp-20h] BYREF
  _BYTE v10[8]; // [rsp+40h] [rbp-18h] BYREF

  v8 = 8;
  v2 = ExQueryWnfStateData(a1, &v9, v10, &v8);
  if ( v2 >= 0 )
  {
    if ( v8 >= 8 )
    {
      PopAcquirePolicyLock(v1);
      if ( (v10[0] & 2) != 0 )
      {
        PopNetInLpePhase = 1;
        if ( PopNetIsNetworkRefreshEnabled() )
        {
          NextDueRefreshTime = PopNetGetNextDueRefreshTime();
          _InterlockedExchange(&PopNetRefreshTimerState, 1);
          PopNetArmRefreshTimer(NextDueRefreshTime.QuadPart, 1);
        }
      }
      else if ( PopNetInLpePhase )
      {
        PopNetInLpePhase = 0;
        if ( _InterlockedExchange(&PopNetRefreshTimerState, 0) == 1 )
        {
          KeCancelTimer2((__int64)&PopNetRefreshTimer);
          if ( PopDiagHandleRegistered )
          {
            v6 = PopDiagHandle;
            if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_NET_REFRESH_TIMER_DISARMED) )
              EtwWrite(v6, &POP_ETW_EVENT_NET_REFRESH_TIMER_DISARMED, 0LL, 0, 0LL);
          }
        }
        if ( PopNetRefreshIntervalActive )
          PopNetDisengageNetworkRefresh();
      }
      PopReleasePolicyLock(v4, v3);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v2;
}
