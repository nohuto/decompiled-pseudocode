/*
 * XREFs of MiReleaseReadListResources @ 0x1406E8B14
 * Callers:
 *     MmWaitForCacheManagerPrefetch @ 0x1402FB588 (MmWaitForCacheManagerPrefetch.c)
 *     MmPrefetchPagesEx @ 0x14061C354 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x1406E898C (MmPrefetchForCacheManager.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EDDD0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1406EF910 (MiPfPrepareReadList.c)
 *     MiPrefetchControlArea @ 0x140715998 (MiPrefetchControlArea.c)
 * Callees:
 *     MiRemoveViewsFromSectionWithPfn @ 0x1402FC9DC (MiRemoveViewsFromSectionWithPfn.c)
 *     MiFreeReadListPages @ 0x1406E8BA4 (MiFreeReadListPages.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseReadListResources(__int64 a1)
{
  __int64 v1; // rbx
  void **v3; // rdi
  void ***v4; // rbx
  void **v5; // rax
  __int64 v6; // rsi

  v1 = *(_QWORD *)(a1 + 8);
  MiFreeReadListPages(a1);
  if ( (*(_DWORD *)(v1 + 56) & 0x20) == 0 )
  {
    v3 = (void **)(a1 + 24);
    while ( 1 )
    {
      v4 = (void ***)*v3;
      if ( *v3 == v3 )
        break;
      if ( v4[1] != v3 || (v5 = *v4, (*v4)[1] != v4) )
        __fastfail(3u);
      *v3 = v5;
      v6 = 0LL;
      for ( v5[1] = v3; (unsigned int)v6 < *((_DWORD *)v4 + 4); v6 = (unsigned int)(v6 + 1) )
        MiRemoveViewsFromSectionWithPfn((__int64 *)v4[v6 + 3]);
      ExFreePoolWithTag(v4, 0);
    }
  }
}
