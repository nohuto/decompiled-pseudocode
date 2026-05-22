/*
 * XREFs of ?find@?$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z @ 0x180096808
 * Callers:
 *     ??$_Traits_find_last_of@U?$char_traits@G@std@@@std@@YA_KQEBG_K101U?$integral_constant@_N$00@0@@Z @ 0x180091A14 (--$_Traits_find_last_of@U-$char_traits@G@std@@@std@@YA_KQEBG_K101U-$integral_constant@_N$00@0@@Z.c)
 *     ?StringToHstringVectorParser@@YA?AV?$com_ptr_t@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@PEBG@Z @ 0x1801184D0 (-StringToHstringVectorParser@@YA-AV-$com_ptr_t@U-$IVector@PEAUHSTRING__@@@Collections@Foundation.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall std::_WChar_traits<unsigned short>::find(_WORD *a1, __int64 a2, __int16 *a3)
{
  _WORD *result; // rax
  __int16 v4; // r8

  result = 0LL;
  if ( a2 )
  {
    v4 = *a3;
    while ( *a1 != v4 )
    {
      if ( a2 == 1 )
        return result;
      --a2;
      ++a1;
    }
    return a1;
  }
  return result;
}
