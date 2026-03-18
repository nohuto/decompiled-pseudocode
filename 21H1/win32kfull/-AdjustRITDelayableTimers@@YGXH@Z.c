/*
 * XREFs of ?AdjustRITDelayableTimers@@YGXH@Z @ 0xAF38E
 * Callers:
 *     _SetTimerCoalescingTolerance@4 @ 0xAF316 (_SetTimerCoalescingTolerance@4.c)
 * Callees:
 *     _InternalSetTimer@24 @ 0x2CB62 (_InternalSetTimer@24.c)
 *     ?zzzAnimateCursor@@YGXPAUtagWND@@IIJ@Z @ 0x77D78 (-zzzAnimateCursor@@YGXPAUtagWND@@IIJ@Z.c)
 *     _SetRITTimer@16 @ 0xA4BF6 (_SetRITTimer@16.c)
 */

void __thiscall AdjustRITDelayableTimers(void *this)
{
  int v2; // eax

  if ( gnRITdemonTimerId )
  {
    if ( this )
      v2 = SetRITTimer((char *)gnRITdemonTimerId, 0x3E8u, (int)xxxHungAppDemon, 0);
    else
      v2 = InternalSetTimer(
             0,
             (char *)gnRITdemonTimerId,
             gdwRITdemonTimerPowerSaveElapse,
             (int)xxxHungAppDemon,
             gdwRITdemonTimerPowerSaveCoalescing,
             4);
    gnRITdemonTimerId = v2;
  }
  if ( this )
  {
    if ( gtmridAniCursor )
    {
      gdwLastAniTick = 0;
      zzzAnimateCursor(0, 0, 0, 0);
    }
  }
}
