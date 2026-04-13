/*
 * XREFs of ??$_Maklocstr@G@std@@YAPEAGPEBDPEAGAEBU_Cvtvec@@@Z @ 0x18002A900
 * Callers:
 *     ?_Init@?$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18003CD70 (-_Init@-$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180097810 (-_Init@-$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ??$_Getvals@G@?$_Mpunct@G@std@@IEAAXGPEBUlconv@@@Z @ 0x1800BCAA4 (--$_Getvals@G@-$_Mpunct@G@std@@IEAAXGPEBUlconv@@@Z.c)
 *     ??$_Getvals@G@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@IEAAXGAEBV_Locinfo@1@@Z @ 0x1800BCB98 (--$_Getvals@G@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@IEAAXGAEBV_L.c)
 * Callees:
 *     _Mbrtowc @ 0x1800B28A0 (_Mbrtowc.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800B410C (--_U@YAPEAX_K@Z.c)
 */

wchar_t *__fastcall std::_Maklocstr<unsigned short>(char *a1, __int64 a2, const _Cvtvec *a3)
{
  __int64 v4; // rbx
  const char *v5; // rsi
  bool v6; // zf
  size_t v7; // rbx
  __int64 v8; // rdi
  size_t v9; // rbp
  const char *v10; // r14
  int v11; // eax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  wchar_t *v14; // rbp
  wchar_t *i; // r14
  int v16; // eax
  wchar_t *result; // rax
  mbstate_t v18; // [rsp+30h] [rbp-48h] BYREF
  wchar_t v19; // [rsp+80h] [rbp+8h] BYREF
  mbstate_t v20; // [rsp+98h] [rbp+20h] BYREF

  v20._Wchar = 0;
  v4 = -1LL;
  v5 = a1;
  do
    ++v4;
  while ( a1[v4] );
  v6 = v4 == -1;
  v7 = v4 + 1;
  v8 = 0LL;
  v9 = v7;
  v10 = a1;
  if ( !v6 )
  {
    do
    {
      v11 = Mbrtowc(&v19, v10, v9, &v20, a3);
      if ( v11 <= 0 )
        break;
      ++v8;
      v10 += v11;
      v9 -= v11;
    }
    while ( v9 );
  }
  v12 = v8 + 1;
  v13 = 2 * v12;
  if ( !is_mul_ok(v12, 2uLL) )
    v13 = -1LL;
  v18._Wchar = 0;
  v14 = (wchar_t *)operator new[](v13);
  for ( i = v14; v12; --v12 )
  {
    v16 = Mbrtowc(i, v5, v7, &v18, a3);
    if ( v16 <= 0 )
      break;
    ++i;
    v5 += v16;
  }
  result = v14;
  *i = 0;
  return result;
}
