/*
 * XREFs of ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18009718C
 * Callers:
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x1800956D0 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_1800956D0.c)
 *     ?do_get@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x1800C5850 (-do_get@-$money_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@M_ea_1800C5850.c)
 *     ?do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x1800C7170 (-do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$ostre.c)
 *     ?do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z @ 0x1800C73B0 (-do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@M_ea_1800C73B0.c)
 *     ?do_put@?$time_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEBUtm@@DD@Z @ 0x1800C8850 (-do_put@-$time_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$ostreambu.c)
 *     ?do_transform@?$collate@_W@std@@MEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@PEB_W0@Z @ 0x1800C8AD0 (-do_transform@-$collate@_W@std@@MEBA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180018A54 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x18006B848 (-_Grow@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_N_K_N@Z.c)
 */

void **__fastcall std::wstring::append(void **a1, unsigned __int64 a2, __int16 a3)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v7; // rbp
  void *v8; // rcx
  _WORD *v9; // rax
  _WORD *v10; // rax
  _WORD *v11; // rdi
  unsigned __int64 i; // rcx
  _WORD *v13; // rax

  v5 = (unsigned __int64)a1[2];
  if ( ~v5 <= a2 )
    std::wstring::_Xlen();
  if ( a2 )
  {
    v7 = v5 + a2;
    if ( std::wstring::_Grow(a1, v5 + a2, 0) )
    {
      v8 = a1[2];
      if ( a2 == 1 )
      {
        if ( (unsigned __int64)a1[3] < 8 )
          v9 = a1;
        else
          v9 = *a1;
        v9[(_QWORD)v8] = a3;
      }
      else
      {
        if ( (unsigned __int64)a1[3] < 8 )
          v10 = a1;
        else
          v10 = *a1;
        v11 = &v10[(_QWORD)v8];
        for ( i = a2; i; --i )
          *v11++ = a3;
      }
      if ( (unsigned __int64)a1[3] < 8 )
        v13 = a1;
      else
        v13 = *a1;
      a1[2] = (void *)v7;
      v13[v7] = 0;
    }
  }
  return a1;
}
