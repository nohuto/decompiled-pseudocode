/*
 * XREFs of ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180097810
 * Callers:
 *     ?_Getcat@?$numpunct@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800979F8 (-_Getcat@-$numpunct@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800C3590 (-_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 * Callees:
 *     ??$_Maklocstr@G@std@@YAPEAGPEBDPEAGAEBU_Cvtvec@@@Z @ 0x18002A900 (--$_Maklocstr@G@std@@YAPEAGPEBDPEAGAEBU_Cvtvec@@@Z.c)
 *     _Mbrtowc @ 0x1800B28A0 (_Mbrtowc.c)
 *     _Getcvt @ 0x1800B3D8C (_Getcvt.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800B410C (--_U@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 */

wchar_t *__fastcall std::numpunct<wchar_t>::_Init(mbstate_t a1, __int64 a2, char a3)
{
  struct lconv *v5; // r14
  _Cvtvec *v6; // rax
  const unsigned __int16 *grouping; // rdi
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  _BYTE *v10; // rax
  signed __int64 v11; // rdx
  wchar_t *result; // rax
  char v13[8]; // [rsp+30h] [rbp-A8h] BYREF
  wchar_t v14; // [rsp+38h] [rbp-A0h] BYREF
  mbstate_t v15; // [rsp+40h] [rbp-98h] BYREF
  __int64 v16; // [rsp+48h] [rbp-90h]
  _Cvtvec v17; // [rsp+50h] [rbp-88h] BYREF
  _OWORD v18[3]; // [rsp+80h] [rbp-58h] BYREF

  v16 = -2LL;
  v15 = a1;
  v5 = localeconv();
  v6 = Getcvt(&v17);
  v18[0] = *(_OWORD *)&v6->_Page;
  v18[1] = *(_OWORD *)&v6->_Isleadbyte[4];
  v18[2] = *(_OWORD *)&v6->_Isleadbyte[20];
  *(_QWORD *)(*(_QWORD *)&a1 + 16LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)&a1 + 32LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)&a1 + 40LL) = 0LL;
  Getcvt(&v17);
  grouping = &word_180106598;
  if ( !a3 )
    grouping = (const unsigned __int16 *)v5->grouping;
  v8 = -1LL;
  do
    ++v8;
  while ( *((_BYTE *)grouping + v8) );
  v9 = v8 + 1;
  try
  {
    v10 = operator new[](v9);
    if ( v9 )
    {
      v11 = v10 - (_BYTE *)grouping;
      do
      {
        *((_BYTE *)grouping + v11) = *(_BYTE *)grouping;
        grouping = (const unsigned __int16 *)((char *)grouping + 1);
        --v9;
      }
      while ( v9 );
    }
    *(_QWORD *)(*(_QWORD *)&a1 + 16LL) = v10;
    *(_QWORD *)(*(_QWORD *)&a1 + 32LL) = std::_Maklocstr<unsigned short>("false", 0LL, (const _Cvtvec *)v18);
    *(_QWORD *)(*(_QWORD *)&a1 + 40LL) = std::_Maklocstr<unsigned short>("true", 0LL, (const _Cvtvec *)v18);
  }
  catch ( ... )
  {
    std::numpunct<wchar_t>::_Tidy(*(void ***)&v15);
    throw;
  }
  if ( a3 )
  {
    v13[0] = 46;
    v14 = 0;
    v15._Wchar = 0;
    Mbrtowc(&v14, v13, 1uLL, &v15, (const _Cvtvec *)v18);
    *(_WORD *)(*(_QWORD *)&a1 + 24LL) = v14;
    v13[0] = 44;
    v14 = 0;
    v15._Wchar = 0;
    Mbrtowc(&v14, v13, 1uLL, &v15, (const _Cvtvec *)v18);
    result = (wchar_t *)v14;
    *(_WORD *)(*(_QWORD *)&a1 + 26LL) = v14;
  }
  else
  {
    *(_WORD *)(*(_QWORD *)&a1 + 24LL) = *v5->_W_decimal_point;
    result = v5->_W_thousands_sep;
    *(_WORD *)(*(_QWORD *)&a1 + 26LL) = *result;
  }
  return result;
}
