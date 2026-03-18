/*
 * XREFs of ?allocate@?$allocator@UtagRECT@@@std@@QEAAPEAUtagRECT@@_K@Z @ 0x180175790
 * Callers:
 *     ??$_Emplace_reallocate@AEAUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@AEAU2@@Z @ 0x1800E8488 (--$_Emplace_reallocate@AEAUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAP.c)
 *     ?_Reallocate_exactly@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAX_K@Z @ 0x1800E8930 (-_Reallocate_exactly@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAX_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::allocator<tagRECT>::allocate(__int64 a1, unsigned __int64 a2)
{
  SIZE_T v2; // rcx

  v2 = 16 * a2;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    v2 = -1LL;
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
