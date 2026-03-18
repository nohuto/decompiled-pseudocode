/*
 * XREFs of ExpFlushGeneralLookaside @ 0x140245FE0
 * Callers:
 *     ExDeleteNPagedLookasideList @ 0x140245F80 (ExDeleteNPagedLookasideList.c)
 *     ExDeletePagedLookasideList @ 0x140245FB0 (ExDeletePagedLookasideList.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x140429900 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExpFlushGeneralLookaside(__int64 a1)
{
  PSLIST_ENTRY v2; // rcx
  struct _SLIST_ENTRY *Next; // rbx

  v2 = RtlpInterlockedFlushSList((PSLIST_HEADER)a1);
  if ( v2 )
  {
    do
    {
      Next = v2->Next;
      (*(void (**)(void))(a1 + 56))();
      v2 = Next;
    }
    while ( Next );
  }
  return 0LL;
}
