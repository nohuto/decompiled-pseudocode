/*
 * XREFs of sub_1800176F0 @ 0x1800176F0
 * Callers:
 *     sub_18000FFE4 @ 0x18000FFE4 (sub_18000FFE4.c)
 *     sub_180016AF0 @ 0x180016AF0 (sub_180016AF0.c)
 *     sub_180016DD0 @ 0x180016DD0 (sub_180016DD0.c)
 *     sub_180034F98 @ 0x180034F98 (sub_180034F98.c)
 *     StartAddress @ 0x18003E530 (StartAddress.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180071184 @ 0x180071184 (sub_180071184.c)
 */

__int64 __fastcall sub_1800176F0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // kr00_8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // kr10_8
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // kr20_8
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // kr30_8
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // kr40_8
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // kr50_8
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // kr60_8
  bool v32; // zf
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r8
  __int64 result; // rax
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  unsigned __int64 v44; // r9
  unsigned __int64 v45; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v46; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v47; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v48; // [rsp+68h] [rbp-98h] BYREF
  char *v49; // [rsp+70h] [rbp-90h] BYREF
  __int16 v50; // [rsp+78h] [rbp-88h]
  __int128 *v51; // [rsp+80h] [rbp-80h] BYREF
  __int16 v52; // [rsp+88h] [rbp-78h]
  __int128 v53; // [rsp+90h] [rbp-70h]
  __int128 v54; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v55; // [rsp+B0h] [rbp-50h]
  __int128 v56; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v57; // [rsp+D0h] [rbp-30h]
  __int128 v58; // [rsp+E0h] [rbp-20h]
  __int128 v59; // [rsp+F0h] [rbp-10h]
  __int128 v60; // [rsp+100h] [rbp+0h]

  if ( *(_QWORD *)a5 != a4 || (result = *(_QWORD *)(a3 + 40), *(_QWORD *)(a5 + 8) != result) )
  {
    *(_QWORD *)&v54 = 0LL;
    *((_QWORD *)&v56 + 1) = 0LL;
    *((_QWORD *)&v57 + 1) = 0LL;
    *(_QWORD *)&v60 = 0LL;
    v7 = *(unsigned int *)(a1 + 20);
    v8 = -1LL;
    v10 = v7;
    v9 = a4 * v7;
    v59 = 0LL;
    v11 = -1LL;
    v12 = *(_QWORD *)(a3 + 40);
    if ( is_mul_ok(a4, v10) )
      v11 = v9;
    *(_QWORD *)&v53 = a4;
    *((_QWORD *)&v53 + 1) = v12;
    v13 = v11 / 0x64;
    if ( v13 >= a4 - *(_QWORD *)a1 )
      v13 = a4 - *(_QWORD *)a1;
    v14 = -1LL;
    v15 = *(unsigned int *)(a1 + 44);
    v16 = -1LL;
    *(_QWORD *)&v56 = v13;
    *((_QWORD *)&v55 + 1) = v13;
    if ( is_mul_ok(a4, v15) )
      v14 = a4 * v15;
    v17 = *(unsigned int *)(a1 + 12);
    *((_QWORD *)&v60 + 1) = v14 / 0x64;
    v18 = -1LL;
    if ( is_mul_ok(a4, v17) )
      v18 = a4 * v17;
    v19 = v18 / 0x64;
    if ( is_mul_ok(v12, *(unsigned int *)(a1 + 16)) )
      v16 = v12 * *(unsigned int *)(a1 + 16);
    v20 = v16 / 0x64;
    if ( v19 < v20 )
      v20 = v19;
    if ( v13 < v20 )
      v20 = v13;
    v21 = -1LL;
    v22 = *(unsigned int *)(a1 + 8);
    *(_QWORD *)&v55 = v20;
    if ( is_mul_ok(a4, v22) )
      v21 = a4 * v22;
    v23 = v21 / 0x64;
    if ( v20 < v23 )
      v23 = v20;
    v24 = -1LL;
    v25 = *(unsigned int *)(a1 + 24);
    *((_QWORD *)&v54 + 1) = v23;
    v26 = -1LL;
    if ( is_mul_ok(v12, v25) )
      v24 = v12 * v25;
    v27 = *(unsigned int *)(a1 + 28);
    *((_QWORD *)&v57 + 1) = v24 / 0x64;
    *(_QWORD *)&v57 = v24 / 0x64;
    if ( is_mul_ok(v12, v27) )
      v26 = v12 * v27;
    v28 = *(unsigned int *)(a1 + 32);
    *(_QWORD *)&v58 = v26 / 0x64;
    v29 = -1LL;
    v31 = v28;
    v30 = v12 * v28;
    if ( is_mul_ok(v12, v31) )
      v29 = v30;
    v32 = *(_DWORD *)(a2 + 40) == 0;
    *((_QWORD *)&v58 + 1) = v29 / 0x64;
    if ( v32 )
    {
      v33 = v59;
    }
    else
    {
      v44 = -1LL;
      if ( is_mul_ok(a4, *(unsigned int *)(a1 + 36)) )
        v44 = a4 * *(unsigned int *)(a1 + 36);
      v33 = v44 / 0x64;
      *(_QWORD *)&v59 = v33;
    }
    if ( *(_DWORD *)(a2 + 44) )
    {
      v34 = -1LL;
      if ( is_mul_ok(v12, *(unsigned int *)(a1 + 40)) )
        v34 = v12 * *(unsigned int *)(a1 + 40);
      v35 = v34 / 0x64;
      *((_QWORD *)&v59 + 1) = v35;
    }
    else
    {
      v35 = *((_QWORD *)&v59 + 1);
    }
    result = *(unsigned int *)(a1 + 48);
    if ( (_DWORD)result )
    {
      if ( is_mul_ok(v12, *(unsigned int *)(a1 + 48)) )
        v8 = v12 * *(unsigned int *)(a1 + 48);
      result = 0x47AE147AE147AE15LL * v8;
      *(_QWORD *)&v60 = v8 / 0x64;
    }
    if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 )
    {
      result = qword_1800B31F8 & 1;
      if ( result == qword_1800B31F8 )
      {
        v45 = v35;
        v46 = v33;
        v49 = (char *)&v56 + 8;
        v50 = 5;
        v51 = &v54;
        v52 = 5;
        v47 = v12;
        v48 = a4;
        result = sub_180071184(
                   5,
                   (unsigned int)&unk_18009D050,
                   v35,
                   v33,
                   (__int64)&v48,
                   (__int64)&v47,
                   (__int64)&v51,
                   (__int64)&v49,
                   (__int64)&v46,
                   (__int64)&v45);
      }
    }
    v37 = v54;
    *(_OWORD *)a5 = v53;
    v38 = v55;
    *(_OWORD *)(a5 + 16) = v37;
    v39 = v56;
    *(_OWORD *)(a5 + 32) = v38;
    v40 = v57;
    *(_OWORD *)(a5 + 48) = v39;
    v41 = v58;
    *(_OWORD *)(a5 + 64) = v40;
    v42 = v59;
    *(_OWORD *)(a5 + 80) = v41;
    v43 = v60;
    *(_OWORD *)(a5 + 96) = v42;
    *(_OWORD *)(a5 + 112) = v43;
  }
  return result;
}
