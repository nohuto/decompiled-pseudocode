/*
 * XREFs of ?_Calculate_growth@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEBA_K_K@Z @ 0x1801B9958
 * Callers:
 *     ??$_Insert_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@PEAULayoutData@CContent@@1Uforward_iterator_tag@1@@Z @ 0x1801B8BE0 (--$_Insert_range@PEAULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutDa.c)
 *     ?_Clear_and_reserve_geometric@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAX_K@Z @ 0x1801B9A3C (-_Clear_and_reserve_geometric@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@.c)
 *     ??$_Emplace_reallocate@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAPEAULayoutData@CContent@@QEAU23@AEBU23@@Z @ 0x1801E43CC (--$_Emplace_reallocate@AEBULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULa.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<CContent::LayoutData>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax

  v3 = (a1[2] - *a1) / 40LL;
  v4 = v3 >> 1;
  if ( v3 > 0x666666666666666LL - (v3 >> 1) )
    return a2;
  result = v4 + v3;
  if ( v4 + v3 < a2 )
    return a2;
  return result;
}
