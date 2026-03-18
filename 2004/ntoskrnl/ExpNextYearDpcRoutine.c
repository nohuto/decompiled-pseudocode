/*
 * XREFs of ExpNextYearDpcRoutine @ 0x1405ACF70
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14026D714 (PsGetServerSiloGlobals.c)
 *     PsIsHostSilo @ 0x140291F70 (PsIsHostSilo.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 */

void __fastcall ExpNextYearDpcRoutine(__int64 a1, void *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi

  v4 = *((_QWORD *)PsGetServerSiloGlobals((__int64)a2) + 132);
  if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 928)) == 1 )
  {
    if ( !PsIsHostSilo(v3) )
      ObfReferenceObjectWithTag(a2, 0x53707845u);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v4 + 896), DelayedWorkQueue);
  }
}
