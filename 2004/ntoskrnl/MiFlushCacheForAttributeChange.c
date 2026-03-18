/*
 * XREFs of MiFlushCacheForAttributeChange @ 0x1402F7368
 * Callers:
 *     MiChangePageAttribute @ 0x1402F4EBC (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x1402F70C0 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttributeContiguous @ 0x14035D13C (MiChangePageAttributeContiguous.c)
 *     MiFlushCacheRange @ 0x14054F074 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x140A52E84 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1402F7410 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     MiFlushHyperSpace @ 0x14035FD80 (MiFlushHyperSpace.c)
 */

_UNKNOWN **__fastcall MiFlushCacheForAttributeChange(__int64 a1, __int64 a2, int a3)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rbp
  unsigned int v7; // esi
  unsigned __int64 v8; // rbx
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
      result = (_UNKNOWN **)MiUnmapPageInHyperSpaceWorker(v8, 0x11u, 0x80000000);
      ++a1;
      --v5;
    }
    while ( v5 );
  }
  if ( a3 == 3 )
    return (_UNKNOWN **)MiFlushHyperSpace();
  return result;
}
