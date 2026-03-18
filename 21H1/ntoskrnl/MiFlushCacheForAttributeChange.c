/*
 * XREFs of MiFlushCacheForAttributeChange @ 0x140353348
 * Callers:
 *     MiChangePageAttributeContiguous @ 0x14031F698 (MiChangePageAttributeContiguous.c)
 *     MiChangePageAttribute @ 0x140350E98 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x1403530A0 (MiChangePageAttributeBatch.c)
 *     MiFlushCacheRange @ 0x14054EA24 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x140A4D184 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiFlushHyperSpace @ 0x140322470 (MiFlushHyperSpace.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1403533F0 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 */

void __fastcall MiFlushCacheForAttributeChange(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rbp
  unsigned int v7; // esi
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx

  v5 = a2;
  if ( a2 )
  {
    v7 = -805306366;
    if ( a3 != 2 )
      v7 = -1073741824;
    do
    {
      v8 = MiMapPageInHyperSpaceWorker(a1, 0LL, v7, a4);
      KeInvalidateRangeAllCachesNoIpi(v8, 4096LL);
      LOBYTE(v9) = 17;
      MiUnmapPageInHyperSpaceWorker(v8, v9, 0x80000000);
      ++a1;
      --v5;
    }
    while ( v5 );
  }
  if ( a3 == 3 )
    MiFlushHyperSpace();
}
