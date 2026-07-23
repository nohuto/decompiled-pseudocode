/*
 * XREFs of ZwAllocateUuids @ 0x1403F4460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateUuids(PULARGE_INTEGER Time, PULONG Range, PULONG Sequence, PCHAR Seed)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Time);
}
