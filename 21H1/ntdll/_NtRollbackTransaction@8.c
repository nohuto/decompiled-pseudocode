/*
 * XREFs of _NtRollbackTransaction@8 @ 0x4B2F4180
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtRollbackTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  return Wow64SystemServiceCall();
}
