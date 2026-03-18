/*
 * XREFs of PspDeleteExternalServerSiloState @ 0x140902018
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140901D40 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspInitializeServerSiloDeferred @ 0x1409022A0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x14025E5D0 (PsGetPermanentSiloContext.c)
 *     PsGetServerSiloGlobals @ 0x1402D70B4 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402E1A10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402E1A30 (PsAttachSiloToCurrentThread.c)
 *     EtwShutdown @ 0x140760200 (EtwShutdown.c)
 *     CmpStopSiloKeyLockTracker @ 0x14086DAB8 (CmpStopSiloKeyLockTracker.c)
 *     SeShutdownServerSilo @ 0x140917B00 (SeShutdownServerSilo.c)
 */

ULONG_PTR *__fastcall PspDeleteExternalServerSiloState(__int64 a1)
{
  struct _LIST_ENTRY *v2; // rcx
  _QWORD *ServerSiloGlobals; // rsi
  struct _LIST_ENTRY *v4; // rbx
  ULONG_PTR *result; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp+10h] BYREF

  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  if ( ServerSiloGlobals[108] )
  {
    v4 = PsAttachSiloToCurrentThread(v2);
    EtwShutdown(0);
    PsDetachSiloFromCurrentThread(v4);
  }
  SeShutdownServerSilo(a1, ServerSiloGlobals + 92);
  BugCheckParameter2 = 0LL;
  result = (ULONG_PTR *)PsGetPermanentSiloContext(a1, CmpSiloContextSlot, &BugCheckParameter2);
  if ( BugCheckParameter2 )
    return CmpStopSiloKeyLockTracker(BugCheckParameter2);
  return result;
}
