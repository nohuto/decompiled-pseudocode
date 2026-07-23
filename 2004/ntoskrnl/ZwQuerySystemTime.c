/*
 * XREFs of ZwQuerySystemTime @ 0x1403F4100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySystemTime(PLARGE_INTEGER SystemTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SystemTime);
}
