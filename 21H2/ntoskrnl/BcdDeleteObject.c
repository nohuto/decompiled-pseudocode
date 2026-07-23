/*
 * XREFs of BcdDeleteObject @ 0x14096EE90
 * Callers:
 *     PopBcdRegenerateResumeObject @ 0x1408F59E4 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x1409705CC (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x140970808 (BiBindEfiEntries.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14039B6EC (BiIsOfflineHandle.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1405C3D64 (BiSetFirmwareModifiedFromObject.c)
 *     BiDeleteKey @ 0x140779B20 (BiDeleteKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140784934 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140784AF8 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140784B68 (BiIsLinkedToFirmwareVariable.c)
 */

NTSTATUS __cdecl BcdDeleteObject(HANDLE BcdObjectHandle)
{
  char IsOfflineHandle; // di
  NTSTATUS result; // eax
  NTSTATUS v4; // ebx

  IsOfflineHandle = BiIsOfflineHandle((char)BcdObjectHandle);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    if ( BiIsLinkedToFirmwareVariable((__int64)BcdObjectHandle, 0LL) )
      BiSetFirmwareModifiedFromObject(BcdObjectHandle);
    v4 = BiDeleteKey((__int64)BcdObjectHandle);
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return v4;
  }
  return result;
}
