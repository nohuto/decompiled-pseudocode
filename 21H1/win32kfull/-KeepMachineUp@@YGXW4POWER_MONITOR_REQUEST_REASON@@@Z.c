/*
 * XREFs of ?KeepMachineUp@@YGXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0xAF0BC
 * Callers:
 *     _EditionKeepMachineUp@16 @ 0xAF03A (_EditionKeepMachineUp@16.c)
 * Callees:
 *     _SetTimerCoalescingTolerance@4 @ 0xAF316 (_SetTimerCoalescingTolerance@4.c)
 */

void __thiscall KeepMachineUp(void *this)
{
  _DWORD *v1; // edx
  _DWORD v3[2]; // [esp+8h] [ebp-8h] BYREF

  v1 = (_DWORD *)_gPowerTransitionsState[0];
  if ( !_gPowerTransitionsState[1] || _gProtocolType )
  {
    if ( _gPowerTransitionsState[3] && !_gProtocolType )
    {
      PoSetUserPresent(this);
      v1 = (_DWORD *)_gPowerTransitionsState[0];
      _gPowerTransitionsState[3] = 0;
    }
    if ( *v1 && _gPowerDisplayState[16] != 2 || v1[2] || _gfSwitchInProgress )
    {
      if ( gdwRITdemonLockState )
        SetTimerCoalescingTolerance(0);
    }
    else
    {
      v3[0] = 4;
      v3[1] = this;
      QueuePowerRequest(v3, 0);
    }
    if ( _gPowerTransitionsState[2] )
    {
      if ( !*_gpbIgnoreSleepInput )
        SetPendingInput(this);
    }
  }
  else
  {
    PoSetUserPresent(this);
  }
}
