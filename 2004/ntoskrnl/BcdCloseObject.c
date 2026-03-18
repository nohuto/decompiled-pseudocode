/*
 * XREFs of BcdCloseObject @ 0x1407717EC
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1405B71A0 (WheaPersistBadPageToBcd.c)
 *     PopAllocateHiberContext @ 0x140764C64 (PopAllocateHiberContext.c)
 *     PopBcdSetPendingResume @ 0x1407650A0 (PopBcdSetPendingResume.c)
 *     PopBcdClearPendingResume @ 0x14076F980 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x14076FEA0 (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1408F2494 (PopBcdRegenerateResumeObject.c)
 *     SepSecureBootCorrectBcd @ 0x140920BF8 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x14096BCE0 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x14096CCC8 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x14096CF04 (BiBindEfiBootManager.c)
 *     BiBindEfiEntryToBcdObject @ 0x14096D29C (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x14096D440 (BiBuildIdentifierList.c)
 *     BiCreateEfiEntry @ 0x14096DDE8 (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x14096E6D8 (BiExportEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x14096F9A8 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x14096FC84 (BiUpdateEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x140398810 (BiIsOfflineHandle.c)
 *     BiCloseKey @ 0x1407721AC (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140772394 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140772558 (BiAcquireBcdSyncMutant.c)
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
