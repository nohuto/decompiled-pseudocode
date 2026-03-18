/*
 * XREFs of BcdDeleteObject @ 0x140A1CC1C
 * Callers:
 *     PopBcdRegenerateResumeObject @ 0x14099D244 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x140A1E354 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x140A1E590 (BiBindEfiEntries.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1403A7864 (BiIsOfflineHandle.c)
 *     BiSetFirmwareModifiedFromObject @ 0x14064CD04 (BiSetFirmwareModifiedFromObject.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140803438 (BiIsLinkedToFirmwareVariable.c)
 *     BiDeleteKey @ 0x14080422C (BiDeleteKey.c)
 *     BiReleaseBcdSyncMutant @ 0x1408134D8 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14081369C (BiAcquireBcdSyncMutant.c)
 */

NTSTATUS __fastcall BcdDeleteObject(void *a1)
{
  char IsOfflineHandle; // di
  NTSTATUS result; // eax
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
