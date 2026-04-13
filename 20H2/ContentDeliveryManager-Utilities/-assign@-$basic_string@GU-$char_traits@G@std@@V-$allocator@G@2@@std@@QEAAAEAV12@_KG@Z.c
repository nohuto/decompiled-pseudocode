/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18003A1A4
 * Callers:
 *     ?_Fput@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEBD_K333@Z @ 0x1800BC360 (-_Fput@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Iput@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEAD_K@Z @ 0x1800BFBF0 (-_Iput@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?do_put@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@GO@Z @ 0x1800C4A30 (-do_put@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA_ea_1800C4A30.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180017DE0 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x180038340 (-_Grow@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA_N_K_N@Z.c)
 */

__int64 *__fastcall std::wstring::assign(__int64 *a1, unsigned __int64 a2, __int16 a3)
{
  _WORD *v6; // rax
  _WORD *v7; // rdi
  unsigned __int64 i; // rcx
  __int64 *v9; // rax

  if ( a2 == -1LL )
    std::wstring::_Xlen();
  if ( std::wstring::_Grow((void **)a1, a2, 0) )
  {
    if ( a2 == 1 )
    {
      if ( (unsigned __int64)a1[3] < 8 )
        v6 = a1;
      else
        v6 = (_WORD *)*a1;
      *v6 = a3;
    }
    else
    {
      if ( (unsigned __int64)a1[3] < 8 )
        v7 = a1;
      else
        v7 = (_WORD *)*a1;
      if ( a2 )
      {
        for ( i = a2; i; --i )
          *v7++ = a3;
      }
    }
    if ( (unsigned __int64)a1[3] < 8 )
      v9 = a1;
    else
      v9 = (__int64 *)*a1;
    a1[2] = a2;
    *((_WORD *)v9 + a2) = 0;
  }
  return a1;
}
