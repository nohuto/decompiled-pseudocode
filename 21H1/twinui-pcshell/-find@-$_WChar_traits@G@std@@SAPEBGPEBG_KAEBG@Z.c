/*
 * XREFs of ?find@?$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z @ 0x1801CB7BC
 * Callers:
 *     ?_SplitString@RetailDemoExperienceManager@@CA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x1801CB6AC (-_SplitString@RetailDemoExperienceManager@@CA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@.c)
 *     ??$_Traits_find@U?$char_traits@G@std@@@std@@YA_KQEBG_K101@Z @ 0x180323C4C (--$_Traits_find@U-$char_traits@G@std@@@std@@YA_KQEBG_K101@Z.c)
 *     ?TryExtractJavaMainClassNameFromCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x18043C01C (-TryExtractJavaMainClassNameFromCommandLine@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
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
