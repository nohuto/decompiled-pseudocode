/*
 * XREFs of ExpWriteTimeZoneBias @ 0x1405CF98C
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x14079F494 (ExpRefreshTimeZoneInformation.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1407D0710 (ExInitializeUtcTimeZoneBias.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall ExpWriteTimeZoneBias(_DWORD *a1)
{
  _DWORD *v2; // rdx
  __int64 result; // rax

  if ( PsIsCurrentThreadInServerSilo() )
    v2 = (_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 141) + 592LL);
  else
    v2 = (_DWORD *)0xFFFFF78000000020LL;
  v2[2] = a1[1];
  *v2 = *a1;
  result = (unsigned int)a1[1];
  v2[1] = result;
  return result;
}
