/*
 * XREFs of ZwSetInformationTransactionManager @ 0x1403F56D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationTransactionManager(
        HANDLE TmHandle,
        TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
        PVOID TransactionManagerInformation,
        ULONG TransactionManagerInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TmHandle, *(_QWORD *)&TransactionManagerInformationClass);
}
