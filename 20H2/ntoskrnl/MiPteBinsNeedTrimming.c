/*
 * XREFs of MiPteBinsNeedTrimming @ 0x14023E9F0
 * Callers:
 *     MiAdjustPteBins @ 0x14023E040 (MiAdjustPteBins.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x14023EA6C (MiGetNumberOfCachedPtes.c)
 *     MiIsPteCachingOptimizationEnabled @ 0x1403F4274 (MiIsPteCachingOptimizationEnabled.c)
 */

_BOOL8 __fastcall MiPteBinsNeedTrimming(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned __int64 NumberOfCachedPtes; // r9
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  bool v8; // cc

  NumberOfCachedPtes = (unsigned int)MiGetNumberOfCachedPtes();
  if ( NumberOfCachedPtes < 0x400 )
    return 0LL;
  v6 = NumberOfCachedPtes + a1[11];
  v7 = *a1 - a1[9];
  if ( (unsigned int)MiIsPteCachingOptimizationEnabled(v3, v2, v4) )
  {
    if ( v6 <= 0x40000 )
      return 0LL;
    v8 = v6 <= v7 >> 2;
  }
  else
  {
    v8 = v6 <= v7 / 0xA;
  }
  return !v8;
}
