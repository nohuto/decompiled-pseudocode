/*
 * XREFs of ExpNlsInitSiloState @ 0x1409FB4F4
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409AC180 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExInitializeNls @ 0x14085A828 (ExInitializeNls.c)
 */

__int64 __fastcall ExpNlsInitSiloState(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *v1; // rdi
  NTSTATUS v2; // ebx

  v1 = PsAttachSiloToCurrentThread(a1);
  v2 = ExInitializeNls();
  if ( v2 >= 0 )
    *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 132) + 8LL) = 1LL;
  PsDetachSiloFromCurrentThread(v1);
  return (unsigned int)v2;
}
