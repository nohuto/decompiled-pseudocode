/*
 * XREFs of ?do_get@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1800C30F0
 * Callers:
 *     <none>
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18003A24C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18003C244 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?_Getmfld@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0_NAEAVios_base@2@PEAG@Z @ 0x1800BDFB4 (-_Getmfld@-$money_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$basic_.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800CD721 (--3@YAXPEAX@Z_0.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::money_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8)
{
  unsigned __int64 v11; // rsi
  char v12; // al
  unsigned __int64 v13; // rbx
  _WORD *v14; // rax
  void **v15; // rax
  _WORD *v16; // rcx
  void **v17; // rax
  _WORD *v18; // rdx
  _WORD v20[12]; // [rsp+8h] [rbp-81h]
  __int64 v21; // [rsp+40h] [rbp-49h]
  void *v22[3]; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-29h]
  __int16 v24[12]; // [rsp+68h] [rbp-21h] BYREF

  v21 = -2LL;
  std::money_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getmfld(
    a1,
    (char *)v22,
    a3,
    a4,
    a5,
    a6,
    v24);
  v11 = (unsigned __int64)v22[2];
  v12 = std::istreambuf_iterator<wchar_t>::equal((__int64)a3, a4);
  v13 = 0LL;
  if ( v12 )
    *a7 |= 1u;
  if ( v11 )
  {
    if ( v11 > *(_QWORD *)(a8 + 16) )
    {
      std::wstring::append((void **)a8, v11 - *(_QWORD *)(a8 + 16), 0);
    }
    else
    {
      *(_QWORD *)(a8 + 16) = v11;
      if ( *(_QWORD *)(a8 + 24) < 8uLL )
        v14 = (_WORD *)a8;
      else
        v14 = *(_WORD **)a8;
      v14[v11] = 0;
    }
    v15 = v22;
    if ( v23 >= 0x10 )
      v15 = (void **)v22[0];
    if ( *(_BYTE *)v15 == 45 )
    {
      if ( *(_QWORD *)(a8 + 24) < 8uLL )
        v16 = (_WORD *)a8;
      else
        v16 = *(_WORD **)a8;
      *v16 = v24[10];
      v13 = 1LL;
    }
    while ( v13 < v11 )
    {
      v17 = v22;
      if ( v23 >= 0x10 )
        v17 = (void **)v22[0];
      if ( *(_QWORD *)(a8 + 24) < 8uLL )
        v18 = (_WORD *)a8;
      else
        v18 = *(_WORD **)a8;
      v18[v13] = v20[*((char *)v17 + v13)];
      ++v13;
    }
  }
  else
  {
    *a7 |= 2u;
  }
  *a2 = *(_OWORD *)a3;
  if ( v23 >= 0x10 )
    operator delete(v22[0]);
  return a2;
}
