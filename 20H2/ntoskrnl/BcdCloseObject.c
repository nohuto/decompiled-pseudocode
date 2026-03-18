/*
 * XREFs of BcdCloseObject @ 0x14077FDEC
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1405BAD00 (WheaPersistBadPageToBcd.c)
 *     PopAllocateHiberContext @ 0x140773C94 (PopAllocateHiberContext.c)
 *     PopBcdSetPendingResume @ 0x1407740D0 (PopBcdSetPendingResume.c)
 *     PopBcdClearPendingResume @ 0x14077DF80 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x14077E4A0 (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1408F80A4 (PopBcdRegenerateResumeObject.c)
 *     SepSecureBootCorrectBcd @ 0x140926A18 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x140971AB0 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140972A98 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x140972CD4 (BiBindEfiBootManager.c)
 *     BiBindEfiEntryToBcdObject @ 0x14097306C (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x140973210 (BiBuildIdentifierList.c)
 *     BiCreateEfiEntry @ 0x140973BB8 (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x1409744A8 (BiExportEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x140975778 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x140975A54 (BiUpdateEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14039ACD0 (BiIsOfflineHandle.c)
 *     BiCloseKey @ 0x1407807AC (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140780994 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140780B58 (BiAcquireBcdSyncMutant.c)
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
