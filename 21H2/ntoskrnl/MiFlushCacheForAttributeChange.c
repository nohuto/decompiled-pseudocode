/*
 * XREFs of MiFlushCacheForAttributeChange @ 0x140303848
 * Callers:
 *     MiChangePageAttributeContiguous @ 0x1402CF8B8 (MiChangePageAttributeContiguous.c)
 *     MiChangePageAttributeBatch @ 0x1403035A0 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttribute @ 0x1403041E4 (MiChangePageAttribute.c)
 *     MiFlushCacheRange @ 0x140554514 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x140A54B0C (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiFlushHyperSpace @ 0x1402D2C80 (MiFlushHyperSpace.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1403038F0 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140331AB0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140348910 (MiUnmapPageInHyperSpaceWorker.c)
 */

_UNKNOWN **__fastcall MiFlushCacheForAttributeChange(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  __int64 v6; // rbp
  unsigned int v8; // esi
  __int64 v9; // rbx
  __int64 v10; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v6 = a2;
  if ( a2 )
  {
    v8 = -805306366;
    if ( a3 != 2 )
      v8 = -1073741824;
    do
    {
      v9 = MiMapPageInHyperSpaceWorker(a1, 0LL, v8, a4);
      KeInvalidateRangeAllCachesNoIpi(v9, 4096LL);
      LOBYTE(v10) = 17;
      result = (_UNKNOWN **)MiUnmapPageInHyperSpaceWorker(v9, v10, 0x80000000LL);
      ++a1;
      --v6;
    }
    while ( v6 );
  }
  if ( a3 == 3 )
    return (_UNKNOWN **)MiFlushHyperSpace();
  return result;
}
