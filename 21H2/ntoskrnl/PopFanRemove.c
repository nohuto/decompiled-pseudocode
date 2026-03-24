/*
 * XREFs of PopFanRemove @ 0x1408F1730
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x1402BB2C0 (IoCancelIrp.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall PopFanRemove(__int64 a1)
{
  *(_BYTE *)(a1 + 152) = 1;
  IoCancelIrp(*(PIRP *)(a1 + 56));
  return KeWaitForSingleObject((PVOID)(a1 + 128), Executive, 0, 0, 0LL);
}
