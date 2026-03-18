/*
 * XREFs of ZwRecoverResourceManager @ 0x1403F6300
 * Callers:
 *     CmpInitCmRM @ 0x140655B64 (CmpInitCmRM.c)
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
