/*
 * XREFs of KiGetClockIntervalOneShot @ 0x1402F2EBC
 * Callers:
 *     KiCheckForTimerExpiration @ 0x140219590 (KiCheckForTimerExpiration.c)
 *     KiRestoreClockTickRate @ 0x14027E5A0 (KiRestoreClockTickRate.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1402F3AD0 (KiSetClockIntervalToMinimumRequested.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetClockIntervalOneShot(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = KeMinimumIncrement;
  if ( a1 > a2 + (unsigned __int64)(unsigned int)KeMinimumIncrement )
    return (KeMinimumIncrement - (int)a2 + (int)a1 - 1) / (unsigned int)KeMinimumIncrement * KeMinimumIncrement;
  return v2;
}
