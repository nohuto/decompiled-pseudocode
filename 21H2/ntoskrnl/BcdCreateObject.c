/*
 * XREFs of BcdCreateObject @ 0x140A1CB84
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x140644D30 (WheaPersistBadPageToBcd.c)
 *     PopBcdRegenerateResumeObject @ 0x14099D244 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x140A1E354 (BiBindEfiBootManager.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x1403A7718 (BiSetFirmwareModified.c)
 *     BiIsOfflineHandle @ 0x1403A7864 (BiIsOfflineHandle.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140803438 (BiIsLinkedToFirmwareVariable.c)
 *     BiReleaseBcdSyncMutant @ 0x1408134D8 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14081369C (BiAcquireBcdSyncMutant.c)
 *     BiCreateObject @ 0x140A1CF34 (BiCreateObject.c)
 */

NTSTATUS __fastcall BcdCreateObject(__int64 a1, int a2, int a3, __int64 *a4)
{
  char IsOfflineHandle; // bp
  NTSTATUS result; // eax
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
