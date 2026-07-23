/*
 * XREFs of ZwSetUuidSeed @ 0x1403F5950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetUuidSeed(PCHAR Seed)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Seed);
}
