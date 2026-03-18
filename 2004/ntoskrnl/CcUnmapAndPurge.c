/*
 * XREFs of CcUnmapAndPurge @ 0x1402C67F0
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x1402C655C (CcDeleteSharedCacheMap.c)
 * Callees:
 *     CcUnmapVacbArray @ 0x1402BEA50 (CcUnmapVacbArray.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1402C5438 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1402C5484 (CcReferenceSharedCacheMapFileObject.c)
 *     CcPurgeCacheSection @ 0x14031F970 (CcPurgeCacheSection.c)
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
