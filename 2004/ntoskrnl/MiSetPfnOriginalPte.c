/*
 * XREFs of MiSetPfnOriginalPte @ 0x140549F4C
 * Callers:
 *     MmFreeNonCachedMemory @ 0x1408C32E0 (MmFreeNonCachedMemory.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnOriginalPte(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = a2;
}
