/*
 * XREFs of CcFetchDataForRead @ 0x14022EED0
 * Callers:
 *     CcMapAndCopyFromCache @ 0x1405FCB10 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x14060B620 (CcMdlRead.c)
 * Callees:
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     MmWaitForCacheManagerPrefetch @ 0x140263448 (MmWaitForCacheManagerPrefetch.c)
 *     MmHardFaultBytesRequired @ 0x1405FCCD0 (MmHardFaultBytesRequired.c)
 *     MmPrefetchForCacheManager @ 0x140609D4C (MmPrefetchForCacheManager.c)
 */

char __fastcall CcFetchDataForRead(__int64 a1, _QWORD *a2, int a3, char a4, _DWORD *a5, _QWORD *P, int a7)
{
  unsigned __int64 v8; // rbx
  unsigned int v10; // ebp
  __int64 v11; // rdi
  unsigned int v12; // ecx
  __int64 v13; // rsi
  int v14; // r8d

  v8 = *a2 & 0xFFFFFFFFFFFFF000uLL;
  v10 = ((a3 + *a2 + 4095) & 0xFFFFF000) - v8;
  v11 = *P + (*(_DWORD *)a2 & 0x3F000);
  v12 = 0x40000 - (v11 & 0x3FFFF);
  if ( v12 >= v10 )
    v12 = ((a3 + *a2 + 4095) & 0xFFFFF000) - v8;
  v13 = v12;
  if ( !(unsigned int)MmHardFaultBytesRequired(a1, v8, v12) )
    goto LABEL_4;
  if ( a4 )
  {
    MmPrefetchForCacheManager(a1, v8, v14, v10, a7);
    *a5 = 1;
LABEL_4:
    MmCheckCachedPageStates(v11, v13, 0LL, 0LL);
    return 1;
  }
  return 0;
}
