/*
 * XREFs of _ZwSetUuidSeed@4 @ 0x4B2F4490
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwSetUuidSeed(PCHAR Seed)
{
  return Wow64SystemServiceCall();
}
