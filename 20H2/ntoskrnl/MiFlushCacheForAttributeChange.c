/*
 * XREFs of MiFlushCacheForAttributeChange @ 0x14034986C
 * Callers:
 *     MiChangePageAttribute @ 0x14023DCD0 (MiChangePageAttribute.c)
 *     MiChangePageAttributeContiguous @ 0x14032DB94 (MiChangePageAttributeContiguous.c)
 *     MiChangePageAttributeBatch @ 0x1403495C4 (MiChangePageAttributeBatch.c)
 *     MiFlushCacheRange @ 0x140552A44 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x140A53504 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiFlushHyperSpace @ 0x140330C14 (MiFlushHyperSpace.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140349910 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 */

void __fastcall MiFlushCacheForAttributeChange(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  unsigned int v6; // esi
  unsigned __int64 v7; // rbx

  v4 = a2;
  if ( a2 )
  {
    v6 = -805306366;
    if ( a3 != 2 )
      v6 = -1073741824;
    do
    {
      v7 = MiMapPageInHyperSpaceWorker(a1, 0LL, v6);
      KeInvalidateRangeAllCachesNoIpi(v7, 4096LL);
      MiUnmapPageInHyperSpaceWorker(v7, 0x11u, 0x80000000);
      ++a1;
      --v4;
    }
    while ( v4 );
  }
  if ( a3 == 3 )
    MiFlushHyperSpace();
}
