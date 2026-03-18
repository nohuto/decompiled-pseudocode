/*
 * XREFs of PsAllocSiloContextSlot @ 0x14077E470
 * Callers:
 *     <none>
 * Callees:
 *     PspStorageAllocSlot @ 0x14077E598 (PspStorageAllocSlot.c)
 */

__int64 __fastcall PsAllocSiloContextSlot(__int64 a1, __int64 a2)
{
  return PspStorageAllocSlot(a2);
}
