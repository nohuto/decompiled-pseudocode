/*
 * XREFs of PopNetWnfLowPowerEpochCallback @ 0x1408F48B0
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x14020E030 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     KeCancelTimer2 @ 0x14033C240 (KeCancelTimer2.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x1406DB8B0 (ExQueryWnfStateData.c)
 *     PopNetArmRefreshTimer @ 0x1408F4400 (PopNetArmRefreshTimer.c)
 *     PopNetDisengageNetworkRefresh @ 0x1408F451C (PopNetDisengageNetworkRefresh.c)
 *     PopNetGetNextDueRefreshTime @ 0x1408F45B4 (PopNetGetNextDueRefreshTime.c)
 *     PopNetIsNetworkRefreshEnabled @ 0x1408F46E4 (PopNetIsNetworkRefreshEnabled.c)
 *     PopReleasePolicyLock @ 0x140993044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140993084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetWnfLowPowerEpochCallback(__int64 a1)
{
  int v1; // ecx
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _DWORD *v6; // r9
  LARGE_INTEGER NextDueRefreshTime; // rax
  REGHANDLE v8; // rdi
  unsigned int v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+38h] [rbp-20h] BYREF
  _BYTE v12[8]; // [rsp+40h] [rbp-18h] BYREF

  v10 = 8;
  v2 = ExQueryWnfStateData(a1, &v11, v12, &v10);
  if ( v2 >= 0 )
  {
    if ( v10 >= 8 )
    {
      PopAcquirePolicyLock(v1);
      if ( (v12[0] & 2) != 0 )
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
          KeCancelTimer2((__int64)&PopNetRefreshTimer, 0LL, v5, v6);
          if ( PopDiagHandleRegistered )
          {
            v8 = PopDiagHandle;
            if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_NET_REFRESH_TIMER_DISARMED) )
              EtwWrite(v8, &POP_ETW_EVENT_NET_REFRESH_TIMER_DISARMED, 0LL, 0, 0LL);
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
