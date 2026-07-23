/*
 * XREFs of ExpWriteTimeZoneBias @ 0x1405D1CC8
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x1407A9754 (ExpRefreshTimeZoneInformation.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1407D4CB0 (ExInitializeUtcTimeZoneBias.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 */

__int64 __fastcall ExpWriteTimeZoneBias(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD *v5; // rdx
  __int64 result; // rax

  if ( PsIsCurrentThreadInServerSilo((__int64)a1, a2) )
    v5 = (_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals(v4, v3) + 141) + 592LL);
  else
    v5 = (_DWORD *)0xFFFFF78000000020LL;
  v5[2] = a1[1];
  *v5 = *a1;
  result = (unsigned int)a1[1];
  v5[1] = result;
  return result;
}
