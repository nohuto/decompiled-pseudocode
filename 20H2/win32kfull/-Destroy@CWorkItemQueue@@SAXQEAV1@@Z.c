/*
 * XREFs of ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C0124964
 * Callers:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C00E9D24 (-UmfdCallSessionInitialize@@YAJXZ.c)
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C0124924 (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 * Callees:
 *     ?Destroy@CManualResetEvent@@SAXQEAV1@@Z @ 0x1C0124A48 (-Destroy@CManualResetEvent@@SAXQEAV1@@Z.c)
 */

void __fastcall CWorkItemQueue::Destroy(union _SLIST_HEADER *pv)
{
  PSLIST_ENTRY v2; // rbx
  void *Region; // rcx
  PSLIST_ENTRY v4; // rcx

  v2 = ExpInterlockedFlushSList(pv + 1);
  while ( v2 )
  {
    v4 = v2;
    v2 = v2->Next;
    EngFreeMem(v4);
  }
  Region = (void *)pv->Region;
  if ( Region )
    CManualResetEvent::Destroy(Region);
  EngFreeMem(pv);
}
