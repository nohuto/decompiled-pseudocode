/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAX_K@Z @ 0x180035DD0
 * Callers:
 *     ??$_Assign_range@PEAUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXPEAUINPUT_SPACE_PAYLOAD@@0Uforward_iterator_tag@1@@Z @ 0x180035D2C (--$_Assign_range@PEAUINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SP.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800130F0 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEBA_K_K@Z @ 0x180035E3C (-_Calculate_growth@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@.c)
 */

_QWORD *__fastcall std::vector<INPUT_SPACE_PAYLOAD>::_Clear_and_reserve_geometric(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  size_t size_of; // rax
  _QWORD *v5; // rax
  _QWORD *result; // rax

  if ( a2 > 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector<T> too long");
  v3 = std::vector<INPUT_SPACE_PAYLOAD>::_Calculate_growth(a1, a2);
  if ( *(_QWORD *)a1 )
  {
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)(24 * ((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 24LL)));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  size_of = std::_Get_size_of_n<24>(v3);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = v5;
  result = &v5[3 * v3];
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
