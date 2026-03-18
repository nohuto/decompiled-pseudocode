/*
 * XREFs of ExFlushLookasideListEx @ 0x140246070
 * Callers:
 *     ExDeleteLookasideListEx @ 0x140246030 (ExDeleteLookasideListEx.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x140429900 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

void __stdcall ExFlushLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  PSLIST_ENTRY v2; // rcx
  struct _SLIST_ENTRY *Next; // rbx

  v2 = RtlpInterlockedFlushSList(&Lookaside->L.ListHead);
  if ( v2 )
  {
    do
    {
      Next = v2->Next;
      Lookaside->L.FreeEx(v2, Lookaside);
      v2 = Next;
    }
    while ( Next );
  }
}
