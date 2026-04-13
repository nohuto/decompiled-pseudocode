/*
 * XREFs of ?_Getcat@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800C804C
 * Callers:
 *     ??$use_facet@V?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800C75EC (--$use_facet@V-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEB.c)
 * Callees:
 *     ??0_Locinfo@std@@QEAA@PEBD@Z @ 0x180029EE8 (--0_Locinfo@std@@QEAA@PEBD@Z.c)
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x180029F88 (--1_Locinfo@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800B03B8 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::money_put<char,std::ostreambuf_iterator<char>>::_Getcat(_QWORD *a1, __int64 *a2)
{
  char v4; // si
  _DWORD *v5; // rbx
  __int64 v6; // rax
  const char *v7; // rdx
  _BYTE v9[104]; // [rsp+28h] [rbp-70h] BYREF

  v4 = 0;
  if ( a1 && !*a1 )
  {
    v5 = operator new(0x10uLL);
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
      std::_Locinfo::_Locinfo((std::_Locinfo *)v9, v7);
      v4 = 1;
      v5[2] = 0;
      *(_QWORD *)v5 = &std::money_put<char,std::ostreambuf_iterator<char>>::`vftable';
    }
    else
    {
      v5 = 0LL;
    }
    *a1 = v5;
    if ( (v4 & 1) != 0 )
      std::_Locinfo::~_Locinfo((std::_Locinfo *)v9);
  }
  return 3LL;
}
