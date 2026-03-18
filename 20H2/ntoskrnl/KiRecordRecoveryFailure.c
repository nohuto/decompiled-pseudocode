/*
 * XREFs of KiRecordRecoveryFailure @ 0x14052367C
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405232A4 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403CBE58 (IoAddTriageDumpDataBlock.c)
 */

char __fastcall KiRecordRecoveryFailure(ULONG a1)
{
  KiBugcheckRecoveryFailureReason = a1;
  IoAddTriageDumpDataBlock((ULONG)&KiBugcheckRecoveryFailureReason, (PVOID)4);
  return IoAddTriageDumpDataBlock((ULONG)&KiBugcheckRecoveryInformation, (PVOID)0x20);
}
