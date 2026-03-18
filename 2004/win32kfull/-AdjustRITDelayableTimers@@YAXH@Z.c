/*
 * XREFs of ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C0108D64
 * Callers:
 *     SetTimerCoalescingTolerance @ 0x1C0108CC0 (SetTimerCoalescingTolerance.c)
 * Callees:
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0089050 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     InternalSetTimer @ 0x1C0089420 (InternalSetTimer.c)
 *     SetRITTimer @ 0x1C010A3A0 (SetRITTimer.c)
 */

void __fastcall AdjustRITDelayableTimers(int a1)
{
  __int64 v2; // rax

  if ( gnRITdemonTimerId )
  {
    if ( a1 )
      v2 = SetRITTimer(gnRITdemonTimerId, 1000LL, xxxHungAppDemon, 0LL);
    else
      v2 = InternalSetTimer(
             0LL,
             gnRITdemonTimerId,
             gdwRITdemonTimerPowerSaveElapse,
             (__int64)xxxHungAppDemon,
             gdwRITdemonTimerPowerSaveCoalescing,
             4);
    gnRITdemonTimerId = v2;
  }
  if ( a1 )
  {
    if ( WPP_MAIN_CB.Dpc.DeferredRoutine )
    {
      gdwLastAniTick = 0;
      zzzAnimateCursor(0LL, 0LL, 0LL);
    }
  }
}
