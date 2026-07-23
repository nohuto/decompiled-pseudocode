/*
 * XREFs of ZwSetDefaultHardErrorPort @ 0x1403FB330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetDefaultHardErrorPort(HANDLE DefaultHardErrorPort)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DefaultHardErrorPort);
}
