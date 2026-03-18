/*
 * XREFs of PspDeleteExternalServerSiloState @ 0x140908A88
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409087B0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspInitializeServerSiloDeferred @ 0x140908CC0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x140204C10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140204C30 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x140245E34 (PsGetServerSiloGlobals.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1405CF794 (ExpTimeZoneCleanupSiloState.c)
 *     EtwShutdown @ 0x1407700F0 (EtwShutdown.c)
 *     CmCleanupServerSiloState @ 0x140875B28 (CmCleanupServerSiloState.c)
 *     SeShutdownServerSilo @ 0x14091E9E4 (SeShutdownServerSilo.c)
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
