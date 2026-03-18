/*
 * XREFs of BcdDeleteObject @ 0x14096B7C8
 * Callers:
 *     PopBcdRegenerateResumeObject @ 0x1408F2494 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x14096CF04 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x14096D140 (BiBindEfiEntries.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x140398810 (BiIsOfflineHandle.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1405BE684 (BiSetFirmwareModifiedFromObject.c)
 *     BiDeleteKey @ 0x140766980 (BiDeleteKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140772394 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140772558 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1407725C8 (BiIsLinkedToFirmwareVariable.c)
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
