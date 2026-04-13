/*
 * XREFs of _Getcvt @ 0x1800AF67C
 * Callers:
 *     ?_Getcat@?$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x180027BFC (-_Getcat@-$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Init@?$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18003A090 (-_Init@-$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ?_Getcat@?$codecvt@GDH@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x180047E78 (-_Getcat@-$codecvt@GDH@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ??0?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA@XZ @ 0x18004C014 (--0-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@2@@std.c)
 *     ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180094C20 (-_Init@-$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ??$_Getvals@_W@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@IEAAX_WAEBV_Locinfo@1@@Z @ 0x1800AB2D8 (--$_Getvals@_W@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@IEAAX_WA.c)
 *     _Mbrtowc @ 0x1800AE190 (_Mbrtowc.c)
 *     ?_Init@?$numpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x1800B2C74 (-_Init@-$numpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ??$_Getvals@G@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@IEAAXGAEBV_Locinfo@1@@Z @ 0x1800B8488 (--$_Getvals@G@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@IEAAXGAEBV_L.c)
 *     ?_Getcat@?$codecvt@_WDH@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800BAB30 (-_Getcat@-$codecvt@_WDH@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Init@?$_Mpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x1800BD644 (-_Init@-$_Mpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ?_Init@?$_Mpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x1800BD7F0 (-_Init@-$_Mpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ?_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800BE1E8 (-_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800BEE80 (-_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ??$_Getvals@D@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEAAXDAEBV_Locinfo@1@@Z @ 0x1800C4A6C (--$_Getvals@D@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@IEAAXDAEBV_L.c)
 *     ?_Init@?$_Mpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x1800C72F0 (-_Init@-$_Mpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 * Callees:
 *     _GetLocaleName @ 0x1800B7588 (_GetLocaleName.c)
 */

_Cvtvec *__cdecl Getcvt(_Cvtvec *__return_ptr retstr)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  void *LocaleName; // rbx
  signed int v5; // ebx
  __int64 v6; // rsi

  *(_OWORD *)&retstr->_Page = 0LL;
  *(_OWORD *)&retstr->_Isleadbyte[4] = 0LL;
  *(_OWORD *)&retstr->_Isleadbyte[20] = 0LL;
  retstr->_Page = *(_DWORD *)(___lc_handle_func() + 8);
  retstr->_Mbcurmax = ___lc_codepage_func();
  retstr->_Isclocale = ___mb_cur_max_func();
  LocaleName = (void *)GetLocaleName(2LL, v2, v3);
  *(_DWORD *)retstr->_Isleadbyte = LocaleName == 0LL;
  free(LocaleName);
  if ( LocaleName )
  {
    v5 = 0;
    v6 = 0LL;
    do
    {
      if ( _ismbblead(v5) )
        retstr->_Isleadbyte[(v6 >> 3) + 4] |= 1 << (v5 & 7);
      ++v5;
      ++v6;
    }
    while ( v5 < 256 );
  }
  return retstr;
}
