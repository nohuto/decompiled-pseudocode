/*
 * XREFs of BcdDeleteObject @ 0x140971598
 * Callers:
 *     PopBcdRegenerateResumeObject @ 0x1408F80A4 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x140972CD4 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x140972F10 (BiBindEfiEntries.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14039ACD0 (BiIsOfflineHandle.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1405C2304 (BiSetFirmwareModifiedFromObject.c)
 *     BiDeleteKey @ 0x1407759B0 (BiDeleteKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140780994 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140780B58 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140780BC8 (BiIsLinkedToFirmwareVariable.c)
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
