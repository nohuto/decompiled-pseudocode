/*
 * XREFs of ZwRecoverResourceManager @ 0x1403F5070
 * Callers:
 *     CmpInitCmRM @ 0x14065A51C (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverResourceManager(HANDLE ResourceManagerHandle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle, v1);
}
