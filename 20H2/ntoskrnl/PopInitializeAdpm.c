/*
 * XREFs of PopInitializeAdpm @ 0x140A75668
 * Callers:
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14027F200 (ExInitializeResourceLite.c)
 *     PopExtendConnectionState @ 0x1407CE244 (PopExtendConnectionState.c)
 */

PVOID PopInitializeAdpm()
{
  ExInitializeResourceLite(&PopAdpmLock);
  PopMaximumConnectionSessions = 0;
  PopConnectionState = 0LL;
  PopConsoleContext = 0LL;
  LODWORD(PopConsoleContext) = -1;
  qword_140C204C0 = 3LL;
  xmmword_140C204B0 = 0LL;
  return PopExtendConnectionState(0);
}
