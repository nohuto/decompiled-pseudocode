/*
 * XREFs of MiLockWorkingSetOptimal @ 0x1402BC3DC
 * Callers:
 *     MiReleaseSystemCacheView @ 0x14022F3DC (MiReleaseSystemCacheView.c)
 *     MmUnmapViewInSystemCache @ 0x1402A0380 (MmUnmapViewInSystemCache.c)
 *     MiMakeSystemCachePteValid @ 0x1402BB58C (MiMakeSystemCachePteValid.c)
 *     MmSetAddressRangeModifiedEx @ 0x1402BBFB0 (MmSetAddressRangeModifiedEx.c)
 *     MiMarkPteDirty @ 0x1402BD9E0 (MiMarkPteDirty.c)
 *     MiDirtySystemCachePte @ 0x1402BDA7C (MiDirtySystemCachePte.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 */

unsigned __int64 __fastcall MiLockWorkingSetOptimal(__int64 a1, unsigned __int64 a2, _BYTE *a3)
{
  unsigned __int64 v4; // rsi

  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a3 = MiLockWorkingSetShared(a1);
  MiLockPageTableInternal(a1, v4, 0LL);
  return v4;
}
