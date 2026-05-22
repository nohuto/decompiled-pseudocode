/*
 * XREFs of ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x18006DA90
 * Callers:
 *     ??$?RAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@?$less@X@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@Z @ 0x18006D080 (--$-RAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBV-$basic_string_view@GU.c)
 *     ??$?RAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@?$less@X@std@@QEBA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18006D0C4 (--$-RAEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@AEBV-$basic_string@GU-$char_traits@G@s.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Traits_compare<std::char_traits<unsigned short>>(
        char *a1,
        unsigned __int64 a2,
        char *a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // r11
  unsigned int v6; // r10d
  __int64 result; // rax
  unsigned __int16 v8; // cx
  signed __int64 v9; // rdi
  bool v10; // cc
  unsigned __int16 v11; // cx

  v4 = a2;
  if ( a4 < a2 )
    v4 = a4;
  v6 = 0;
  result = 0LL;
  if ( v4 )
  {
    v8 = *(_WORD *)a1;
    if ( v8 < *(_WORD *)a3 )
    {
LABEL_9:
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v9 = a1 - a3;
      v10 = v8 <= *(_WORD *)a3;
      while ( v10 )
      {
        if ( v4 == 1 )
          goto LABEL_10;
        a3 += 2;
        --v4;
        v11 = *(_WORD *)&a3[v9];
        v10 = v11 <= *(_WORD *)a3;
        if ( v11 < *(_WORD *)a3 )
          goto LABEL_9;
      }
      result = 1LL;
    }
  }
LABEL_10:
  if ( !(_DWORD)result )
  {
    if ( a2 >= a4 )
    {
      LOBYTE(v6) = a2 > a4;
      return v6;
    }
    else
    {
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}
