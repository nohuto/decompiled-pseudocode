/*
 * XREFs of ??1facet@locale@std@@MEAA@XZ @ 0x180027AB8
 * Callers:
 *     _std::numpunct_wchar_t_::_Getcat_::_1_::dtor$2 @ 0x1800CE141 (_std--numpunct_wchar_t_--_Getcat_--_1_--dtor$2.c)
 *     _std::wstring_convert_std::codecvt_utf8_unsigned_short_1114111_0__unsigned_short_std::allocator_unsigned_short__std::allocator_char___::wstring_convert_std::codecvt_utf8_unsigned_short_1114111_0__unsigned_short_std::allocator_unsigned_short__std::allocator_char____::_1_::dtor$5 @ 0x1800CF6EA (_std--wstring_convert_std--codecvt_utf8_unsigned_short_1114111_0__unsigned_short_st_ea_1800CF6EA.c)
 *     _std::time_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::_Getcat_::_1_::dtor$2 @ 0x1800D5463 (_std--time_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t____ea_1800D5463.c)
 *     _std::locale::_Locimp::_Locimp_::_1_::dtor$0 @ 0x1800D5841 (_std--locale--_Locimp--_Locimp_--_1_--dtor$0.c)
 *     _std::locale::_Locimp::_Makeloc_::_1_::dtor$20 @ 0x1800D5978 (_std--locale--_Locimp--_Makeloc_--_1_--dtor$20.c)
 *     _std::locale::_Locimp::_Makewloc_::_1_::dtor$28 @ 0x1800D5C56 (_std--locale--_Locimp--_Makewloc_--_1_--dtor$28.c)
 *     _std::locale::_Locimp::_Makexloc_::_1_::dtor$41 @ 0x1800D5C7A (_std--locale--_Locimp--_Makexloc_--_1_--dtor$41.c)
 * Callees:
 *     <none>
 */

void __fastcall std::locale::facet::~facet(std::locale::facet *this)
{
  *(_QWORD *)this = &std::_Facet_base::`vftable';
}
