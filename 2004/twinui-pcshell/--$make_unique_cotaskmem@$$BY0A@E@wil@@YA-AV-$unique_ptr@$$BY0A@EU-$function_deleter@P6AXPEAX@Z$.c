/*
 * XREFs of ??$make_unique_cotaskmem@$$BY0A@E@wil@@YA?AV?$unique_ptr@$$BY0A@EU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@_K@Z @ 0x180098AA8
 * Callers:
 *     ?GetProcessorsCount@ShellFeedsDeviceHelper@@YAKXZ @ 0x18009AD20 (-GetProcessorsCount@ShellFeedsDeviceHelper@@YAKXZ.c)
 * Callees:
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093890 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
char **__fastcall wil::make_unique_cotaskmem<unsigned char [0]>(char **a1, SIZE_T a2)
{
  char *v4; // rax
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (char *)CoTaskMemAlloc(a2);
  *a1 = v4;
  if ( v4 && v4 != &v4[a2] )
    memset_0(v4, 0, a2);
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      5024LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v5);
    __debugbreak();
  }
  return a1;
}
