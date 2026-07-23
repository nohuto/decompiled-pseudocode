/*
 * XREFs of ExpNextYearDpcRoutine @ 0x1405B2700
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     PsIsHostSilo @ 0x14035F7D0 (PsIsHostSilo.c)
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
