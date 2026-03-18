/*
 * XREFs of MiLockWorkingSetOptimal @ 0x14029C0FC
 * Callers:
 *     MiMarkPteDirty @ 0x14024F530 (MiMarkPteDirty.c)
 *     MiReleaseSystemCacheView @ 0x14029AFD0 (MiReleaseSystemCacheView.c)
 *     MmUnmapViewInSystemCache @ 0x14029B2F0 (MmUnmapViewInSystemCache.c)
 *     MmSetAddressRangeModifiedEx @ 0x14029ECE0 (MmSetAddressRangeModifiedEx.c)
 *     MiDirtySystemCachePte @ 0x14031A254 (MiDirtySystemCachePte.c)
 *     MiMakeSystemCachePteValid @ 0x140356A3C (MiMakeSystemCachePteValid.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 */

unsigned __int64 __fastcall MiLockWorkingSetOptimal(__int64 a1, unsigned __int64 a2, _BYTE *a3)
{
  unsigned __int64 v4; // rsi

  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a3 = MiLockWorkingSetShared(a1);
  MiLockPageTableInternal(a1, v4, 0LL);
  return v4;
}
