/*
 * XREFs of MiLockWorkingSetOptimal @ 0x14031A9E4
 * Callers:
 *     MiDirtySystemCachePte @ 0x14023ADA8 (MiDirtySystemCachePte.c)
 *     MiMakeSystemCachePteValid @ 0x1402A384C (MiMakeSystemCachePteValid.c)
 *     MiMarkPteDirty @ 0x14030529C (MiMarkPteDirty.c)
 *     MmSetAddressRangeModifiedEx @ 0x14031A390 (MmSetAddressRangeModifiedEx.c)
 *     MiReleaseSystemCacheView @ 0x14031AA4C (MiReleaseSystemCacheView.c)
 *     MmUnmapViewInSystemCache @ 0x14031E830 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 */

unsigned __int64 __fastcall MiLockWorkingSetOptimal(__int64 a1, unsigned __int64 a2, _BYTE *a3, _DWORD *a4)
{
  unsigned __int64 v5; // rsi

  v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a3 = MiLockWorkingSetShared(a1, a2, (__int64)a3, a4);
  MiLockPageTableInternal(a1, v5, 0);
  return v5;
}
