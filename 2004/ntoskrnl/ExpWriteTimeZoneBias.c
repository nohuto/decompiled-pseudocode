/*
 * XREFs of ExpWriteTimeZoneBias @ 0x1405C9990
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140792C10 (ExpRefreshTimeZoneInformation.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1407C1F10 (ExInitializeUtcTimeZoneBias.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall ExpWriteTimeZoneBias(_DWORD *a1)
{
  _DWORD *v2; // rdx
  __int64 result; // rax

  if ( PsIsCurrentThreadInServerSilo() )
    v2 = (_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 140) + 592LL);
  else
    v2 = (_DWORD *)0xFFFFF78000000020LL;
  v2[2] = a1[1];
  *v2 = *a1;
  result = (unsigned int)a1[1];
  v2[1] = result;
  return result;
}
