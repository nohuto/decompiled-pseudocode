/*
 * XREFs of PspDeleteExternalServerSiloState @ 0x140902E78
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140902BA0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspInitializeServerSiloDeferred @ 0x1409030A0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14026D714 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x140272080 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402720A0 (PsAttachSiloToCurrentThread.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1405C9798 (ExpTimeZoneCleanupSiloState.c)
 *     EtwShutdown @ 0x140761AE0 (EtwShutdown.c)
 *     CmCleanupServerSiloState @ 0x14086FFD8 (CmCleanupServerSiloState.c)
 *     SeShutdownServerSilo @ 0x140918DB4 (SeShutdownServerSilo.c)
 */

__int64 __fastcall PspDeleteExternalServerSiloState(__int64 a1)
{
  struct _LIST_ENTRY *v2; // rcx
  _QWORD *ServerSiloGlobals; // rsi
  struct _LIST_ENTRY *v4; // rbx

  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  if ( ServerSiloGlobals[108] )
  {
    v4 = PsAttachSiloToCurrentThread(v2);
    EtwShutdown(0);
    PsDetachSiloFromCurrentThread(v4);
  }
  SeShutdownServerSilo(a1, ServerSiloGlobals + 92);
  CmCleanupServerSiloState(a1);
  return ExpTimeZoneCleanupSiloState(a1);
}
