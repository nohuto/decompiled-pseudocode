/*
 * XREFs of PopAwayModePowerRequest @ 0x1408E17D0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireAwaymodeLock @ 0x140990530 (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x140990570 (PopReleaseAwaymodeLock.c)
 */

__int64 __fastcall PopAwayModePowerRequest(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAwaymodeLock();
  byte_140C23E90 = a3 != 0;
  PopReleaseAwaymodeLock();
  return 0LL;
}
