/*
 * XREFs of ZwCompressKey @ 0x1403F3710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCompressKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
