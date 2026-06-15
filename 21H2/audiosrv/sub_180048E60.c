/*
 * XREFs of sub_180048E60 @ 0x180048E60
 * Callers:
 *     ??$_Parse_fp_with_locale@$0A@@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AU_Num_get_parse_result@1@QEADHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@1@1AEBVlocale@1@@Z @ 0x1800121B0 (--$_Parse_fp_with_locale@$0A@@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@.c)
 *     sub_180049150 @ 0x180049150 (sub_180049150.c)
 *     sub_1800D5E18 @ 0x1800D5E18 (sub_1800D5E18.c)
 *     sub_1800DE2A0 @ 0x1800DE2A0 (sub_1800DE2A0.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18001F490 @ 0x18001F490 (sub_18001F490.c)
 *     sub_18001F7C0 @ 0x18001F7C0 (sub_18001F7C0.c)
 *     sub_180022F30 @ 0x180022F30 (sub_180022F30.c)
 *     sub_1800485D0 @ 0x1800485D0 (sub_1800485D0.c)
 *     sub_180048714 @ 0x180048714 (sub_180048714.c)
 *     sub_180048DA8 @ 0x180048DA8 (sub_180048DA8.c)
 *     sub_180048E18 @ 0x180048E18 (sub_180048E18.c)
 *     sub_18004BB48 @ 0x18004BB48 (sub_18004BB48.c)
 *     sub_18004BBD0 @ 0x18004BBD0 (sub_18004BBD0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18011C680 @ 0x18011C680 (sub_18011C680.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180048E60(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 *a5)
{
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // edi
  unsigned __int16 *v13; // rax
  bool v14; // bl
  void *v15; // rdx
  int v16; // eax
  __int64 v17; // rbx
  void *v18; // rcx
  int v19; // eax
  __int64 v20; // rdi
  LPVOID v21; // rcx
  __int64 v22; // r15
  int v23; // eax
  __int16 *v24; // rax
  __int64 v25; // rbx
  __int64 *p_pv; // rcx
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // r9
  __int64 v33; // rdx
  void *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r9
  __int64 v37; // rdx
  LPVOID pv; // [rsp+30h] [rbp-41h] BYREF
  __int64 v39; // [rsp+38h] [rbp-39h] BYREF
  int v40; // [rsp+40h] [rbp-31h] BYREF
  __int64 v41; // [rsp+48h] [rbp-29h] BYREF
  __int64 v42; // [rsp+50h] [rbp-21h] BYREF
  __int64 v43; // [rsp+58h] [rbp-19h] BYREF
  _BYTE Src[40]; // [rsp+60h] [rbp-11h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+57h]

  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 40LL))(a4);
  v9 = sub_18004BB48(v8);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v39 = 0LL;
    if ( (unsigned int)sub_180022F30(a1, a3) )
    {
      v11 = sub_1800485D0(a1, 0, a3, 0LL, &v39, 0LL);
      v12 = v11;
      if ( v11 >= 0 )
        goto LABEL_4;
      v28 = 7707LL;
    }
    else
    {
      v11 = sub_18011C680(a1, a3, 0LL, &v39);
      v12 = v11;
      if ( v11 >= 0 )
      {
LABEL_4:
        v41 = 0LL;
        v42 = 0LL;
        if ( v10 != 1 )
        {
          pv = 0LL;
          *(_QWORD *)Src = &pv;
          *(_QWORD *)&Src[8] = 0LL;
          Src[16] = 1;
          v13 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 40LL))(a4);
          v14 = (int)sub_180048714(v13, &Src[8]) < 0;
          if ( Src[16] )
          {
            v15 = **(void ***)Src;
            **(_QWORD **)Src = *(_QWORD *)&Src[8];
            if ( v15 )
              CoTaskMemFree(v15);
          }
          if ( v14 )
          {
            v12 = -2004287480;
            v32 = 2290679816LL;
            v33 = 7747LL;
          }
          else
          {
            sub_18004BBD0(pv);
            v42 = 0LL;
            v16 = sub_18001F490((unsigned __int16 *)pv, (unsigned int)*((unsigned __int16 *)pv + 8) + 18, &v42, 0.0, 0);
            v12 = v16;
            if ( v16 >= 0 )
            {
              v17 = v42;
              sub_180048E18(&v41, v42);
              v18 = pv;
              pv = 0LL;
              if ( v18 )
                CoTaskMemFree(v18);
LABEL_12:
              v43 = 0LL;
              if ( !v39 )
              {
                sub_180048E18(&v43, v41);
LABEL_20:
                v22 = v43;
                v23 = sub_180048DA8(v43);
                v12 = v23;
                if ( v23 < 0 )
                {
                  v36 = (unsigned int)v23;
                  v37 = 7787LL;
                }
                else
                {
                  if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1)
                    || (v24 = (__int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 40LL))(v17),
                        sub_18001F7C0(v24))
                    || (v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 40LL))(a4),
                        *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 40LL))(v22) + 4) == *(_DWORD *)(v25 + 4)) )
                  {
                    v43 = 0LL;
                    *a5 = v22;
                    v12 = 0;
LABEL_25:
                    p_pv = &v43;
LABEL_26:
                    sub_18000F708(p_pv);
LABEL_27:
                    sub_18000F708(&v42);
                    sub_18000F708(&v41);
LABEL_28:
                    sub_18000F708(&v39);
                    return v12;
                  }
                  v12 = -2004287480;
                  v36 = 2290679816LL;
                  v37 = 7794LL;
                }
                sub_18004BD84(
                  retaddr,
                  v37,
                  "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                  v36);
                goto LABEL_25;
              }
              v40 = 0;
              pv = 0LL;
              v19 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1);
              v20 = v39;
              v21 = pv;
              pv = 0LL;
              if ( v19 )
              {
                if ( v21 )
                  (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v21 + 16LL))(v21);
                if ( (*(int (__fastcall **)(__int64, __int64, __int64, LPVOID *))(*(_QWORD *)v20 + 64LL))(
                       v20,
                       v17,
                       v41,
                       &pv) >= 0 )
                {
                  if ( (*(int (__fastcall **)(LPVOID, int *))(*(_QWORD *)pv + 24LL))(pv, &v40) >= 0 )
                  {
                    if ( !v40 )
                      goto LABEL_19;
                    v35 = 7777LL;
                  }
                  else
                  {
                    v35 = 7776LL;
                  }
                }
                else
                {
                  v35 = 7774LL;
                }
              }
              else
              {
                if ( v21 )
                  (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v21 + 16LL))(v21);
                if ( (*(int (__fastcall **)(__int64, __int64, __int64, LPVOID *))(*(_QWORD *)v20 + 56LL))(
                       v20,
                       v17,
                       v41,
                       &pv) < 0 )
                {
                  v35 = 7767LL;
                }
                else if ( (*(int (__fastcall **)(LPVOID, int *))(*(_QWORD *)pv + 24LL))(pv, &v40) < 0 )
                {
                  v35 = 7768LL;
                }
                else
                {
                  if ( !v40 )
                  {
LABEL_19:
                    sub_180048E18(&v43, (__int64)pv);
                    sub_18000F708((__int64 *)&pv);
                    goto LABEL_20;
                  }
                  v35 = 7769LL;
                }
              }
              v12 = -2004287480;
              sub_18004BD84(
                retaddr,
                v35,
                "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                2290679816LL);
              sub_18000F708((__int64 *)&pv);
              goto LABEL_25;
            }
            v32 = (unsigned int)v16;
            v33 = 7752LL;
          }
          sub_18004BD84(
            retaddr,
            v33,
            "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            v32);
          v34 = pv;
          pv = 0LL;
          if ( v34 )
            CoTaskMemFree(v34);
          goto LABEL_27;
        }
        memset(&Src[2], 0, 38);
        if ( !v39 )
        {
          v12 = -2004287480;
          sub_18004BD84(
            retaddr,
            7718LL,
            "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            2290679816LL);
          goto LABEL_27;
        }
        pv = 0LL;
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, LPVOID *))(*(_QWORD *)v39 + 64LL))(
               v39,
               0LL,
               a4,
               &pv) )
        {
          v12 = -2004287480;
          v29 = 2290679816LL;
          v30 = 7722LL;
        }
        else
        {
          *(_DWORD *)Src = 196606;
          *(_DWORD *)&Src[4] = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 40LL))(a4) + 4);
          *(_DWORD *)&Src[12] = 2097160;
          *(_DWORD *)&Src[8] = 8 * *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 40LL))(a4) + 4);
          *(_DWORD *)&Src[16] = 2097174;
          *(_DWORD *)&Src[20] = 3;
          *(_OWORD *)&Src[24] = *(_OWORD *)&xmmword_18015B720;
          v41 = 0LL;
          v31 = sub_18001F490((unsigned __int16 *)Src, 0x28u, &v41, 0.0, 0);
          v12 = v31;
          if ( v31 >= 0 )
          {
            sub_180048E18(&v42, a4);
            sub_18000F708((__int64 *)&pv);
            v17 = v42;
            goto LABEL_12;
          }
          v29 = (unsigned int)v31;
          v30 = 7739LL;
        }
        sub_18004BD84(
          retaddr,
          v30,
          "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          v29);
        p_pv = (__int64 *)&pv;
        goto LABEL_26;
      }
      v28 = 7703LL;
    }
    sub_18004BD84(
      retaddr,
      v28,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (unsigned int)v11);
    goto LABEL_28;
  }
  sub_18004BD84(
    retaddr,
    7697LL,
    "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (unsigned int)v9);
  return v10;
}
