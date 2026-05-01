/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x1804512D8
 * Callers:
 *     ??$_Assign_range@PEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x1804507C0 (--$_Assign_range@PEAV-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@@-$.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@0@0AEAV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@0@@Z @ 0x180450A1C (--$_Destroy_range@V-$allocator@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std.c)
 */

_QWORD *__fastcall std::vector<std::vector<Windows::UI::Color>>::_Clear_and_reserve_geometric(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx

  v2 = a2;
  if ( a2 > 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector<T> too long");
  v4 = a1[2] - *a1;
  v5 = (unsigned __int64)(v4 / 24) >> 1;
  if ( v4 / 24 <= 0xAAAAAAAAAAAAAAALL - v5 )
  {
    v6 = v5 + v4 / 24;
    if ( v6 < v2 )
      v6 = v2;
    v2 = v6;
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<std::vector<Windows::UI::Color>>>(*a1, a1[1]);
    std::_Deallocate<16,0>((void *)*a1, (const struct std::nothrow_t *)(24 * ((a1[2] - *a1) / 24)));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return std::vector<std::vector<Windows::UI::Color>>::_Buy_raw(a1, v2);
}
