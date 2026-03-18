/*
 * XREFs of SmcCacheCleanup @ 0x140929DF0
 * Callers:
 *     SmcProcessCreateRequest @ 0x1409271E8 (SmcProcessCreateRequest.c)
 *     SmcCacheDelete @ 0x140929E74 (SmcCacheDelete.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     StEtaCleanup @ 0x1403027E4 (StEtaCleanup.c)
 *     SmStoreDelete @ 0x140926E88 (SmStoreDelete.c)
 *     SmKmFileInfoCleanup @ 0x140927C80 (SmKmFileInfoCleanup.c)
 *     SmKmStoreFileDelete @ 0x140929144 (SmKmStoreFileDelete.c)
 */

void __fastcall SmcCacheCleanup(__int64 a1)
{
  PPRIVILEGE_SET *v2; // rbx
  __int64 v3; // rsi
  int v4; // edx

  v2 = (PPRIVILEGE_SET *)(a1 + 176);
  v3 = 16LL;
  do
  {
    v4 = *((_DWORD *)v2 - 2);
    if ( v4 != -1 )
    {
      SmStoreDelete(*((_DWORD *)v2 - 1) & 3, v4);
      CmSiFreeMemory(*v2);
    }
    v2 += 3;
    --v3;
  }
  while ( v3 );
  if ( *(_QWORD *)(a1 + 40) && *(_QWORD *)(a1 + 48) )
    SmKmStoreFileDelete(a1 + 40);
  SmKmFileInfoCleanup(a1 + 40);
  StEtaCleanup(a1 + 104);
}
