/*
 * XREFs of ZwRecoverResourceManager @ 0x1403F5070
 * Callers:
 *     CmpInitCmRM @ 0x14065A51C (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverResourceManager(HANDLE ResourceManagerHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle);
}
