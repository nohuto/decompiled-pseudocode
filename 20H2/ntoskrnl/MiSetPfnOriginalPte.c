/*
 * XREFs of MiSetPfnOriginalPte @ 0x14054D91C
 * Callers:
 *     MmFreeNonCachedMemory @ 0x1408C9120 (MmFreeNonCachedMemory.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnOriginalPte(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = a2;
}
