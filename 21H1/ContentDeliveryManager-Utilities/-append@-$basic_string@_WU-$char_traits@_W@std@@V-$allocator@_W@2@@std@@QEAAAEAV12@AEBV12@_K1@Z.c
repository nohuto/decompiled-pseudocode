/*
 * XREFs of ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800778B4
 * Callers:
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800776A0 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x180092AE0 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_180092AE0.c)
 *     ?LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ @ 0x180095D1C (-LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x18009A5C8 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 * Callees:
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x180017090 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800176E0 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x180068BC8 (-_Grow@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_N_K_N@Z.c)
 *     memcpy_0 @ 0x1800CB698 (memcpy_0.c)
 */

void **__fastcall std::wstring::append(void **a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  _QWORD *v7; // rdi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r14
  char *v12; // rcx
  char *v13; // rax

  v4 = a2[2];
  v5 = a4;
  v7 = a2;
  if ( v4 < a3 )
    std::wstring::_Xran();
  v9 = (unsigned __int64)a1[2];
  v10 = v4 - a3;
  if ( v10 < a4 )
    v5 = v10;
  if ( ~v9 <= v5 )
    std::wstring::_Xlen();
  if ( v5 )
  {
    v11 = v9 + v5;
    if ( std::wstring::_Grow(a1, v9 + v5, 0) )
    {
      if ( v7[3] >= 8uLL )
        v7 = (_QWORD *)*v7;
      if ( (unsigned __int64)a1[3] < 8 )
        v12 = (char *)a1;
      else
        v12 = (char *)*a1;
      memcpy_0(&v12[2 * (_QWORD)a1[2]], (char *)v7 + 2 * a3, 2 * v5);
      if ( (unsigned __int64)a1[3] < 8 )
        v13 = (char *)a1;
      else
        v13 = (char *)*a1;
      a1[2] = (void *)v11;
      *(_WORD *)&v13[2 * v11] = 0;
    }
  }
  return a1;
}
