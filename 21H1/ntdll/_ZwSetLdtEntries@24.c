/*
 * XREFs of _ZwSetLdtEntries@24 @ 0x4B2F43B0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwSetLdtEntries(
        ULONG Selector0,
        ULONG Entry0Low,
        ULONG Entry0Hi,
        ULONG Selector1,
        ULONG Entry1Low,
        ULONG Entry1Hi)
{
  return Wow64SystemServiceCall();
}
