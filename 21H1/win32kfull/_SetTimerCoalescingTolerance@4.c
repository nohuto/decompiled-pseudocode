/*
 * XREFs of _SetTimerCoalescingTolerance@4 @ 0xAF316
 * Callers:
 *     ?KeepMachineUp@@YGXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0xAF0BC (-KeepMachineUp@@YGXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     _InitTimerCoalescing@0 @ 0xEBBA8 (_InitTimerCoalescing@0.c)
 *     _StartScreenSaver@4 @ 0x1857D7 (_StartScreenSaver@4.c)
 * Callees:
 *     ?AdjustRITDelayableTimers@@YGXH@Z @ 0xAF38E (-AdjustRITDelayableTimers@@YGXH@Z.c)
 */

void __stdcall SetTimerCoalescingTolerance(int a1)
{
  int v1; // [esp+0h] [ebp-4h]

  gTimerCoalCurrentState = a1;
  gCurrentTimerCoalescingTolerance = (unsigned int)*(&gTimerCoalescingSpec
                                                   + a1
                                                   + (_gServiceSessionId != _gSessionId ? 4 : 0));
  if ( _gSessionId != _gServiceSessionId )
  {
    switch ( a1 )
    {
      case 0:
        gdwRITdemonLockState = 0;
LABEL_4:
        AdjustRITDelayableTimers(v1);
        return;
      case 2:
        gdwRITdemonLockState |= 1u;
        goto LABEL_4;
      case 3:
        gdwRITdemonLockState |= 2u;
        if ( (gdwRITdemonLockState & 1) != 0 )
          goto LABEL_4;
        break;
    }
  }
}
