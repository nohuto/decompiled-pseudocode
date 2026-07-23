/*
 * XREFs of ZwTerminateEnclave @ 0x1403F6D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTerminateEnclave(PVOID BaseAddress, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BaseAddress);
}
