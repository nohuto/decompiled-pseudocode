/*
 * XREFs of PopFanRemove @ 0x1408ED030
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x14030AD00 (IoCancelIrp.c)
 */

NTSTATUS __fastcall PopFanRemove(__int64 a1)
{
  *(_BYTE *)(a1 + 152) = 1;
  IoCancelIrp(*(PIRP *)(a1 + 56));
  return KeWaitForSingleObject((PVOID)(a1 + 128), Executive, 0, 0, 0LL);
}
