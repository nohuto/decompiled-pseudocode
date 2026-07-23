/*
 * XREFs of ZwSetEventBoostPriority @ 0x1403F28D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetEventBoostPriority(HANDLE EventHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
