/*
 * XREFs of PopAwayModePowerRequest @ 0x1408E4010
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireAwaymodeLock @ 0x140993530 (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x140993570 (PopReleaseAwaymodeLock.c)
 */

__int64 __fastcall PopAwayModePowerRequest(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAwaymodeLock();
  byte_140C23D50 = a3 != 0;
  PopReleaseAwaymodeLock();
  return 0LL;
}
