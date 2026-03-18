/*
 * XREFs of PsAllocSiloContextSlot @ 0x14078B200
 * Callers:
 *     <none>
 * Callees:
 *     PspStorageAllocSlot @ 0x14078B328 (PspStorageAllocSlot.c)
 */

__int64 __fastcall PsAllocSiloContextSlot(__int64 a1, __int64 a2)
{
  return PspStorageAllocSlot(a2);
}
