/*
 * XREFs of ZwRecoverResourceManager @ 0x1403FAED0
 * Callers:
 *     CmpInitCmRM @ 0x14071037C (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverResourceManager(HANDLE ResourceManagerHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle);
}
