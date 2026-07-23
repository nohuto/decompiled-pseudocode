/*
 * XREFs of IopGetThreadActiveConsoleId @ 0x14089442C
 * Callers:
 *     IoRaiseHardError @ 0x140505BF0 (IoRaiseHardError.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x1402AAE70 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloActiveConsoleId @ 0x1405811B0 (PsGetServerSiloActiveConsoleId.c)
 */

__int64 __fastcall IopGetThreadActiveConsoleId(__int64 a1)
{
  __int64 ThreadServerSilo; // rax

  ThreadServerSilo = PsGetThreadServerSilo(a1);
  return PsGetServerSiloActiveConsoleId(ThreadServerSilo);
}
