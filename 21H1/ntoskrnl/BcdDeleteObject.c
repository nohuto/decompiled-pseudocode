/*
 * XREFs of BcdDeleteObject @ 0x14096A428
 * Callers:
 *     PopBcdRegenerateResumeObject @ 0x1408F11A4 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x14096BB64 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x14096BDA0 (BiBindEfiEntries.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14039807C (BiIsOfflineHandle.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1405BDF64 (BiSetFirmwareModifiedFromObject.c)
 *     BiDeleteKey @ 0x140764FC0 (BiDeleteKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14076FF84 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140770148 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1407701B8 (BiIsLinkedToFirmwareVariable.c)
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
