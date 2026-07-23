/*
 * XREFs of ZwClearEvent @ 0x1403F3D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwClearEvent(HANDLE EventHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
