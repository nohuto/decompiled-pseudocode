/*
 * XREFs of _ZwAllocateLocallyUniqueId@4 @ 0x4B2F3090
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwAllocateLocallyUniqueId(PLUID Luid)
{
  return Wow64SystemServiceCall();
}
