/*
 * XREFs of ?reserve@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAX_K@Z @ 0x1801E7A28
 * Callers:
 *     ?FlattenStops@CGradientBrush@@AEAAXXZ @ 0x1801E6BA8 (-FlattenStops@CGradientBrush@@AEAAXXZ.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAX_K@Z @ 0x1801E7984 (-_Reallocate_exactly@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@.c)
 */

unsigned __int64 __fastcall std::vector<D2D1_GRADIENT_STOP>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 result; // rax

  v2 = a1[2] - *a1;
  result = (unsigned __int64)((unsigned __int128)(v2 * (__int128)0x6666666666666667LL) >> 64) >> 63;
  if ( a2 > v2 / 20 )
  {
    if ( a2 > 0xCCCCCCCCCCCCCCCLL )
      std::_Xlength_error("vector<T> too long");
    return std::vector<D2D1_GRADIENT_STOP>::_Reallocate_exactly((__int64)a1, a2);
  }
  return result;
}
