/*
 * XREFs of ZwRecoverTransactionManager @ 0x1403F6320
 * Callers:
 *     CmpInitCmRM @ 0x140655B64 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverTransactionManager(HANDLE TransactionManagerHandle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle, v1);
}
