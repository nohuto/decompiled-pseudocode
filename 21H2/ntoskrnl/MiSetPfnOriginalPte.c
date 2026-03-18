/*
 * XREFs of MiSetPfnOriginalPte @ 0x140416A74
 * Callers:
 *     SymCryptModExpWindowed @ 0x140410D50 (SymCryptModExpWindowed.c)
 *     MmFreeNonCachedMemory @ 0x14096A680 (MmFreeNonCachedMemory.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnOriginalPte(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = a2;
}
