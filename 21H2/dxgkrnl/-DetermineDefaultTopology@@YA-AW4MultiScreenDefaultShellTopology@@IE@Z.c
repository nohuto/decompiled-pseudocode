/*
 * XREFs of ?DetermineDefaultTopology@@YA?AW4MultiScreenDefaultShellTopology@@IE@Z @ 0x1C02F02C0
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F0FB0 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z @ 0x1C004D540 (-GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z.c)
 */

__int64 __fastcall DetermineDefaultTopology(int a1, char a2)
{
  int MultiScreenDefaultShellTopology; // eax
  __int64 v5; // rbx
  __int64 result; // rax
  unsigned __int16 v7; // [rsp+70h] [rbp+18h] BYREF

  v7 = 0;
  MultiScreenDefaultShellTopology = GetMultiScreenDefaultShellTopology((enum MultiScreenDefaultShellTopology *)&v7);
  if ( MultiScreenDefaultShellTopology >= 0 )
  {
    result = v7;
  }
  else
  {
    v5 = MultiScreenDefaultShellTopology;
    WdLogSingleEntry1(1LL, MultiScreenDefaultShellTopology);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Failed (Status = 0x%I64x) GetMultiScreenDefaultShellTopology, defaulting to legacy behavior",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
    result = 0LL;
  }
  if ( !(_WORD)result )
  {
    if ( !a1 )
      return 4LL;
    result = 3LL;
    if ( a2 )
      return 4LL;
  }
  return result;
}
