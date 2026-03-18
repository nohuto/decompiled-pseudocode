/*
 * XREFs of PopInitializeAdpm @ 0x140A6EF78
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140213470 (ExInitializeResourceLite.c)
 *     PopExtendConnectionState @ 0x1407BF9B4 (PopExtendConnectionState.c)
 */

PVOID PopInitializeAdpm()
{
  ExInitializeResourceLite(&PopAdpmLock);
  PopMaximumConnectionSessions = 0;
  PopConnectionState = 0LL;
  PopConsoleContext = 0LL;
  LODWORD(PopConsoleContext) = -1;
  qword_140C20360 = 3LL;
  xmmword_140C20350 = 0LL;
  return PopExtendConnectionState(0);
}
