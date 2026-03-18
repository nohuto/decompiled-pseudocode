/*
 * XREFs of IopGetThreadActiveConsoleId @ 0x140936BD8
 * Callers:
 *     IoRaiseHardError @ 0x140557690 (IoRaiseHardError.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloActiveConsoleId @ 0x1405E004C (PsGetServerSiloActiveConsoleId.c)
 */

__int64 __fastcall IopGetThreadActiveConsoleId(__int64 a1)
{
  __int64 ThreadServerSilo; // rax

  ThreadServerSilo = PsGetThreadServerSilo(a1);
  return PsGetServerSiloActiveConsoleId(ThreadServerSilo);
}
