/*
 * XREFs of ?_Getcat@?$moneypunct@_W$00@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800BD6EC
 * Callers:
 *     ??$use_facet@V?$moneypunct@_W$00@std@@@std@@YAAEBV?$moneypunct@_W$00@0@AEBVlocale@0@@Z @ 0x1800BB7DC (--$use_facet@V-$moneypunct@_W$00@std@@@std@@YAAEBV-$moneypunct@_W$00@0@AEBVlocale@0@@Z.c)
 * Callees:
 *     ??0_Locinfo@std@@QEAA@PEBD@Z @ 0x180029AC8 (--0_Locinfo@std@@QEAA@PEBD@Z.c)
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x180029B68 (--1_Locinfo@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800AFF68 (--2@YAPEAX_K@Z.c)
 *     ?_Init@?$_Mpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x1800BFA00 (-_Init@-$_Mpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::moneypunct<wchar_t,1>::_Getcat(_QWORD *a1, __int64 *a2)
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
      *(_QWORD *)v5 = &std::moneypunct<wchar_t,1>::`vftable';
      *((_BYTE *)v5 + 68) = 1;
      LOBYTE(v9) = 1;
      std::_Mpunct<wchar_t>::_Init(v5, v8, v9);
      *(_QWORD *)v5 = &std::moneypunct<wchar_t,1>::`vftable';
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
