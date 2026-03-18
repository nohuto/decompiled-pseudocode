/*
 * XREFs of BcdCreateObject @ 0x14096A390
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1405B6A80 (WheaPersistBadPageToBcd.c)
 *     PopBcdRegenerateResumeObject @ 0x1408F11A4 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x14096BB64 (BiBindEfiBootManager.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x140397F78 (BiSetFirmwareModified.c)
 *     BiIsOfflineHandle @ 0x14039807C (BiIsOfflineHandle.c)
 *     BiReleaseBcdSyncMutant @ 0x14076FF84 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140770148 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1407701B8 (BiIsLinkedToFirmwareVariable.c)
 *     BiCreateObject @ 0x14096A740 (BiCreateObject.c)
 */

int __fastcall BcdCreateObject(__int64 a1, int a2, int a3, __int64 *a4)
{
  char IsOfflineHandle; // bp
  int result; // eax
  int Object; // ebx

  IsOfflineHandle = BiIsOfflineHandle(a1);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    Object = BiCreateObject(a1, a2, a3, 0, (__int64)a4);
    if ( Object >= 0 )
    {
      if ( BiIsLinkedToFirmwareVariable(*a4, 0LL) )
        BiSetFirmwareModified(a1, 1);
    }
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return Object;
  }
  return result;
}
