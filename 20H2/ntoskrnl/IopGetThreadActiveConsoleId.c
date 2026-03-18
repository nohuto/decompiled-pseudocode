/*
 * XREFs of IopGetThreadActiveConsoleId @ 0x140896CFC
 * Callers:
 *     IoRaiseHardError @ 0x1405040F0 (IoRaiseHardError.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140297450 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloActiveConsoleId @ 0x14057F560 (PsGetServerSiloActiveConsoleId.c)
 */

__int64 __fastcall IopGetThreadActiveConsoleId(__int64 a1)
{
  __int64 ThreadServerSilo; // rax

  ThreadServerSilo = PsGetThreadServerSilo(a1);
  return PsGetServerSiloActiveConsoleId(ThreadServerSilo);
}
