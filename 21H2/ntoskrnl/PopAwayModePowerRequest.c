/*
 * XREFs of PopAwayModePowerRequest @ 0x1408E1930
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireAwaymodeLock @ 0x140991530 (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x140991570 (PopReleaseAwaymodeLock.c)
 */

__int64 __fastcall PopAwayModePowerRequest(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAwaymodeLock();
  byte_140C23330 = a3 != 0;
  PopReleaseAwaymodeLock();
  return 0LL;
}
