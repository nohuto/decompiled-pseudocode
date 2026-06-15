/*
 * XREFs of sub_1800EC88C @ 0x1800EC88C
 * Callers:
 *     sub_1800EE120 @ 0x1800EE120 (sub_1800EE120.c)
 * Callees:
 *     ??$_Parse_fp_with_locale@$0A@@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AU_Num_get_parse_result@1@QEADHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@1@1AEBVlocale@1@@Z @ 0x1800121B0 (--$_Parse_fp_with_locale@$0A@@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_18004AE9C @ 0x18004AE9C (sub_18004AE9C.c)
 *     sub_18004B400 @ 0x18004B400 (sub_18004B400.c)
 *     sub_18006871C @ 0x18006871C (sub_18006871C.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800CD58C @ 0x1800CD58C (sub_1800CD58C.c)
 *     sub_1800E3CDC @ 0x1800E3CDC (sub_1800E3CDC.c)
 *     sub_1800ED858 @ 0x1800ED858 (sub_1800ED858.c)
 *     sub_1800EE200 @ 0x1800EE200 (sub_1800EE200.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_1800EC88C(__int64 a1, const wchar_t *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  char v5; // r12
  int v6; // r13d
  void *v7; // rdi
  void *v8; // rsi
  __int64 *i; // rbx
  char v10; // al
  __int64 v11; // r9
  __int64 *v12; // r14
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // r14
  __int64 v16; // r14
  unsigned int v17; // eax
  int v18; // eax
  LPVOID v19; // r14
  __int64 v20; // r15
  int v21; // eax
  __int64 v22; // rax
  unsigned __int16 *v23; // rax
  __int64 v24; // r15
  __int64 v25; // r14
  __int64 v26; // rbx
  __int64 v27; // rbx
  __int64 result; // rax
  LPVOID *v29; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h] BYREF
  int v32[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v33[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-60h]
  LPVOID v35; // [rsp+B0h] [rbp-50h] BYREF
  LPVOID pv; // [rsp+B8h] [rbp-48h] BYREF
  LPVOID v37; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v38; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v39; // [rsp+D8h] [rbp-28h]
  LPVOID v40; // [rsp+E0h] [rbp-20h] BYREF
  void *v41; // [rsp+E8h] [rbp-18h]
  LPVOID v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v45[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v46[2]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v47[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v48[16]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v49[16]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v50[16]; // [rsp+160h] [rbp+60h] BYREF

  v43 = a1;
  *(_QWORD *)v32 = 0LL;
  v3 = (*(__int64 (__fastcall **)(PVOID, const wchar_t *, _QWORD, _QWORD, int *))(*(_QWORD *)::pv + 24LL))(
         ::pv,
         a2,
         0LL,
         0LL,
         v32);
  v4 = 0LL;
  v30 = 0LL;
  if ( v3 >= 0 )
  {
    sub_1800461B8(&v30);
    v3 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, __int64 *))(*(_QWORD *)qword_18019EE50 + 24LL))(
           qword_18019EE50,
           a2,
           &v30);
    v4 = v30;
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x1Du, (__int64)&unk_18015E5F0, a2);
    v4 = v30;
  }
  if ( v3 >= 0 )
  {
    (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v4 + 112LL))(v4, lpCriticalSection);
    while ( 1 )
    {
      v5 = 1;
      v38 = 0LL;
      v39 = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v30 + 80LL))(v30, &v38);
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BD7DC(
          *((_QWORD *)off_18019C348 + 2),
          0x1Eu,
          (__int64)&unk_18015E5F0,
          (__int64)(*((_QWORD *)&v38 + 1) - v38) >> 3);
      }
      if ( v6 >= 0 )
        break;
LABEL_44:
      v27 = v38;
      if ( (_QWORD)v38 )
      {
        sub_1800CD58C((__int64 *)v38, *((__int64 **)&v38 + 1));
        sub_1800472E0(v27, (v39 - v27) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      if ( v6 < 0 || v5 )
      {
        if ( lpCriticalSection[0] )
          LeaveCriticalSection(lpCriticalSection[0]);
        goto LABEL_50;
      }
    }
    v31 = 0LL;
    v7 = 0LL;
    v41 = 0LL;
    v8 = 0LL;
    v42 = 0LL;
    for ( i = (__int64 *)v38; ; ++i )
    {
      if ( i == *((__int64 **)&v38 + 1) )
      {
LABEL_43:
        CoTaskMemFree(v8);
        CoTaskMemFree(v7);
        sub_1800461B8(&v31);
        goto LABEL_44;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 152LL))(*i)
        && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 120LL))(*i) )
      {
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 136LL))(*i);
        v11 = *i;
        if ( v10 )
        {
          *(_OWORD *)v33 = 0LL;
          v34 = 0LL;
          if ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v30 + 104LL))(v30, v11, v33) < 0 )
            goto LABEL_26;
          v12 = (__int64 *)v33[0];
          if ( (v33[1] - v33[0]) >> 3 == 1 )
          {
            v29 = 0LL;
            if ( (*(int (__fastcall **)(__int64, LPVOID **))(*(_QWORD *)*i + 104LL))(*i, &v29) >= 0 )
            {
              v13 = *i;
              v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v33[0] + 104LL))(*(_QWORD *)v33[0]);
              if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13) != v14 )
              {
                v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 176LL))(*i);
                if ( GetTickCount64() - v15 >= 0x2700 )
                {
                  sub_18006871C(&v31, i);
                  v7 = v29[2];
                  v29[2] = 0LL;
                  CoTaskMemFree(0LL);
                  v41 = v7;
                  v8 = v29[3];
                  v29[3] = 0LL;
                  CoTaskMemFree(0LL);
                  v42 = v8;
                  v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v33[0] + 104LL))(*(_QWORD *)v33[0]);
                  if ( v29 )
                    sub_1800E3CDC(v29);
                  v29 = 0LL;
                  v26 = v33[0];
                  if ( v33[0] )
                  {
                    sub_1800CD58C((__int64 *)v33[0], (__int64 *)v33[1]);
                    sub_1800472E0(v26, (v34 - v26) & 0xFFFFFFFFFFFFFFF8uLL);
                  }
                  goto LABEL_41;
                }
              }
            }
            if ( v29 )
              sub_1800E3CDC(v29);
LABEL_26:
            v12 = (__int64 *)v33[0];
          }
          if ( v12 )
          {
            sub_1800CD58C(v12, (__int64 *)v33[1]);
            sub_1800472E0((__int64)v12, (v34 - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF8uLL);
          }
          continue;
        }
        LODWORD(v29) = 0;
        v40 = 0LL;
        v35 = 0LL;
        v37 = 0LL;
        pv = 0LL;
        *(_OWORD *)v45 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v11 + 40LL))(v11, v47);
        *(_OWORD *)v46 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v48);
        *(_OWORD *)v33 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v49);
        v16 = *(_QWORD *)v32;
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 80LL))(*i);
        v18 = std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Parse_fp_with_locale<0>(
                v16,
                0,
                v17,
                0,
                0,
                (__int128 *)v33,
                (__int128 *)v46,
                (__int128 *)v45,
                0LL,
                &v37,
                &pv,
                &v35,
                &v40);
        v19 = v40;
        if ( v18 >= 0 )
        {
          *(_OWORD *)v33 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v50);
          v20 = *(_QWORD *)v32;
          v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 80LL))(*i);
          if ( (int)sub_18004AE9C(v20, v21, (__int64)v19, (__int128 *)v33, 0, &v29, 0LL, 0LL, 0LL) >= 0 )
          {
            v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 32LL))(*i);
            if ( v22 != (int)((double)(int)v29 * 10000000.0 / (double)*((int *)v19 + 1) + 0.5)
              || (v23 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 48LL))(*i),
                  !(unsigned int)sub_18004B400((unsigned __int16 *)v19, v23)) )
            {
              v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 176LL))(*i);
              if ( GetTickCount64() - v24 >= 0x2700 )
              {
                sub_18006871C(&v31, i);
                CoTaskMemFree(0LL);
                v7 = v19;
                v41 = v19;
                CoTaskMemFree(0LL);
                v8 = v35;
                v42 = v35;
                v25 = (unsigned int)(int)((double)(int)v29 * 10000000.0 / (double)*((int *)v19 + 1) + 0.5);
                CoTaskMemFree(pv);
                CoTaskMemFree(v37);
                CoTaskMemFree(0LL);
                CoTaskMemFree(0LL);
LABEL_41:
                v5 = 0;
                if ( v31 )
                {
                  sub_1800EE200(&v38);
                  v6 = sub_1800ED858(v43, *(_QWORD *)v32, v30, v7, v8, v25, &v31);
                }
                goto LABEL_43;
              }
            }
          }
        }
        CoTaskMemFree(pv);
        CoTaskMemFree(v37);
        CoTaskMemFree(v35);
        CoTaskMemFree(v19);
      }
    }
  }
LABEL_50:
  result = sub_1800461B8(&v30);
  if ( *(_QWORD *)v32 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v32 + 16LL))(*(_QWORD *)v32);
  return result;
}
