/*
 * XREFs of ?_Getcat@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800BDE9C
 * Callers:
 *     ??$use_facet@V?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800BC12C (--$use_facet@V-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV.c)
 * Callees:
 *     ??0_Locinfo@std@@QEAA@PEBD@Z @ 0x180029EE8 (--0_Locinfo@std@@QEAA@PEBD@Z.c)
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x180029F88 (--1_Locinfo@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800B03B8 (--2@YAPEAX_K@Z.c)
 *     ?_Init@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@IEAAXAEBV_Locinfo@2@@Z @ 0x1800BFFFC (-_Init@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@IEAAXAEBV_Locinfo@2.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getcat(
        _QWORD *a1,
        __int64 *a2)
{
  char v4; // si
  _DWORD *v5; // rbx
  __int64 v6; // rax
  const char *v7; // rdx
  std::_Locinfo *v8; // rax
  _BYTE v10[128]; // [rsp+28h] [rbp-80h] BYREF

  v4 = 0;
  if ( a1 && !*a1 )
  {
    v5 = operator new(0x60uLL);
    if ( v5 )
    {
      v6 = *a2;
      if ( *a2 )
      {
        v7 = *(const char **)(v6 + 40);
        if ( !v7 )
          v7 = (const char *)(v6 + 48);
      }
      else
      {
        v7 = (const char *)&word_180103AD0;
      }
      v8 = std::_Locinfo::_Locinfo((std::_Locinfo *)v10, v7);
      v4 = 1;
      v5[2] = 0;
      *(_QWORD *)v5 = &std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::`vftable';
      std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Init(v5, v8);
    }
    else
    {
      v5 = 0LL;
    }
    *a1 = v5;
    if ( (v4 & 1) != 0 )
      std::_Locinfo::~_Locinfo((std::_Locinfo *)v10);
  }
  return 5LL;
}
