/*
 * XREFs of _ZwSetBootEntryOrder@8 @ 0x4B2F41F0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwSetBootEntryOrder(PULONG Ids, ULONG Count)
{
  return Wow64SystemServiceCall();
}
