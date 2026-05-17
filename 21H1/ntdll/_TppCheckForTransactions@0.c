/*
 * XREFs of _TppCheckForTransactions@0 @ 0x4B2B68E9
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 *     _TppCallbackCheckThreadAfterCallback@4 @ 0x4B2B638B (_TppCallbackCheckThreadAfterCallback@4.c)
 *     _TppCallbackCheckThreadBeforeCallback@4 @ 0x4B2B6D20 (_TppCallbackCheckThreadBeforeCallback@4.c)
 * Callees:
 *     <none>
 */

bool __stdcall TppCheckForTransactions()
{
  struct _TEB *v0; // eax
  void *CurrentTransactionHandle; // ecx

  v0 = NtCurrentTeb();
  CurrentTransactionHandle = v0->CurrentTransactionHandle;
  return CurrentTransactionHandle && CurrentTransactionHandle != (void *)-1
      || v0->TxnScopeEnterCallback
      || v0->TxnScopeExitCallback
      || v0->TxnScopeContext
      || v0->TxFsContext != 65534;
}
