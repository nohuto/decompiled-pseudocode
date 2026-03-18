/*
 * XREFs of ObpDeferObjectDeletion @ 0x1403494E0
 * Callers:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ExpSetTimerObject @ 0x140211420 (ExpSetTimerObject.c)
 *     ObDereferenceObjectEx @ 0x1402287B0 (ObDereferenceObjectEx.c)
 *     MiReferenceControlAreaFile @ 0x140229C10 (MiReferenceControlAreaFile.c)
 *     MiEmptyPageAccessLog @ 0x14024BCD0 (MiEmptyPageAccessLog.c)
 *     IopDropIrp @ 0x140267890 (IopDropIrp.c)
 *     ObDereferenceObjectDeferDelete @ 0x140286A70 (ObDereferenceObjectDeferDelete.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140289860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObFastReferenceObject @ 0x140299120 (ObFastReferenceObject.c)
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 *     ObFastReplaceObject @ 0x1402C686C (ObFastReplaceObject.c)
 *     ExTimerRundown @ 0x1402FA024 (ExTimerRundown.c)
 *     NtCancelTimer @ 0x1402FFD50 (NtCancelTimer.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140214C20 (KiInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     ObGetCurrentIrql @ 0x1402C8F70 (ObGetCurrentIrql.c)
 */

void __fastcall ObpDeferObjectDeletion(signed __int64 a1)
{
  signed __int64 v1; // rdx
  signed __int64 i; // rax

  _m_prefetchw(&ObpRemoveObjectList);
  v1 = ObpRemoveObjectList;
  *(_QWORD *)(a1 + 8) = ObpRemoveObjectList;
  for ( i = _InterlockedCompareExchange64(&ObpRemoveObjectList, a1, v1);
        i != v1;
        i = _InterlockedCompareExchange64(&ObpRemoveObjectList, a1, i) )
  {
    v1 = i;
    *(_QWORD *)(a1 + 8) = i;
  }
  if ( !v1 )
  {
    if ( ObGetCurrentIrql() > 2u )
      KiInsertQueueDpc((ULONG_PTR)&ObpRemoveObjectDpc, 0LL, 0LL, 0LL, 0);
    else
      ExQueueWorkItem(&ObpRemoveObjectWorkItem, CriticalWorkQueue);
  }
}
