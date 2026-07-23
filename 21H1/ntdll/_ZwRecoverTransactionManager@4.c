/*
 * XREFs of _ZwRecoverTransactionManager@4 @ 0x4B2F4030
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwRecoverTransactionManager(HANDLE TransactionManagerHandle)
{
  return Wow64SystemServiceCall();
}
