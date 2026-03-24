/*
 * XREFs of IopGetThreadActiveConsoleId @ 0x1408942CC
 * Callers:
 *     IoRaiseHardError @ 0x140505C70 (IoRaiseHardError.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140206540 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloActiveConsoleId @ 0x140580F70 (PsGetServerSiloActiveConsoleId.c)
 */

__int64 __fastcall IopGetThreadActiveConsoleId(__int64 a1)
{
  __int64 ThreadServerSilo; // rax

  ThreadServerSilo = PsGetThreadServerSilo(a1);
  return PsGetServerSiloActiveConsoleId(ThreadServerSilo);
}
