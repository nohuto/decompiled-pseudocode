/*
 * XREFs of BcdCloseObject @ 0x140783D8C
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1405BC980 (WheaPersistBadPageToBcd.c)
 *     PopAllocateHiberContext @ 0x140777E04 (PopAllocateHiberContext.c)
 *     PopBcdSetPendingResume @ 0x140778240 (PopBcdSetPendingResume.c)
 *     PopBcdClearPendingResume @ 0x140781F20 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x140782440 (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1408F59E4 (PopBcdRegenerateResumeObject.c)
 *     SepSecureBootCorrectBcd @ 0x140924348 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x14096F3A8 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140970390 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1409705CC (BiBindEfiBootManager.c)
 *     BiBindEfiEntryToBcdObject @ 0x140970964 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x140970B08 (BiBuildIdentifierList.c)
 *     BiCreateEfiEntry @ 0x1409714B0 (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x140971DA0 (BiExportEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x140973070 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x14097334C (BiUpdateEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14039B6EC (BiIsOfflineHandle.c)
 *     BiCloseKey @ 0x14078474C (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140784934 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140784AF8 (BiAcquireBcdSyncMutant.c)
 */

NTSTATUS __cdecl BcdCloseObject(HANDLE BcdObjectHandle)
{
  __int64 v2; // rcx
  char v3; // di
  NTSTATUS result; // eax
  __int64 v5; // rcx

  LOBYTE(v2) = BiIsOfflineHandle((char)BcdObjectHandle);
  v3 = v2;
  result = BiAcquireBcdSyncMutant(v2);
  if ( result >= 0 )
  {
    BiCloseKey(BcdObjectHandle);
    LOBYTE(v5) = v3;
    return BiReleaseBcdSyncMutant(v5);
  }
  return result;
}
