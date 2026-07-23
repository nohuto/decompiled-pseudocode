/*
 * XREFs of _ZwQueryBootEntryOrder@8 @ 0x4B2F3D70
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwQueryBootEntryOrder(PULONG Ids, PULONG Count)
{
  return Wow64SystemServiceCall();
}
