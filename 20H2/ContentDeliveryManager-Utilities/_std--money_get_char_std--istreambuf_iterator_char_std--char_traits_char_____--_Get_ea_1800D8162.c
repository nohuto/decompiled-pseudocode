/*
 * XREFs of _std::money_get_char_std::istreambuf_iterator_char_std::char_traits_char_____::_Getmfld_::_1_::dtor$7 @ 0x1800D8162
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180016218 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 */

void __fastcall std::money_get_char_std::istreambuf_iterator_char_std::char_traits_char_____::_Getmfld_::_1_::dtor_7(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~4u;
    std::string::~string(a2 + 184);
  }
}
