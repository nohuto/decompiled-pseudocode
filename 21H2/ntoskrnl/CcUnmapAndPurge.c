/*
 * XREFs of CcUnmapAndPurge @ 0x140276BF8
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x140275338 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140230680 (ObFastDereferenceObjectDeferDelete.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14027A1B4 (CcReferenceSharedCacheMapFileObject.c)
 *     CcPurgeCacheSection @ 0x14027F0E0 (CcPurgeCacheSection.c)
 *     CcUnmapVacbArray @ 0x1402853B0 (CcUnmapVacbArray.c)
 */

void __fastcall CcUnmapAndPurge(__int64 a1, char a2)
{
  __int64 v4; // rax
  int v5; // r9d
  unsigned __int64 v6; // rsi

  v4 = CcReferenceSharedCacheMapFileObject();
  LOBYTE(v5) = a2;
  v6 = v4;
  CcUnmapVacbArray(a1, 0, 0, v5, 1, 0);
  if ( (*(_DWORD *)(a1 + 152) & 0x10) != 0 )
    CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v6 + 40), 0LL, 0, 2u);
  ObFastDereferenceObjectDeferDelete((signed __int64 *)(a1 + 96), v6, 0x63536343u);
}
