/*
 * XREFs of KsepSdbUnmapFromMemory @ 0x14074F668
 * Callers:
 *     KseShimDatabaseClose @ 0x140751FB8 (KseShimDatabaseClose.c)
 *     KseShimDatabaseOpen @ 0x14075422C (KseShimDatabaseOpen.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     MmUnmapViewInSystemSpace @ 0x140658CE0 (MmUnmapViewInSystemSpace.c)
 *     SdbReleaseDatabase @ 0x14074F208 (SdbReleaseDatabase.c)
 */

void __fastcall KsepSdbUnmapFromMemory(__int64 *a1)
{
  __int64 v2; // rcx
  void *v3; // rcx
  struct _DMA_ADAPTER *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v2 = *a1;
  if ( v2 )
  {
    SdbReleaseDatabase(v2);
    *a1 = 0LL;
  }
  v3 = (void *)a1[1];
  if ( v3 )
  {
    MmUnmapViewInSystemSpace(v3);
    a1[1] = 0LL;
  }
  v4 = (struct _DMA_ADAPTER *)a1[4];
  if ( v4 )
  {
    HalPutDmaAdapter(v4);
    a1[4] = 0LL;
  }
  v5 = (void *)a1[3];
  if ( v5 )
  {
    ZwClose(v5);
    a1[3] = 0LL;
  }
  v6 = (void *)a1[2];
  if ( v6 )
  {
    ZwClose(v6);
    a1[2] = 0LL;
  }
}
