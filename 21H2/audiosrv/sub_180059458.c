/*
 * XREFs of sub_180059458 @ 0x180059458
 * Callers:
 *     sub_1800591C4 @ 0x1800591C4 (sub_1800591C4.c)
 * Callees:
 *     sub_1800229D0 @ 0x1800229D0 (sub_1800229D0.c)
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 *     sub_1800273F8 @ 0x1800273F8 (sub_1800273F8.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180055010 @ 0x180055010 (sub_180055010.c)
 *     sub_180059784 @ 0x180059784 (sub_180059784.c)
 *     sub_18005A98C @ 0x18005A98C (sub_18005A98C.c)
 *     sub_18005AA7C @ 0x18005AA7C (sub_18005AA7C.c)
 *     sub_18005AAD0 @ 0x18005AAD0 (sub_18005AAD0.c)
 *     sub_18005BBBC @ 0x18005BBBC (sub_18005BBBC.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1801188B4 @ 0x1801188B4 (sub_1801188B4.c)
 *     sub_1801195CC @ 0x1801195CC (sub_1801195CC.c)
 *     sub_18011DF04 @ 0x18011DF04 (sub_18011DF04.c)
 *     sub_18011E9F8 @ 0x18011E9F8 (sub_18011E9F8.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180059458(unsigned __int64 *a1, int a2, _QWORD *a3)
{
  unsigned __int64 v4; // r15
  __int64 v7; // rcx
  BOOL v8; // eax
  _DWORD *v9; // rcx
  unsigned __int64 *v10; // r12
  int v11; // eax
  int v12; // edx
  int v13; // ebx
  int v14; // ebx
  __int128 *v15; // rax
  __int64 *v16; // rax
  int v17; // eax
  int v18; // r12d
  __int64 *v19; // rax
  unsigned __int64 v20; // rbx
  int v21; // eax
  int v22; // edx
  int v23; // edx
  int v24; // eax
  int v25; // eax
  unsigned int v26; // r14d
  BOOL v27; // ebx
  int v28; // eax
  __int64 *v29; // rax
  int v30; // eax
  BOOL v31; // ebx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  _BYTE *v35; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v37[56]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+88h] [rbp-78h]
  _BYTE v39[96]; // [rsp+90h] [rbp-70h]
  __int128 v40; // [rsp+F0h] [rbp-10h]
  _BYTE v41[72]; // [rsp+100h] [rbp+0h]
  _OWORD v42[11]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v43; // [rsp+200h] [rbp+100h]
  __int128 v44; // [rsp+210h] [rbp+110h] BYREF
  __int128 v45; // [rsp+220h] [rbp+120h] BYREF
  __int128 v46; // [rsp+230h] [rbp+130h] BYREF
  int v47; // [rsp+240h] [rbp+140h]
  __m256i v48; // [rsp+248h] [rbp+148h] BYREF
  __m256i v49; // [rsp+268h] [rbp+168h] BYREF
  _OWORD v50[5]; // [rsp+290h] [rbp+190h] BYREF
  _UNKNOWN *retaddr; // [rsp+328h] [rbp+228h]

  v4 = a2;
  if ( (*(unsigned int (__fastcall **)(unsigned __int64 *))(*a1 + 56))(a1) != 1 )
    return 0LL;
  if ( (_DWORD)v4 == 3 )
  {
    v9 = &unk_180172BC8;
  }
  else
  {
    v7 = *a3 - 0x4CFAB9D6FC1CFC9BLL;
    if ( *a3 == 0x4CFAB9D6FC1CFC9BLL )
      v7 = a3[1] + 0x4D8797E94DB41F4BLL;
    v8 = v7 == 0;
    v9 = &unk_18015BBC8;
    if ( !v8 )
      v9 = &unk_18015BBE0;
  }
  v46 = *(_OWORD *)v9;
  v47 = v9[4];
  v49.m256i_i64[0] = (__int64)a1;
  v49.m256i_i32[2] = v4;
  *(_OWORD *)((char *)&v49.m256i_u64[1] + 4) = *(_OWORD *)a3;
  v48.m256i_i32[0] = v4;
  *(_OWORD *)((char *)v48.m256i_i64 + 4) = *(_OWORD *)((char *)&v49.m256i_u64[1] + 4);
  v48.m256i_i64[3] = (__int64)a1;
  memset(v50, 255, 0x44uLL);
  LODWORD(v50[0]) = 5;
  v45 = *(_OWORD *)a3;
  v10 = a1 + 209;
  v11 = sub_1800233B0(a1 + 209, v4);
  v13 = sub_18005AAD0((_DWORD)a1, v12, v11, (unsigned int)&v45, (__int64)&v35, (__int64)v50);
  if ( v13 < 0 )
  {
    v22 = 2015;
    goto LABEL_27;
  }
  v14 = (int)v35;
  if ( !(_DWORD)v35 )
    goto LABEL_19;
  if ( (_DWORD)v35 == 2 )
  {
    if ( (_DWORD)v4 != 3 || (unsigned int)sub_18011DF04(a1) )
      v15 = &xmmword_18015BBB8;
    else
      v15 = (__int128 *)&unk_180173780;
  }
  else
  {
    v15 = (__int128 *)&unk_180173770;
  }
  v45 = *v15;
  if ( *(_DWORD *)sub_180055010(a1 + 8, v4) )
  {
    v16 = (__int64 *)sub_1800234A0(a1 + 19, v4);
    if ( (unsigned int)sub_180022EE0(v16, &xmmword_18015B798) == -1 && v14 != 4 )
    {
      v18 = sub_1801195CC(&v48);
      if ( v18 < 0 )
      {
        v23 = 2034;
        goto LABEL_35;
      }
      v10 = a1 + 209;
    }
    if ( v14 > 0 )
    {
      if ( v14 <= 2 )
      {
        v35 = v37;
        v38 = 0LL;
        v44 = *(_OWORD *)a3;
        v17 = sub_1800233B0(v10, v4);
        v18 = sub_180059784(v17, (unsigned int)&v44, 1, (unsigned int)&v45, 2, 0, (__int64)v37);
        if ( v18 >= 0 )
        {
          v19 = (__int64 *)sub_1800234A0(a1 + 19, v4);
          if ( (unsigned int)sub_180022EE0(v19, a3) == -1 )
            goto LABEL_19;
          v33 = sub_1800234A0(a1 + 217, v4);
          if ( !(unsigned int)sub_1800273F8(v33, a3) )
          {
            v13 = -2147024882;
            v22 = 2051;
            goto LABEL_27;
          }
          v34 = sub_1800234A0(a1 + 19, v4);
          sub_18011E9F8(v34, a3);
LABEL_19:
          if ( (v14 & 0xFFFFFFFB) == 0 )
          {
LABEL_21:
            pv = 0LL;
            v20 = a1[2];
            sub_18002A504(&pv, 0LL);
            (*(void (__fastcall **)(unsigned __int64, LPVOID *))(*(_QWORD *)v20 + 40LL))(v20, &pv);
            v44 = *(_OWORD *)a3;
            sub_18005AA7C(v50, pv, &v44, (unsigned int)v4);
            v21 = sub_18005A98C(a1, (unsigned int)v4, &v46, v50);
            v13 = v21;
            if ( v21 >= 0 )
            {
              if ( pv )
                CoTaskMemFree(pv);
              return 0LL;
            }
            sub_18004BD84(
              (int)retaddr,
              2178,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              v21);
            if ( pv )
              CoTaskMemFree(pv);
            return (unsigned int)v13;
          }
LABEL_20:
          *(_OWORD *)((char *)&v50[2] + 12) = *(_OWORD *)sub_18005BBBC(&v49, &v44);
          goto LABEL_21;
        }
        v23 = 2047;
LABEL_35:
        sub_18004BD84(
          (int)retaddr,
          v23,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          v18);
        return (unsigned int)v18;
      }
      if ( v14 == 3 )
      {
        v35 = v37;
        v29 = (__int64 *)sub_1800234A0(a1 + 19, v4);
        v30 = sub_180022EE0(v29, a3);
        v38 = 0LL;
        v44 = *(_OWORD *)a3;
        v31 = v30 != -1;
        v32 = sub_1800233B0(v10, v4);
        v13 = sub_180059784(v32, (unsigned int)&v44, 1, (unsigned int)&v45, 1, v31, (__int64)v37);
        if ( v13 >= 0 )
          goto LABEL_20;
        v22 = 2041;
LABEL_27:
        sub_18004BD84(
          (int)retaddr,
          v22,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          v13);
        return (unsigned int)v13;
      }
      if ( v14 == 4 )
      {
        v35 = v37;
        v44 = *(_OWORD *)a3;
        v27 = sub_1800229D0((__int64)a1, v4, &v44) != 0;
        *(_QWORD *)v39 = a1;
        *(_OWORD *)&v39[8] = v46;
        *(_DWORD *)&v39[24] = v47;
        *(_OWORD *)&v39[28] = v50[0];
        *(_OWORD *)&v39[44] = v50[1];
        *(_OWORD *)&v39[60] = v50[2];
        *(_OWORD *)&v39[76] = v50[3];
        *(_DWORD *)&v39[92] = v50[4];
        v40 = *(_OWORD *)a3;
        *(_DWORD *)v41 = v4;
        *(__m256i *)&v41[8] = v48;
        *(__m256i *)&v41[40] = v49;
        v42[0] = *(_OWORD *)v39;
        v42[1] = *(_OWORD *)&v39[16];
        v42[2] = *(_OWORD *)&v39[32];
        v42[3] = *(_OWORD *)&v39[48];
        v42[4] = *(_OWORD *)&v39[64];
        v42[5] = *(_OWORD *)&v39[80];
        v42[6] = v40;
        v42[7] = *(_OWORD *)v41;
        v42[8] = *(_OWORD *)&v48.m256i_u64[1];
        v42[9] = *(_OWORD *)&v41[32];
        v42[10] = *(_OWORD *)&v49.m256i_u64[1];
        v43 = v49.m256i_i64[3];
        v38 = 0LL;
        v38 = sub_1801188B4(v42);
        v44 = *(_OWORD *)a3;
        v28 = sub_1800233B0(v10, v4);
        v13 = sub_180059784(v28, (unsigned int)&v44, 0, 0, 1, v27, (__int64)v37);
        if ( v13 >= 0 )
          goto LABEL_21;
        v22 = 2156;
        goto LABEL_27;
      }
    }
    v13 = -2147418113;
    v22 = 2160;
    goto LABEL_27;
  }
  v18 = sub_1801195CC(&v48);
  if ( v18 < 0 )
  {
    v23 = 2026;
    goto LABEL_35;
  }
  v35 = v37;
  v38 = 0LL;
  v44 = *(_OWORD *)a3;
  v24 = sub_1800233B0(a1 + 209, v4);
  v25 = sub_180059784(v24, (unsigned int)&v44, 1, (unsigned int)&v45, 2, 0, (__int64)v37);
  v26 = v25;
  if ( v25 >= 0 )
    goto LABEL_19;
  sub_18004BD84(
    (int)retaddr,
    2027,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    v25);
  return v26;
}
