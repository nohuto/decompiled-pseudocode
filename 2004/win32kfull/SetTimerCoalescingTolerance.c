/*
 * XREFs of SetTimerCoalescingTolerance @ 0x1C0108CC0
 * Callers:
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 *     ?KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0108B60 (-KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     InitTimerCoalescing @ 0x1C0129E20 (InitTimerCoalescing.c)
 *     StartScreenSaver @ 0x1C02245F0 (StartScreenSaver.c)
 * Callees:
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C0108D64 (-AdjustRITDelayableTimers@@YAXH@Z.c)
 */

void __fastcall SetTimerCoalescingTolerance(int a1)
{
  int v1; // edx
  int v2; // ecx
  int v3; // ecx

  gTimerCoalCurrentState = a1;
  gCurrentTimerCoalescingTolerance = *((_DWORD *)&gTimerCoalescingSpec
                                     + a1
                                     + (unsigned __int64)(gServiceSessionId != gSessionId ? 4 : 0));
  if ( gSessionId != gServiceSessionId )
  {
    v1 = 0;
    if ( !a1 )
    {
      gdwRITdemonLockState = 0;
      v2 = 1;
LABEL_4:
      AdjustRITDelayableTimers(v2);
      return;
    }
    v3 = a1 - 2;
    if ( !v3 )
    {
      gdwRITdemonLockState |= 1u;
      if ( (gdwRITdemonLockState & 2) == 0 && giScreenSaveTimeOutMs > 0 && (gbLockConsoleActive || (*gpsi & 0x200) != 0) )
        v1 = 1;
      v2 = v1;
      goto LABEL_4;
    }
    if ( v3 == 1 )
    {
      gdwRITdemonLockState |= 2u;
      if ( (gdwRITdemonLockState & 1) != 0 )
      {
        v2 = 0;
        goto LABEL_4;
      }
    }
  }
}
