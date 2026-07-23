/*
 * XREFs of ZwCreateIRTimer @ 0x1403F96F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateIRTimer(PHANDLE TimerHandle, ACCESS_MASK DesiredAccess)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
