/*
 * XREFs of CcUnmapAndPurge @ 0x1402339C0
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14023372C (CcDeleteSharedCacheMap.c)
 * Callees:
 *     CcUnmapVacbArray @ 0x14022BDD0 (CcUnmapVacbArray.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x140232608 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x140232654 (CcReferenceSharedCacheMapFileObject.c)
 *     CcPurgeCacheSection @ 0x1402CF540 (CcPurgeCacheSection.c)
 */

void __fastcall CcUnmapAndPurge(__int64 a1, char a2)
{
  ULONG_PTR v4; // rsi

  v4 = CcReferenceSharedCacheMapFileObject(a1);
  CcUnmapVacbArray(a1, 0LL, 0, a2, 1, 0);
  if ( (*(_DWORD *)(a1 + 152) & 0x10) != 0 )
    CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v4 + 40), 0LL, 0, 2u);
  CcDereferenceSharedCacheMapFileObject(a1, v4);
}
