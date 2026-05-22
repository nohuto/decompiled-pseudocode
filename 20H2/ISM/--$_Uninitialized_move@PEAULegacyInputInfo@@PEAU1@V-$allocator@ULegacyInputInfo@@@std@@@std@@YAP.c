/*
 * XREFs of ??$_Uninitialized_move@PEAULegacyInputInfo@@PEAU1@V?$allocator@ULegacyInputInfo@@@std@@@std@@YAPEAULegacyInputInfo@@QEAU1@0PEAU1@AEAV?$allocator@ULegacyInputInfo@@@0@@Z @ 0x180089BB4
 * Callers:
 *     ??$_Emplace_reallocate@AEAULegacyInputInfo@@@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAAPEAULegacyInputInfo@@QEAU2@AEAU2@@Z @ 0x180089744 (--$_Emplace_reallocate@AEAULegacyInputInfo@@@-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInpu.c)
 * Callees:
 *     memcpy_0 @ 0x18004A63B (memcpy_0.c)
 */

char *__fastcall std::_Uninitialized_move<LegacyInputInfo *,LegacyInputInfo *,std::allocator<LegacyInputInfo>>(
        char *Src,
        char *a2,
        char *a3)
{
  char *i; // rdi

  for ( i = Src; i != a2; i += 2032 )
  {
    memcpy_0(a3, i, 0x7F0uLL);
    a3 += 2032;
  }
  return a3;
}
