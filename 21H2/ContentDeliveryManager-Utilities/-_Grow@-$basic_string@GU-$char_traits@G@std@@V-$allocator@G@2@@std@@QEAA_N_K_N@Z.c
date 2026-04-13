/*
 * XREFs of ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x180038FE0
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180037918 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180039178 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18003AC94 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18003AD3C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18003B238 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ??$_Construct@V?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@std@@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXV?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x18003D1F0 (--$_Construct@V-$_String_iterator@V-$_String_val@U-$_Simple_types@D@std@@@std@@@std@@@-$basic_st.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x18004FD70 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180018A54 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x18003AB6C (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 *     memcpy_0 @ 0x1800CFDA8 (memcpy_0.c)
 */

bool __fastcall std::wstring::_Grow(void **a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v5; // rsi
  void *v6; // rbp
  bool v7; // zf
  _WORD *v8; // rax

  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::wstring::_Xlen();
  if ( (unsigned __int64)a1[3] < a2 )
  {
    std::wstring::_Copy(a1);
LABEL_18:
    v7 = a2 == 0;
    return !v7;
  }
  if ( a3 && a2 < 8 )
  {
    v5 = (unsigned __int64)a1[2];
    if ( a2 < v5 )
      v5 = a2;
    if ( (unsigned __int64)a1[3] >= 8 )
    {
      v6 = *a1;
      if ( v5 )
        memcpy_0(a1, *a1, 2 * v5);
      operator delete(v6);
    }
    a1[3] = (void *)7;
    a1[2] = (void *)v5;
    *((_WORD *)a1 + v5) = 0;
    goto LABEL_18;
  }
  v7 = a2 == 0;
  if ( !a2 )
  {
    if ( (unsigned __int64)a1[3] < 8 )
      v8 = a1;
    else
      v8 = *a1;
    a1[2] = 0LL;
    *v8 = 0;
    goto LABEL_18;
  }
  return !v7;
}
