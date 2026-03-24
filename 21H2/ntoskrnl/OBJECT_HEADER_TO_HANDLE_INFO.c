/*
 * XREFs of OBJECT_HEADER_TO_HANDLE_INFO @ 0x1402642D4
 * Callers:
 *     ObpReleaseHandleInfo @ 0x14062DBE4 (ObpReleaseHandleInfo.c)
 *     ObpInsertHandleCount @ 0x14062DDEC (ObpInsertHandleCount.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x1408DD0B8 (ObpUnlockHandleDatabaseEntry.c)
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
