/*
 * XREFs of KiRecordRecoveryFailure @ 0x14057958C
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405788B0 (KiAttemptBugcheckRecovery.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x140579150 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiHandleMultipleBugchecksDuringRecovery @ 0x14057938C (KiHandleMultipleBugchecksDuringRecovery.c)
 *     KiScheduleBugcheckRecovery @ 0x140579780 (KiScheduleBugcheckRecovery.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403D99B4 (IoAddTriageDumpDataBlock.c)
 */

char __fastcall KiRecordRecoveryFailure(ULONG a1)
{
  KiBugcheckRecoveryFailureReason = a1;
  IoAddTriageDumpDataBlock((ULONG)&KiBugcheckRecoveryFailureReason, (PVOID)4);
  return IoAddTriageDumpDataBlock((ULONG)&KiBugcheckRecoveryInformation, (PVOID)0x4C);
}
