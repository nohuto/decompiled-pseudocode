/*
 * XREFs of ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C0109D84
 * Callers:
 *     SetTimerCoalescingTolerance @ 0x1C0109CE0 (SetTimerCoalescingTolerance.c)
 * Callees:
 *     SetRITTimer @ 0x1C00C9BD0 (SetRITTimer.c)
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00CC630 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     InternalSetTimer @ 0x1C00CCA00 (InternalSetTimer.c)
 */

void __fastcall AdjustRITDelayableTimers(int a1)
{
  __int64 v2; // rax

  if ( gnRITdemonTimerId )
  {
    if ( a1 )
      v2 = SetRITTimer(gnRITdemonTimerId, 1000, (int)xxxHungAppDemon, 0);
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
    if ( WPP_MAIN_CB.Dpc.DeferredContext )
    {
      gdwLastAniTick = 0;
      zzzAnimateCursor(0LL, 0LL, 0LL);
    }
  }
}
