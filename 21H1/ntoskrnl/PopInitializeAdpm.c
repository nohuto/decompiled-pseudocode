/*
 * XREFs of PopInitializeAdpm @ 0x140A6E654
 * Callers:
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14026C4C0 (ExInitializeResourceLite.c)
 *     PopExtendConnectionState @ 0x1407BC844 (PopExtendConnectionState.c)
 */

PVOID PopInitializeAdpm()
{
  ExInitializeResourceLite(&PopAdpmLock);
  PopMaximumConnectionSessions = 0;
  PopConnectionState = 0LL;
  PopConsoleContext = 0LL;
  LODWORD(PopConsoleContext) = -1;
  qword_140C20600 = 3LL;
  xmmword_140C205F0 = 0LL;
  return PopExtendConnectionState(0);
}
