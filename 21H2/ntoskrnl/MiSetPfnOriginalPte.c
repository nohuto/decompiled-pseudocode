/*
 * XREFs of MiSetPfnOriginalPte @ 0x14054F65C
 * Callers:
 *     MmFreeNonCachedMemory @ 0x1408C6A40 (MmFreeNonCachedMemory.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnOriginalPte(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = a2;
}
