/*
 * XREFs of ObpDeferObjectDeletion @ 0x14031A0E0
 * Callers:
 *     ObFastReferenceObject @ 0x140210F10 (ObFastReferenceObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140217F10 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObDereferenceObjectDeferDelete @ 0x140219220 (ObDereferenceObjectDeferDelete.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     MiEmptyPageAccessLog @ 0x1402331B0 (MiEmptyPageAccessLog.c)
 *     ObFastReplaceObject @ 0x140248084 (ObFastReplaceObject.c)
 *     MiCompleteProtoPteFault @ 0x140275570 (MiCompleteProtoPteFault.c)
 *     NtCancelTimer @ 0x140288EC0 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x1402897E0 (ExpSetTimerObject.c)
 *     ObDereferenceObjectEx @ 0x14029F628 (ObDereferenceObjectEx.c)
 *     MiReferenceControlAreaFile @ 0x1402A0600 (MiReferenceControlAreaFile.c)
 *     ExTimerRundown @ 0x1402D5F9C (ExTimerRundown.c)
 *     IopDropIrp @ 0x14038D720 (IopDropIrp.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x1402473F0 (ObGetCurrentIrql.c)
 *     KiInsertQueueDpc @ 0x14027F690 (KiInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
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
