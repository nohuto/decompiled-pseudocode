/*
 * XREFs of ??1?$_Uninitialized_backout_al@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180176994
 * Callers:
 *     _std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Range_construct_or_tidy_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____::_1_::dtor$6 @ 0x18008C197 (_std--vector_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std-_ea_18008C197.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_backout_al<std::wstring *>::~_Uninitialized_backout_al<std::wstring *,std::allocator<std::wstring>>(
        _QWORD **a1)
{
  return std::_Destroy_range<std::allocator<std::wstring>>(*a1, a1[1]);
}
