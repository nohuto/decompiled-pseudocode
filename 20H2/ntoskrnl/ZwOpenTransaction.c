/*
 * XREFs of ZwOpenTransaction @ 0x1403FA790
 * Callers:
 *     CmpRmUnDoPhase @ 0x140878104 (CmpRmUnDoPhase.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenTransaction(
        PHANDLE TransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LPGUID Uow,
        HANDLE TmHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle);
}
