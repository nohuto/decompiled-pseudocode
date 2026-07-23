/*
 * XREFs of ZwRecoverEnlistment @ 0x1403F5050
 * Callers:
 *     CmpRecoverEnlistment @ 0x140870774 (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
