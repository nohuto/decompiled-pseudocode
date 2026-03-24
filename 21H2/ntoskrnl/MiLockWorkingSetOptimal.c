/*
 * XREFs of MiLockWorkingSetOptimal @ 0x14030FC94
 * Callers:
 *     MiDirtySystemCachePte @ 0x1402BC818 (MiDirtySystemCachePte.c)
 *     MiMarkPteDirty @ 0x1402FA54C (MiMarkPteDirty.c)
 *     MmSetAddressRangeModifiedEx @ 0x14030F640 (MmSetAddressRangeModifiedEx.c)
 *     MiReleaseSystemCacheView @ 0x14030FCFC (MiReleaseSystemCacheView.c)
 *     MmUnmapViewInSystemCache @ 0x140313AE0 (MmUnmapViewInSystemCache.c)
 *     MiMakeSystemCachePteValid @ 0x14035E91C (MiMakeSystemCachePteValid.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 */

unsigned __int64 __fastcall MiLockWorkingSetOptimal(__int64 a1, unsigned __int64 a2, _BYTE *a3, _DWORD *a4)
{
  unsigned __int64 v5; // rsi

  v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a3 = MiLockWorkingSetShared(a1, a2, (__int64)a3, a4);
  MiLockPageTableInternal(a1, v5, 0LL);
  return v5;
}
