/*
 * XREFs of BcdCloseObject @ 0x140783BCC
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1405BC750 (WheaPersistBadPageToBcd.c)
 *     PopAllocateHiberContext @ 0x140777C44 (PopAllocateHiberContext.c)
 *     PopBcdSetPendingResume @ 0x140778080 (PopBcdSetPendingResume.c)
 *     PopBcdClearPendingResume @ 0x140781D60 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x140782280 (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1408F5884 (PopBcdRegenerateResumeObject.c)
 *     SepSecureBootCorrectBcd @ 0x1409241E8 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x14096F1C8 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1409701B0 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1409703EC (BiBindEfiBootManager.c)
 *     BiBindEfiEntryToBcdObject @ 0x140970784 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x140970928 (BiBuildIdentifierList.c)
 *     BiCreateEfiEntry @ 0x1409712D0 (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x140971BC0 (BiExportEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x140972E90 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x14097316C (BiUpdateEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14039B59C (BiIsOfflineHandle.c)
 *     BiCloseKey @ 0x14078458C (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140784774 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140784938 (BiAcquireBcdSyncMutant.c)
 */

__int64 __fastcall BcdCloseObject(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // di
  __int64 result; // rax
  __int64 v5; // rcx

  LOBYTE(v2) = BiIsOfflineHandle(a1);
  v3 = v2;
  result = BiAcquireBcdSyncMutant(v2);
  if ( (int)result >= 0 )
  {
    BiCloseKey(a1);
    LOBYTE(v5) = v3;
    return BiReleaseBcdSyncMutant(v5);
  }
  return result;
}
