/*
 * XREFs of ExpTimeZoneCleanupSiloState @ 0x1405C9798
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x140902E78 (PspDeleteExternalServerSiloState.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14026D714 (PsGetServerSiloGlobals.c)
 *     KeCancelTimer @ 0x1402C9300 (KeCancelTimer.c)
 *     KeFlushQueuedDpcs @ 0x1402E16C0 (KeFlushQueuedDpcs.c)
 */

__int64 __fastcall ExpTimeZoneCleanupSiloState(__int64 a1)
{
  bool v1; // di
  _QWORD *ServerSiloGlobals; // rax
  __int64 v3; // rbx

  v1 = 0;
  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  if ( *((_BYTE *)ServerSiloGlobals + 1049) )
  {
    v3 = ServerSiloGlobals[132];
    if ( *(_QWORD *)(v3 + 560) )
      v1 = KeCancelTimer((PKTIMER)(v3 + 512)) == 0;
    if ( *(_QWORD *)(v3 + 720) && !KeCancelTimer((PKTIMER)(v3 + 672)) )
      v1 = 1;
    if ( *(_QWORD *)(v3 + 880) && !KeCancelTimer((PKTIMER)(v3 + 832)) )
      v1 = 1;
    if ( v1 )
      KeFlushQueuedDpcs();
  }
  return 0LL;
}
