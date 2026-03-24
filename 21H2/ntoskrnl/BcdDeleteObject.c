/*
 * XREFs of BcdDeleteObject @ 0x14096ECB0
 * Callers:
 *     PopBcdRegenerateResumeObject @ 0x1408F5884 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x1409703EC (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x140970628 (BiBindEfiEntries.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14039B59C (BiIsOfflineHandle.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1405C3B34 (BiSetFirmwareModifiedFromObject.c)
 *     BiDeleteKey @ 0x140779960 (BiDeleteKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140784774 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140784938 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1407849A8 (BiIsLinkedToFirmwareVariable.c)
 */

int __fastcall BcdDeleteObject(void *a1)
{
  char IsOfflineHandle; // di
  int result; // eax
  int v4; // ebx

  IsOfflineHandle = BiIsOfflineHandle((char)a1);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    if ( BiIsLinkedToFirmwareVariable((__int64)a1, 0LL) )
      BiSetFirmwareModifiedFromObject(a1);
    v4 = BiDeleteKey((__int64)a1);
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return v4;
  }
  return result;
}
