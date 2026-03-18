/*
 * XREFs of OBJECT_HEADER_TO_HANDLE_INFO @ 0x1402F3310
 * Callers:
 *     ObpReleaseHandleInfo @ 0x1406B9214 (ObpReleaseHandleInfo.c)
 *     ObpInsertHandleCount @ 0x1406B941C (ObpInsertHandleCount.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x1408D8748 (ObpUnlockHandleDatabaseEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_HANDLE_INFO(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 26) & 4) != 0 )
    return a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 7];
  else
    return 0LL;
}
