/*
 * XREFs of ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x180068BC8
 * Callers:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180068AD4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180068CAC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800776A0 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800778B4 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z @ 0x180078134 (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z.c)
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0AEBV12@00@Z @ 0x18007831C (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0AEBV12@00.c)
 *     ?GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@PEB_W0@Z @ 0x1800877D8 (-GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA-AVHString@Wrapper.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18009459C (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x180094A54 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x18009A5C8 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800176E0 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K0@Z @ 0x180068D94 (-_Copy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K0@Z.c)
 *     memcpy_0 @ 0x1800CB698 (memcpy_0.c)
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
