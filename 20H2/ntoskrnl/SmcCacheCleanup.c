/*
 * XREFs of SmcCacheCleanup @ 0x14092FC18
 * Callers:
 *     SmcProcessCreateRequest @ 0x14092D010 (SmcProcessCreateRequest.c)
 *     SmcCacheDelete @ 0x14092FC9C (SmcCacheDelete.c)
 * Callees:
 *     StEtaCleanup @ 0x14025DA90 (StEtaCleanup.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     SmStoreDelete @ 0x14092CCB0 (SmStoreDelete.c)
 *     SmKmFileInfoCleanup @ 0x14092DAA8 (SmKmFileInfoCleanup.c)
 *     SmKmStoreFileDelete @ 0x14092EF6C (SmKmStoreFileDelete.c)
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
