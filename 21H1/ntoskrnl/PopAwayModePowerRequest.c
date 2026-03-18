/*
 * XREFs of PopAwayModePowerRequest @ 0x1408DCE60
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireAwaymodeLock @ 0x14098CD28 (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x14098CD68 (PopReleaseAwaymodeLock.c)
 */

__int64 __fastcall PopAwayModePowerRequest(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAwaymodeLock();
  byte_140C23ED0 = a3 != 0;
  PopReleaseAwaymodeLock();
  return 0LL;
}
