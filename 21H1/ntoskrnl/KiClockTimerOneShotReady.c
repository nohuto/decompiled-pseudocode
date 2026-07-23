/*
 * XREFs of KiClockTimerOneShotReady @ 0x1402418BC
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x140241D70 (KePrepareClockTimerForIdle.c)
 * Callees:
 *     <none>
 */

char __fastcall KiClockTimerOneShotReady(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( KiClockTimerHighLatency )
  {
    if ( KiClockTimerOneShotStartTime )
    {
      if ( (unsigned __int64)(KiClockTimerOneShotEndTime - KiClockTimerOneShotStartTime) < 0x2710 )
        ++KiDynamicTickCancellations;
      KiClockTimerOneShotStartTime = 0LL;
    }
    if ( a1 - KiClockTimerOneShotEndTime < (unsigned __int64)KeMaximumIncrement )
    {
      if ( (unsigned int)KiDynamicTickCancellations > 3 )
        return 0;
    }
    else
    {
      KiDynamicTickCancellations = 0;
    }
  }
  return v1;
}
