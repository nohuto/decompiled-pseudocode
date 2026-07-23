/*
 * XREFs of ZwRecoverEnlistment @ 0x1403F62E0
 * Callers:
 *     CmpRecoverEnlistment @ 0x140871A54 (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
