/*
 * XREFs of PopFanRemove @ 0x1408EE320
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x140347600 (IoCancelIrp.c)
 */

NTSTATUS __fastcall PopFanRemove(__int64 a1)
{
  *(_BYTE *)(a1 + 152) = 1;
  IoCancelIrp(*(PIRP *)(a1 + 56));
  return KeWaitForSingleObject((PVOID)(a1 + 128), Executive, 0, 0, 0LL);
}
