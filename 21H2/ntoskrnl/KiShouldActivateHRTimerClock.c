/*
 * XREFs of KiShouldActivateHRTimerClock @ 0x1402F3248
 * Callers:
 *     KiTimer2Expiration @ 0x1402F27B0 (KiTimer2Expiration.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x1403AD92C (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     <none>
 */

char __fastcall KiShouldActivateHRTimerClock(__int64 a1, unsigned __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( a2 < a1 + (unsigned __int64)(unsigned int)KeMaximumIncrement
    && (!KiClockOwnerOneShotRequest
     || a2 < KiClockOwnerOneShotRequest && KiClockOwnerOneShotRequest - a2 > (unsigned int)KeMinimumIncrement) )
  {
    return 1;
  }
  return v2;
}
