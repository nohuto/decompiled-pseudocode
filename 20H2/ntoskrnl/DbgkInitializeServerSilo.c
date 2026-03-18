/*
 * XREFs of DbgkInitializeServerSilo @ 0x140886DE8
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140908CC0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x140204C10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140204C30 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x140245E34 (PsGetServerSiloGlobals.c)
 *     DbgkpInitializePhase1SiloState @ 0x1407C6270 (DbgkpInitializePhase1SiloState.c)
 */

__int64 __fastcall DbgkInitializeServerSilo(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *v2; // rdi
  _QWORD *ServerSiloGlobals; // rax
  int v4; // ebx

  v2 = PsAttachSiloToCurrentThread(a1);
  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
  ServerSiloGlobals[121] = 0LL;
  v4 = DbgkpInitializePhase1SiloState((__int64)(ServerSiloGlobals + 121));
  if ( v4 >= 0 )
    v4 = 0;
  PsDetachSiloFromCurrentThread(v2);
  return (unsigned int)v4;
}
