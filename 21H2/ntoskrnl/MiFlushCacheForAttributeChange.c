/*
 * XREFs of MiFlushCacheForAttributeChange @ 0x14030E598
 * Callers:
 *     MiChangePageAttributeContiguous @ 0x14024DC38 (MiChangePageAttributeContiguous.c)
 *     MiChangePageAttributeBatch @ 0x14030E2F0 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 *     MiFlushCacheRange @ 0x140554754 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x140A55B0C (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiFlushHyperSpace @ 0x140251200 (MiFlushHyperSpace.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14030E640 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 */

_UNKNOWN **__fastcall MiFlushCacheForAttributeChange(__int64 a1, __int64 a2, int a3)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rbp
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = a2;
  if ( a2 )
  {
    v7 = -805306366;
    if ( a3 != 2 )
      v7 = -1073741824;
    do
    {
      v8 = MiMapPageInHyperSpaceWorker(a1, 0LL, v7);
      KeInvalidateRangeAllCachesNoIpi(v8, 4096LL);
      LOBYTE(v9) = 17;
      result = (_UNKNOWN **)MiUnmapPageInHyperSpaceWorker(v8, v9, 0x80000000LL);
      ++a1;
      --v5;
    }
    while ( v5 );
  }
  if ( a3 == 3 )
    return (_UNKNOWN **)MiFlushHyperSpace();
  return result;
}
