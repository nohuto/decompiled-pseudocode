/*
 * XREFs of BcdCreateObject @ 0x14096EC18
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1405BC750 (WheaPersistBadPageToBcd.c)
 *     PopBcdRegenerateResumeObject @ 0x1408F5884 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x1409703EC (BiBindEfiBootManager.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x14039B498 (BiSetFirmwareModified.c)
 *     BiIsOfflineHandle @ 0x14039B59C (BiIsOfflineHandle.c)
 *     BiReleaseBcdSyncMutant @ 0x140784774 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140784938 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1407849A8 (BiIsLinkedToFirmwareVariable.c)
 *     BiCreateObject @ 0x14096EFC8 (BiCreateObject.c)
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
