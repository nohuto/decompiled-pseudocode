/*
 * XREFs of ?to_bytes@?$wstring_convert@V?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBG0@Z @ 0x18019CC30
 * Callers:
 *     ??$AddProperty@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18019A574 (--$AddProperty@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@CVisualTreeDumpCon.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x180073748 (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800CC9BC (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800EBD6B (memcpy_0.c)
 *     ?_Raise@exception@stdext@@QEBAXXZ @ 0x18019C2D4 (-_Raise@exception@stdext@@QEBAXXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18019C3B8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18019C434 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 */

__int64 __fastcall std::wstring_convert<std::codecvt_utf8_utf16<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::to_bytes(
        __int64 a1,
        __int64 a2,
        char *a3,
        char *a4)
{
  __int64 v8; // rdi
  char *v9; // rcx
  _QWORD *v10; // r15
  int v11; // eax
  __int128 v12; // xmm0
  __m128i v13; // xmm1
  _QWORD *v15; // rsi
  unsigned __int64 v16; // r14
  void *v17; // rax
  char *v18; // [rsp+40h] [rbp-59h] BYREF
  void **v19; // [rsp+48h] [rbp-51h] BYREF
  const char *v20; // [rsp+50h] [rbp-49h]
  unsigned __int64 v21; // [rsp+58h] [rbp-41h] BYREF
  _QWORD v22[2]; // [rsp+60h] [rbp-39h] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp-29h]
  unsigned __int64 v24; // [rsp+78h] [rbp-21h]
  __int128 Src; // [rsp+80h] [rbp-19h] BYREF
  __m128i si128; // [rsp+90h] [rbp-9h]

  v18 = a3;
  v8 = 15LL;
  v23 = 0LL;
  v24 = 15LL;
  LOBYTE(v22[0]) = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOBYTE(Src) = 0;
  if ( !*(_BYTE *)(a1 + 104) )
    *(_QWORD *)(a1 + 96) = 0LL;
  std::string::append((__int64)v22);
  v9 = v18;
  *(_QWORD *)(a1 + 112) = 0LL;
  if ( v9 == a4 )
  {
LABEL_19:
    v12 = Src;
    LOBYTE(Src) = 0;
    v13 = si128;
    *(_OWORD *)a2 = v12;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    *(__m128i *)(a2 + 16) = v13;
    goto LABEL_20;
  }
  while ( 1 )
  {
    v10 = v22;
    if ( v24 >= 0x10 )
      v10 = (_QWORD *)v22[0];
    v11 = std::codecvt<unsigned short,char,_Mbstatet>::out(
            *(_QWORD *)(a1 + 8),
            a1 + 96,
            v9,
            a4,
            &v18,
            v10,
            (char *)v10 + v23,
            &v21);
    if ( v11 < 0 )
    {
LABEL_31:
      if ( !*(_BYTE *)(a1 + 105) )
      {
        v20 = "bad conversion";
        v19 = &std::range_error::`vftable';
        stdext::exception::_Raise((stdext::exception *)&v19);
      }
      goto LABEL_22;
    }
    if ( v11 <= 1 )
      break;
    if ( v11 != 3 )
      goto LABEL_31;
    v9 = v18;
    while ( v9 != a4 )
    {
      std::string::push_back(&Src, *v9);
      v9 = v18 + 2;
      v18 += 2;
    }
LABEL_18:
    *(_QWORD *)(a1 + 112) = (v9 - a3) >> 1;
    if ( v9 == a4 )
      goto LABEL_19;
  }
  if ( (unsigned __int64)v10 < v21 )
  {
    std::string::append((void **)&Src, v10, v21 - (_QWORD)v10);
LABEL_17:
    v9 = v18;
    goto LABEL_18;
  }
  if ( v23 < 0x10 )
  {
    std::string::append((__int64)v22);
    goto LABEL_17;
  }
  if ( !*(_BYTE *)(a1 + 105) )
  {
    v20 = "bad conversion";
    v19 = &std::range_error::`vftable';
    stdext::exception::_Raise((stdext::exception *)&v19);
  }
LABEL_22:
  *(_QWORD *)(a2 + 16) = 0LL;
  v15 = (_QWORD *)(a1 + 32);
  *(_QWORD *)(a2 + 24) = 0LL;
  v16 = v15[2];
  if ( v15[3] >= 0x10uLL )
    v15 = (_QWORD *)*v15;
  if ( v16 >= 0x10 )
  {
    v8 = v16 | 0xF;
    if ( (v16 | 0xF) > 0x7FFFFFFFFFFFFFFFLL )
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    v17 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(v8 + 1);
    *(_QWORD *)a2 = v17;
    memcpy_0(v17, v15, v16 + 1);
  }
  else
  {
    *(_OWORD *)a2 = *(_OWORD *)v15;
  }
  *(_QWORD *)(a2 + 16) = v16;
  *(_QWORD *)(a2 + 24) = v8;
LABEL_20:
  std::string::_Tidy_deallocate((__int64)&Src);
  std::string::_Tidy_deallocate((__int64)v22);
  return a2;
}
