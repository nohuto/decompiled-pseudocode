/*
 * XREFs of ??_GContentEntry@CDrawListCacheSet@@QEAAPEAXI@Z @ 0x1800D86E4
 * Callers:
 *     ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x18005750C (-reserve_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CD.c)
 *     ??$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSet@@0@Z @ 0x1800D86AC (--$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSe.c)
 * Callees:
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800574D0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 */

CDrawListCacheSet::ContentEntry *__fastcall CDrawListCacheSet::ContentEntry::`scalar deleting destructor'(
        CDrawListCacheSet::ContentEntry *this)
{
  CDrawListEntry *v2; // rcx

  v2 = (CDrawListEntry *)*((_QWORD *)this + 2);
  if ( v2 )
    CDrawListEntry::Release(v2);
  return this;
}
