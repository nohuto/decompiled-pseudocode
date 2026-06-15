/*
 * XREFs of sub_1800E15FC @ 0x1800E15FC
 * Callers:
 *     sub_1800E1B40 @ 0x1800E1B40 (sub_1800E1B40.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_1800670EC @ 0x1800670EC (sub_1800670EC.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD9FC @ 0x1800BD9FC (sub_1800BD9FC.c)
 *     sub_1800D50A8 @ 0x1800D50A8 (sub_1800D50A8.c)
 *     sub_1800E1460 @ 0x1800E1460 (sub_1800E1460.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800E15FC(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // edx
  unsigned int i; // esi
  unsigned __int16 *v11; // rax
  int v12; // r8d
  int v13; // ecx
  __int64 v14; // rdi
  void **v15; // rbx
  std::_Ref_count_base *v16; // rax
  std::_Ref_count_base *v17; // rcx
  __int64 v18; // rcx
  int v19; // edi
  _DWORD *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  void *v23; // rax
  std::_Ref_count_base *v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rax
  int v27; // eax
  unsigned int v29; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v30; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-A0h] BYREF
  int v35; // [rsp+70h] [rbp-98h] BYREF
  int v36; // [rsp+74h] [rbp-94h] BYREF
  __int64 pvar; // [rsp+78h] [rbp-90h] BYREF
  PROPVARIANT pvar_8[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v39; // [rsp+90h] [rbp-78h]
  void *v40; // [rsp+98h] [rbp-70h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-68h] BYREF
  std::_Ref_count_base *v42; // [rsp+A8h] [rbp-60h]
  int v43; // [rsp+B0h] [rbp-58h] BYREF
  void **v44; // [rsp+B8h] [rbp-50h]
  std::_Ref_count_base *v45; // [rsp+C0h] [rbp-48h]
  std::_Ref_count_base *v46[2]; // [rsp+C8h] [rbp-40h] BYREF
  PROPVARIANT *v47; // [rsp+D8h] [rbp-30h]
  char v48; // [rsp+E0h] [rbp-28h]
  _BYTE *v49; // [rsp+E8h] [rbp-20h]
  _BYTE v50[64]; // [rsp+F8h] [rbp-10h] BYREF
  _DWORD v51[6]; // [rsp+138h] [rbp+30h] BYREF
  _DWORD v52[6]; // [rsp+150h] [rbp+48h] BYREF
  _UNKNOWN *retaddr; // [rsp+180h] [rbp+78h]

  v2 = *(_QWORD *)(a1 + 32);
  pvar = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 96LL))(v2, &pvar);
  v4 = v3;
  if ( v3 < 0 )
  {
    sub_18004BD84((int)retaddr, 122, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp", v3);
    goto LABEL_54;
  }
  pv = 0LL;
  v5 = pvar;
  sub_18002A504(&pv, 0LL);
  v6 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v5 + 64LL))(v5, &pv);
  v4 = v6;
  if ( v6 < 0 )
  {
    v7 = 125;
LABEL_7:
    sub_18004BD84((int)retaddr, v7, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp", v6);
    goto LABEL_52;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 32) + 32LL))(*(_QWORD *)(a1 + 32), &v35);
  v4 = v6;
  if ( v6 < 0 )
  {
    v7 = 128;
    goto LABEL_7;
  }
  v33 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, bool, __int64, __int64 *))(**(_QWORD **)&dwCreationFlags + 24LL))(
         *(_QWORD *)&dwCreationFlags,
         *(_DWORD *)(a1 + 8) != 0,
         1879048207LL,
         &v33);
  v4 = v8;
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v33 + 24LL))(v33, &v29);
    v4 = v8;
    if ( v8 >= 0 )
    {
      for ( i = 0; i < v29; ++i )
      {
        v32 = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v33 + 32LL))(v33, i, &v32) >= 0 )
        {
          v31 = 0LL;
          if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v32 + 32LL))(v32, 0LL, &v31) >= 0 )
          {
            v51[0] = 590439624;
            v51[1] = 1283267372;
            v51[2] = 1907779772;
            v51[3] = 1730509416;
            v51[4] = 1;
            *(_OWORD *)pvar_8 = 0LL;
            v39 = 0LL;
            v47 = pvar_8;
            v48 = 1;
            if ( (*(int (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v31 + 40LL))(v31, v51, pvar_8) >= 0
              && LOWORD(pvar_8[0]) == 31 )
            {
              v11 = (unsigned __int16 *)pvar_8[1];
              do
              {
                v12 = *(unsigned __int16 *)((char *)v11 + (_QWORD)pv - (unsigned __int64)pvar_8[1]);
                v13 = *v11 - v12;
                if ( v13 )
                  break;
                ++v11;
              }
              while ( v12 );
              if ( !v13 )
              {
                v52[0] = -1702713381;
                v52[1] = 1102331579;
                v52[2] = -1223116157;
                v52[3] = -65530063;
                v52[4] = 1;
                PropVariantClear(pvar_8);
                if ( (*(int (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v31 + 40LL))(v31, v52, pvar_8) >= 0
                  && LOWORD(pvar_8[0]) == 19
                  && LODWORD(pvar_8[1]) == v35 )
                {
                  v30 = 0LL;
                  v14 = v32;
                  *(_OWORD *)v46 = 0LL;
                  sub_1800D50A8(&v30, (__int64 *)v46);
                  if ( v46[1] )
                    sub_180052600(v46[1]);
                  v15 = (void **)v30;
                  if ( !(_QWORD)v30 )
                  {
                    v16 = (std::_Ref_count_base *)sub_180055F40(0x18uLL);
                    v17 = v16;
                    if ( v16 )
                    {
                      *((_DWORD *)v16 + 2) = 1;
                      *((_DWORD *)v16 + 3) = 1;
                      *(_QWORD *)v16 = off_180155258;
                      *((_QWORD *)v16 + 2) = 0LL;
                    }
                    else
                    {
                      v17 = 0LL;
                    }
                    v41 = (__int64)v17 + 16;
                    v42 = v17;
                    sub_1800D50A8(&v30, &v41);
                    if ( v42 )
                      sub_180052600(v42);
                    v15 = (void **)v30;
                  }
                  if ( (*(int (__fastcall **)(__int64, void **))(*(_QWORD *)v14 + 40LL))(v14, v15) < 0 )
                  {
                    v24 = (std::_Ref_count_base *)*((_QWORD *)&v30 + 1);
                  }
                  else
                  {
                    v19 = dword_18019FA74++;
                    v20 = (_DWORD *)sub_180008448(v18, sub_1800B6240)[1];
                    if ( *v20 > 4u )
                    {
                      if ( v15 )
                        v23 = *v15;
                      else
                        v23 = 0LL;
                      v40 = v23;
                      v36 = v19;
                      sub_1800BD9FC((__int64)v20, byte_18016756D, v21, v22, (__int64)&v36, &v40);
                    }
                    v49 = v50;
                    v43 = v19;
                    v24 = (std::_Ref_count_base *)*((_QWORD *)&v30 + 1);
                    if ( *((_QWORD *)&v30 + 1) )
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 8LL));
                      v24 = (std::_Ref_count_base *)*((_QWORD *)&v30 + 1);
                      v15 = (void **)v30;
                    }
                    v44 = v15;
                    v45 = v24;
                    v25 = sub_1800E1460((__int64)v50, (__int64)&v43);
                    v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019E678 + 120LL))(qword_18019E678);
                    v27 = sub_1800670EC(v26, v25);
                    if ( v27 < 0 )
                      sub_18006D26C(
                        (int)retaddr,
                        192,
                        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
                        v27);
                  }
                  if ( v24 )
                    sub_180052600(v24);
                }
              }
            }
            v48 = 0;
            PropVariantClear(pvar_8);
          }
          sub_18000F708(&v31);
        }
        sub_18000F708(&v32);
      }
      v4 = 0;
      goto LABEL_51;
    }
    v9 = 138;
  }
  else
  {
    v9 = 135;
  }
  sub_18004BD84((int)retaddr, v9, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp", v8);
LABEL_51:
  sub_18000F708(&v33);
LABEL_52:
  if ( pv )
    CoTaskMemFree(pv);
LABEL_54:
  sub_18000F708(&pvar);
  return v4;
}
