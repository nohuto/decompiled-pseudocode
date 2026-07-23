/*
 * XREFs of _NtCommitTransaction@8 @ 0x4B2F3310
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtCommitTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  return Wow64SystemServiceCall();
}
