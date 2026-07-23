/*
 * XREFs of ZwRecoverEnlistment @ 0x1403FAEB0
 * Callers:
 *     CmpRecoverEnlistment @ 0x1408775A4 (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
