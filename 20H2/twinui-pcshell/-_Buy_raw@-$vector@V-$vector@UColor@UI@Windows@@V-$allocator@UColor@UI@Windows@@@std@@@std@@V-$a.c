/*
 * XREFs of ?_Buy_raw@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x180451284
 * Callers:
 *     ??$_Range_construct_or_tidy@PEBV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXPEBV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180450A54 (--$_Range_construct_or_tidy@PEBV-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std.c)
 *     ?_Clear_and_reserve_geometric@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x1804512D8 (-_Clear_and_reserve_geometric@-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windo.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003A530 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::vector<std::vector<Windows::UI::Color>>::_Buy_raw(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  size_t v4; // rcx
  _QWORD *v5; // rax
  _QWORD *result; // rax

  v3 = 3 * a2;
  v4 = 24 * a2;
  if ( a2 > 0xAAAAAAAAAAAAAAALL )
    v4 = -1LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(v4);
  *a1 = v5;
  a1[1] = v5;
  result = &v5[v3];
  a1[2] = result;
  return result;
}
