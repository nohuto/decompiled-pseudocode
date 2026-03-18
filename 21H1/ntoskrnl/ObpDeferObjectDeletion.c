/*
 * XREFs of ObpDeferObjectDeletion @ 0x14030B7E0
 * Callers:
 *     ObFastReferenceObject @ 0x140206610 (ObFastReferenceObject.c)
 *     MiCompleteProtoPteFault @ 0x140213720 (MiCompleteProtoPteFault.c)
 *     ObFastReplaceObject @ 0x140233A3C (ObFastReplaceObject.c)
 *     ObDereferenceObjectDeferDelete @ 0x14024A1D0 (ObDereferenceObjectDeferDelete.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14024CFC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ExpSetTimerObject @ 0x14026A470 (ExpSetTimerObject.c)
 *     ObDereferenceObjectEx @ 0x140281800 (ObDereferenceObjectEx.c)
 *     MiReferenceControlAreaFile @ 0x140282C60 (MiReferenceControlAreaFile.c)
 *     MiEmptyPageAccessLog @ 0x1402A4D00 (MiEmptyPageAccessLog.c)
 *     IopDropIrp @ 0x1402C08C0 (IopDropIrp.c)
 *     NtCancelTimer @ 0x14033ECF0 (NtCancelTimer.c)
 *     ExTimerRundown @ 0x140356004 (ExTimerRundown.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     ObGetCurrentIrql @ 0x140236140 (ObGetCurrentIrql.c)
 *     KiInsertQueueDpc @ 0x14026DC70 (KiInsertQueueDpc.c)
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
