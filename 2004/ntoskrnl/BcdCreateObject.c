/*
 * XREFs of BcdCreateObject @ 0x14096B730
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1405B71A0 (WheaPersistBadPageToBcd.c)
 *     PopBcdRegenerateResumeObject @ 0x1408F2494 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x14096CF04 (BiBindEfiBootManager.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x14039870C (BiSetFirmwareModified.c)
 *     BiIsOfflineHandle @ 0x140398810 (BiIsOfflineHandle.c)
 *     BiReleaseBcdSyncMutant @ 0x140772394 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140772558 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1407725C8 (BiIsLinkedToFirmwareVariable.c)
 *     BiCreateObject @ 0x14096BAE0 (BiCreateObject.c)
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
