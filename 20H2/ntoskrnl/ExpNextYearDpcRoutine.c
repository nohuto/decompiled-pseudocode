/*
 * XREFs of ExpNextYearDpcRoutine @ 0x1405B0AD0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     PsIsHostSilo @ 0x14020DC00 (PsIsHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x140245E34 (PsGetServerSiloGlobals.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 */

void __fastcall ExpNextYearDpcRoutine(__int64 a1, void *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi

  v4 = *((_QWORD *)PsGetServerSiloGlobals((__int64)a2) + 133);
  if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 928)) == 1 )
  {
    if ( !PsIsHostSilo(v3) )
      ObfReferenceObjectWithTag(a2, 0x53707845u);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v4 + 896), DelayedWorkQueue);
  }
}
