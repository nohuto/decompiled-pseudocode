/*
 * XREFs of _std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Copy_::_1_::catch$1 @ 0x1800D069D
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800ADD58 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800ADF48 (-_Xbad_alloc@std@@YAXXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Copy_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  void *v4; // rax
  unsigned __int64 v5; // rcx

  v3 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a2 + 104) = v3;
  v4 = 0LL;
  v5 = v3 + 1;
  if ( v5 )
  {
    if ( v5 > 0x7FFFFFFFFFFFFFFFLL || (v4 = operator new(2 * v5)) == 0LL )
      std::_Xbad_alloc();
  }
  *(_QWORD *)(a2 + 120) = v4;
  return &loc_180068E3B;
}
