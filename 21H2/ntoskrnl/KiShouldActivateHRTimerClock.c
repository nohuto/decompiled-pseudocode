/*
 * XREFs of KiShouldActivateHRTimerClock @ 0x1402F039C
 * Callers:
 *     KeSetTimer2 @ 0x1402D0DD0 (KeSetTimer2.c)
 *     KiTimer2Expiration @ 0x1402ED030 (KiTimer2Expiration.c)
 *     KiAdjustTimer2DueTimes @ 0x14039E540 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     <none>
 */

char __fastcall KiShouldActivateHRTimerClock(__int64 a1, unsigned __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( a2 < a1 + (unsigned __int64)KeMaximumIncrement
    && (!KiClockOwnerOneShotRequest
     || a2 < KiClockOwnerOneShotRequest && KiClockOwnerOneShotRequest - a2 > (unsigned int)KeMinimumIncrement) )
  {
    return 1;
  }
  return v2;
}
