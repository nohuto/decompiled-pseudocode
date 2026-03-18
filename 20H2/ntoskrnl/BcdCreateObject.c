/*
 * XREFs of BcdCreateObject @ 0x140971500
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1405BAD00 (WheaPersistBadPageToBcd.c)
 *     PopBcdRegenerateResumeObject @ 0x1408F80A4 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x140972CD4 (BiBindEfiBootManager.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x14039ABCC (BiSetFirmwareModified.c)
 *     BiIsOfflineHandle @ 0x14039ACD0 (BiIsOfflineHandle.c)
 *     BiReleaseBcdSyncMutant @ 0x140780994 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140780B58 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140780BC8 (BiIsLinkedToFirmwareVariable.c)
 *     BiCreateObject @ 0x1409718B0 (BiCreateObject.c)
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
