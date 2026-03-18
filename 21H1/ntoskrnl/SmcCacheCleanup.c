/*
 * XREFs of SmcCacheCleanup @ 0x140928B40
 * Callers:
 *     SmcProcessCreateRequest @ 0x140925F38 (SmcProcessCreateRequest.c)
 *     SmcCacheDelete @ 0x140928BC4 (SmcCacheDelete.c)
 * Callees:
 *     StEtaCleanup @ 0x1402D22A4 (StEtaCleanup.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     SmStoreDelete @ 0x140925BD8 (SmStoreDelete.c)
 *     SmKmFileInfoCleanup @ 0x1409269D0 (SmKmFileInfoCleanup.c)
 *     SmKmStoreFileDelete @ 0x140927E94 (SmKmStoreFileDelete.c)
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
