/*
 * XREFs of ZwSetInformationTransactionManager @ 0x1403F56D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationTransactionManager(
        HANDLE TmHandle,
        TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
        PVOID TransactionManagerInformation,
        ULONG TransactionManagerInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TmHandle);
}
