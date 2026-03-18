/*
 * XREFs of CcIsCacheMapACursorInPrivateVCM @ 0x140538E2C
 * Callers:
 *     CcShouldLazyWriteCacheMap @ 0x140275E40 (CcShouldLazyWriteCacheMap.c)
 *     CcLazyWriteScanVolume @ 0x140538E4C (CcLazyWriteScanVolume.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcIsCacheMapACursorInPrivateVCM(__int64 a1, __int64 a2)
{
  return a2 == a1 + 80 || a2 == a1 + 104;
}
