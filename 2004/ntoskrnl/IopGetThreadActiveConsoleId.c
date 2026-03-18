/*
 * XREFs of IopGetThreadActiveConsoleId @ 0x14089120C
 * Callers:
 *     IoRaiseHardError @ 0x140500820 (IoRaiseHardError.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x1402BE900 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloActiveConsoleId @ 0x14057BB30 (PsGetServerSiloActiveConsoleId.c)
 */

__int64 __fastcall IopGetThreadActiveConsoleId(__int64 a1)
{
  __int64 ThreadServerSilo; // rax

  ThreadServerSilo = PsGetThreadServerSilo(a1);
  return PsGetServerSiloActiveConsoleId(ThreadServerSilo);
}
