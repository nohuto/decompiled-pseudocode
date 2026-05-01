/*
 * XREFs of ??$_Traits_find@U?$char_traits@G@std@@@std@@YA_KQEBG_K101@Z @ 0x180323C4C
 * Callers:
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x180335D58 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 * Callees:
 *     ?find@?$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z @ 0x1801CB7BC (-find@-$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z.c)
 */

__int64 __fastcall std::_Traits_find<std::char_traits<unsigned short>>(
        _WORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int16 *a4,
        unsigned __int64 a5)
{
  _WORD *v7; // rax
  _WORD *v8; // rsi
  _WORD *v9; // rax
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // r8
  __int16 *v13; // rcx
  unsigned __int16 v14; // r9
  int v15; // ecx

  if ( a5 <= a2 )
  {
    if ( !a5 )
      return 0LL;
    v7 = a1;
    v8 = &a1[a2 - a5];
    while ( 1 )
    {
      v9 = std::_WChar_traits<unsigned short>::find(v7, v8 + 1 - v7, a4);
      if ( !v9 )
        break;
      v12 = v10;
      v13 = a4;
      if ( v10 )
      {
        while ( 1 )
        {
          v14 = *(__int16 *)((char *)v13 + (char *)v9 - (char *)a4);
          if ( v14 != *v13 )
            break;
          ++v13;
          if ( !--v12 )
            goto LABEL_9;
        }
        v15 = v14 < (unsigned __int16)*v13 ? -1 : 1;
      }
      else
      {
LABEL_9:
        v15 = 0;
      }
      if ( !v15 )
        return ((__int64)v9 - v11) >> 1;
      v7 = v9 + 1;
    }
  }
  return -1LL;
}
