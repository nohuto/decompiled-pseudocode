/*
 * XREFs of KiGetClockIntervalOneShot @ 0x14021179C
 * Callers:
 *     KiSetClockIntervalToMinimumRequested @ 0x140211054 (KiSetClockIntervalToMinimumRequested.c)
 *     KiRestoreClockTickRate @ 0x140211728 (KiRestoreClockTickRate.c)
 *     KiCheckForTimerExpiration @ 0x1402C90F0 (KiCheckForTimerExpiration.c)
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
