/*
 * XREFs of ?_Getcat@?$moneypunct@D$0A@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800C7DAC
 * Callers:
 *     ??$use_facet@V?$moneypunct@D$0A@@std@@@std@@YAAEBV?$moneypunct@D$0A@@0@AEBVlocale@0@@Z @ 0x1800C741C (--$use_facet@V-$moneypunct@D$0A@@std@@@std@@YAAEBV-$moneypunct@D$0A@@0@AEBVlocale@0@@Z.c)
 * Callees:
 *     ??0_Locinfo@std@@QEAA@PEBD@Z @ 0x180029AC8 (--0_Locinfo@std@@QEAA@PEBD@Z.c)
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x180029B68 (--1_Locinfo@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800AFF68 (--2@YAPEAX_K@Z.c)
 *     ?_Init@?$_Mpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x1800C9500 (-_Init@-$_Mpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::moneypunct<char,0>::_Getcat(_QWORD *a1, __int64 *a2)
{
  char v4; // si
  _DWORD *v5; // rbx
  __int64 v6; // rax
  const char *v7; // rdx
  std::_Locinfo *v8; // rax
  __int64 v9; // r8
  _BYTE v11[128]; // [rsp+28h] [rbp-80h] BYREF

  v4 = 0;
  if ( a1 && !*a1 )
  {
    v5 = operator new(0x78uLL);
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
        v7 = (const char *)&word_1801029D0;
      }
      v8 = std::_Locinfo::_Locinfo((std::_Locinfo *)v11, v7);
      v4 = 1;
      v5[2] = 0;
      *(_QWORD *)v5 = &std::moneypunct<char,1>::`vftable';
      *((_BYTE *)v5 + 68) = 0;
      LOBYTE(v9) = 1;
      std::_Mpunct<char>::_Init(v5, v8, v9);
      *(_QWORD *)v5 = &std::moneypunct<char,1>::`vftable';
    }
    else
    {
      v5 = 0LL;
    }
    *a1 = v5;
    if ( (v4 & 1) != 0 )
      std::_Locinfo::~_Locinfo((std::_Locinfo *)v11);
  }
  return 3LL;
}
