/*
 * XREFs of IopGetThreadActiveConsoleId @ 0x14088FEEC
 * Callers:
 *     IoRaiseHardError @ 0x1405001D0 (IoRaiseHardError.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x14022BC80 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloActiveConsoleId @ 0x14057B4F0 (PsGetServerSiloActiveConsoleId.c)
 */

__int64 __fastcall IopGetThreadActiveConsoleId(__int64 a1)
{
  __int64 ThreadServerSilo; // rax

  ThreadServerSilo = PsGetThreadServerSilo(a1);
  return PsGetServerSiloActiveConsoleId(ThreadServerSilo);
}
