/*
 * XREFs of ??$_Parse_fp_with_locale@$0A@@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AU_Num_get_parse_result@1@QEADHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@1@1AEBVlocale@1@@Z @ 0x1800121B0
 * Callers:
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 *     sub_18001D3F0 @ 0x18001D3F0 (sub_18001D3F0.c)
 *     sub_1800EABCC @ 0x1800EABCC (sub_1800EABCC.c)
 *     sub_1800EC88C @ 0x1800EC88C (sub_1800EC88C.c)
 * Callees:
 *     sub_18001F490 @ 0x18001F490 (sub_18001F490.c)
 *     sub_180020090 @ 0x180020090 (sub_180020090.c)
 *     sub_180021FB0 @ 0x180021FB0 (sub_180021FB0.c)
 *     sub_1800445F8 @ 0x1800445F8 (sub_1800445F8.c)
 *     sub_180047420 @ 0x180047420 (sub_180047420.c)
 *     sub_180048714 @ 0x180048714 (sub_180048714.c)
 *     sub_180048B1C @ 0x180048B1C (sub_180048B1C.c)
 *     sub_180048E60 @ 0x180048E60 (sub_180048E60.c)
 *     sub_18004BB48 @ 0x18004BB48 (sub_18004BB48.c)
 *     sub_18004BBD0 @ 0x18004BBD0 (sub_18004BBD0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D5E18 @ 0x1800D5E18 (sub_1800D5E18.c)
 *     sub_1800D672C @ 0x1800D672C (sub_1800D672C.c)
 *     sub_1800DB7BC @ 0x1800DB7BC (sub_1800DB7BC.c)
 *     sub_1800DC4F8 @ 0x1800DC4F8 (sub_1800DC4F8.c)
 *     sub_1800E14C4 @ 0x1800E14C4 (sub_1800E14C4.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Parse_fp_with_locale<0>(
        __int64 a1,
        char a2,
        __int64 a3,
        int a4,
        int a5,
        __int128 *a6,
        __int128 *a7,
        __int128 *a8,
        void *a9,
        _QWORD *a10,
        _QWORD *a11,
        _QWORD *a12,
        _QWORD *a13)
{
  unsigned int v13; // r12d
  void *v15; // rbx
  signed int v16; // r15d
  __int64 v17; // rax
  void *v18; // rdi
  unsigned int i; // r8d
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  void *v23; // rdi
  __int64 v24; // rsi
  void *v25; // rax
  LPVOID v26; // rax
  void *v27; // rax
  LPVOID v28; // rax
  void *v29; // rax
  __int64 v31; // rbx
  bool v32; // sf
  void *v33; // r9
  void *v34; // rbx
  int v35; // eax
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // r14
  void *v39; // rax
  void *v40; // rax
  void *v41; // rax
  LPVOID v42; // [rsp+48h] [rbp-B8h] BYREF
  void *Src; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v45; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+70h] [rbp-90h] BYREF
  PROPVARIANT pvar[2]; // [rsp+80h] [rbp-80h] BYREF
  void *v48; // [rsp+90h] [rbp-70h]
  __int128 v49; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v50; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD *v51; // [rsp+C0h] [rbp-40h]
  _QWORD *v52; // [rsp+C8h] [rbp-38h]
  _QWORD *v53; // [rsp+D0h] [rbp-30h]
  _QWORD *v54; // [rsp+D8h] [rbp-28h]
  __int128 v55; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v56; // [rsp+F0h] [rbp-10h]
  void *retaddr; // [rsp+148h] [rbp+48h]

  v13 = a3;
  *(_QWORD *)&v49 = a7;
  v53 = a10;
  v52 = a11;
  v54 = a12;
  v51 = a13;
  v42 = 0LL;
  v15 = 0LL;
  pv = 0LL;
  Src = 0LL;
  if ( a4 == 1 )
  {
    v16 = sub_180048714(a9);
    if ( v16 < 0 )
      goto LABEL_41;
    *(_QWORD *)&v49 = 0LL;
    v31 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)&v49 = v31;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
    if ( (unsigned int)sub_1800445F8(a9) && (unsigned int)sub_1800DC4F8(v31) )
      v16 = (unsigned int)sub_1800DB7BC(v31, a9, &v42, 0LL) != 0 ? 0x88890008 : 0;
    else
      v16 = sub_180048714(a9);
    if ( v31 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    v32 = v16 < 0;
LABEL_36:
    if ( !v32 )
    {
      v15 = 0LL;
      v16 = sub_180048714(0LL);
LABEL_23:
      if ( v16 >= 0 )
      {
        v26 = v42;
        v42 = 0LL;
        *v51 = v26;
        v27 = v15;
        v15 = 0LL;
        *v52 = v27;
        v28 = pv;
        pv = 0LL;
        *v53 = v28;
        v29 = Src;
        Src = 0LL;
        *v54 = v29;
      }
      goto LABEL_25;
    }
LABEL_41:
    v15 = 0LL;
    goto LABEL_25;
  }
  if ( (_DWORD)a3 == 1 )
  {
    v49 = *a7;
    v16 = sub_1800D672C(a1, a9, a3, &v49);
    if ( v16 < 0 )
      goto LABEL_25;
    v16 = sub_180048714(v42);
    sub_18004BBD0(pv);
    if ( v16 < 0 )
      goto LABEL_25;
    v16 = sub_180048714(v33);
    v32 = v16 < 0;
    goto LABEL_36;
  }
  if ( a2 )
  {
    v45 = *a8;
    *(_OWORD *)pvar = *a7;
    v50 = *a6;
    v16 = sub_1800D5E18(a1, (unsigned int)a3, a9, &v50, pvar, &v45, 1, &v42);
    if ( v16 < 0 )
      goto LABEL_25;
    *(_QWORD *)&v45 = 0LL;
    pvar[0] = 0LL;
    v36 = 0LL;
    v46 = 0LL;
    v37 = 0LL;
    *(_QWORD *)&v50 = 0LL;
    v16 = sub_18001F490(v42, 0);
    v38 = v45;
    if ( v16 < 0 )
      goto LABEL_69;
    v55 = *(_OWORD *)v49;
    v16 = sub_180048E60(a1, (unsigned int)&v55, v13, v45, (__int64)pvar);
    if ( v16 < 0 )
      goto LABEL_69;
    v55 = *(_OWORD *)v49;
    v16 = sub_180048B1C(a1, (unsigned int)&v55, v13, pvar[0], (__int64)&v50, (__int64)&v46);
    if ( v16 < 0 )
    {
      v37 = v50;
    }
    else
    {
      v39 = (void *)(*(__int64 (__fastcall **)(PROPVARIANT))(*(_QWORD *)pvar[0] + 40LL))(pvar[0]);
      v16 = sub_180048714(v39);
      v37 = v50;
      if ( v16 >= 0 )
      {
        v40 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v50 + 40LL))(v50);
        v16 = sub_180048714(v40);
        v36 = v46;
        if ( v16 >= 0 )
        {
          if ( v46 )
            v41 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 40LL))(v46);
          else
            v41 = Src;
          v16 = sub_180048714(v41);
          v15 = 0LL;
        }
        goto LABEL_69;
      }
    }
    v36 = v46;
LABEL_69:
    if ( v37 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    if ( v36 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    if ( pvar[0] )
      (*(void (__fastcall **)(PROPVARIANT))(*(_QWORD *)pvar[0] + 16LL))(pvar[0]);
    if ( v38 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    goto LABEL_23;
  }
  v49 = *a8;
  v16 = sub_180021FB0(a1, a3, (unsigned int)&v49, (unsigned int)&v42, (__int64)&Src, 0LL, 0LL);
  if ( v16 >= 0 )
  {
    v17 = *(_QWORD *)a8 - 0x4FD1B4939E90EA20LL;
    if ( *(_QWORD *)a8 == 0x4FD1B4939E90EA20LL )
      v17 = *((_QWORD *)a8 + 1) + 0x30A9569EEC81575FLL;
    if ( !v17 )
    {
      pvar[0] = 0LL;
      v18 = *(void **)(a1 + 16);
      pvar[0] = v18;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v18 + 8LL))(v18);
      v49 = *a6;
      v16 = sub_180020090(a1, v13, &v49, &pv);
      if ( v18 )
      {
        pvar[0] = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
    if ( v16 >= 0 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 8688));
      *(_QWORD *)&v49 = a1 + 8688;
      v45 = *a6;
      for ( i = 0; i < 9; ++i )
      {
        v20 = qword_18019D7B0[2 * i] - v45;
        if ( !v20 )
          v20 = qword_18019D7B0[2 * i + 1] - *((_QWORD *)&v45 + 1);
        if ( !v20 )
        {
          v55 = xmmword_1801601C0;
          v21 = 2;
          if ( v13 == 3 )
            v21 = 602;
          v56 = i + v21;
          *(_OWORD *)pvar = 0LL;
          v48 = 0LL;
          *(_QWORD *)&v45 = pvar;
          BYTE8(v45) = 1;
          v22 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *, _QWORD *))(**(_QWORD **)(a1 + 40) + 40LL))(
                  *(_QWORD *)(a1 + 40),
                  &v55,
                  pvar,
                  qword_18019D7B0);
          if ( v22 < 0 )
          {
            sub_18004BD84(
              retaddr,
              7032LL,
              "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (unsigned int)v22);
            sub_1800E14C4(&v45);
            if ( a1 != -8688 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 8688));
            goto LABEL_21;
          }
          if ( LOWORD(pvar[0]) == 65 && (unsigned int)sub_180047420(pvar) )
          {
            v34 = v48;
            if ( (unsigned int)sub_18004BB48(v48) )
            {
              sub_18004BD84(
                retaddr,
                7036LL,
                "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                2290679816LL);
              sub_1800E14C4(&v45);
              if ( a1 != -8688 )
                goto LABEL_20;
              goto LABEL_21;
            }
            v35 = sub_180048714(v34);
            if ( v35 < 0 )
            {
              sub_18004BD84(
                retaddr,
                7038LL,
                "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                (unsigned int)v35);
              sub_1800E14C4(&v45);
              if ( a1 != -8688 )
                LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 8688));
              goto LABEL_21;
            }
          }
          sub_1800E14C4(&v45);
          if ( a1 == -8688 )
            goto LABEL_21;
          goto LABEL_20;
        }
      }
      sub_18004BD84(
        retaddr,
        7025LL,
        "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        2147943568LL);
      if ( a1 != -8688 )
LABEL_20:
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 8688));
LABEL_21:
      v23 = Src;
      v24 = *((unsigned __int16 *)Src + 8);
      v25 = CoTaskMemAlloc(v24 + 18);
      v15 = v25;
      if ( v25 )
      {
        memcpy(v25, v23, v24 + 18);
        v16 = 0;
      }
      else
      {
        v16 = -2147024882;
      }
      goto LABEL_23;
    }
  }
LABEL_25:
  CoTaskMemFree(Src);
  Src = 0LL;
  CoTaskMemFree(pv);
  pv = 0LL;
  CoTaskMemFree(v15);
  CoTaskMemFree(v42);
  v42 = 0LL;
  return (unsigned int)v16;
}
