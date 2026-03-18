/*
 * XREFs of PspDeleteSilo @ 0x140903040
 * Callers:
 *     PspJobDelete @ 0x14027ABB0 (PspJobDelete.c)
 * Callees:
 *     PsIsServerSilo @ 0x14027B380 (PsIsServerSilo.c)
 *     PsGetServerSiloState @ 0x14034ADEC (PsGetServerSiloState.c)
 *     PspDeleteServerSiloGlobals @ 0x140902EEC (PspDeleteServerSiloGlobals.c)
 */

void __fastcall PspDeleteSilo(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( *(_DWORD *)(a1 + 216) )
    NT_ASSERT("Silo->ActiveProcesses == 0");
  if ( PsIsServerSilo(a1) && (unsigned int)PsGetServerSiloState(v2) != 4 )
    NT_ASSERT("PsGetServerSiloState(Silo) == SERVERSILO_TERMINATED");
  if ( PsIsServerSilo(v2) )
  {
    PspDeleteServerSiloGlobals(*(char **)(v3 + 1272));
    *(_QWORD *)(a1 + 1272) = 0LL;
  }
}
