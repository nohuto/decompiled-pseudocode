/*
 * XREFs of sub_1800C2CAC @ 0x1800C2CAC
 * Callers:
 *     sub_1800B95E0 @ 0x1800B95E0 (sub_1800B95E0.c)
 *     sub_1800BE160 @ 0x1800BE160 (sub_1800BE160.c)
 * Callees:
 *     sub_180013E28 @ 0x180013E28 (sub_180013E28.c)
 *     sub_180013F64 @ 0x180013F64 (sub_180013F64.c)
 *     sub_1800752B4 @ 0x1800752B4 (sub_1800752B4.c)
 *     sub_18007E7C8 @ 0x18007E7C8 (sub_18007E7C8.c)
 *     sub_1800829D0 @ 0x1800829D0 (sub_1800829D0.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     sub_180083A6C @ 0x180083A6C (sub_180083A6C.c)
 *     sub_1800843D0 @ 0x1800843D0 (sub_1800843D0.c)
 *     sub_18008A680 @ 0x18008A680 (sub_18008A680.c)
 *     sub_1800BCF20 @ 0x1800BCF20 (sub_1800BCF20.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800C2CAC(_BYTE *a1, __int64 *a2, char a3)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  double v8; // xmm10_8
  __int64 v9; // r8
  char v10; // al
  char v11; // r12
  double v12; // xmm0_8
  unsigned int v13; // xmm6_4
  double v14; // xmm0_8
  unsigned int v15; // xmm8_4
  double v16; // xmm0_8
  int v17; // xmm9_4
  double v18; // xmm0_8
  unsigned int v19; // xmm11_4
  double v20; // xmm0_8
  unsigned int v21; // xmm12_4
  double v22; // xmm0_8
  unsigned int v23; // xmm13_4
  __int64 v24; // rbx
  float v25; // xmm6_4
  __int64 v26; // rbx
  unsigned __int64 v27; // rcx
  __int64 v28; // rbx
  unsigned __int64 v29; // rax
  __m128 v30; // xmm0
  _DWORD *v31; // rax
  signed __int64 v32; // r14
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int128 v36; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v37; // [rsp+30h] [rbp-D0h]
  unsigned int v38; // [rsp+38h] [rbp-C8h]
  __int64 v39; // [rsp+40h] [rbp-C0h]
  int v40; // [rsp+48h] [rbp-B8h]
  __int64 *v41; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v42; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v43; // [rsp+68h] [rbp-98h] BYREF
  int v44; // [rsp+70h] [rbp-90h]
  __int64 *v45; // [rsp+78h] [rbp-88h]
  __int64 *v46; // [rsp+80h] [rbp-80h]
  __m128 v47; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v48[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v49; // [rsp+B0h] [rbp-50h] BYREF
  int v50; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v51; // [rsp+C0h] [rbp-40h] BYREF
  int v52; // [rsp+C8h] [rbp-38h]
  _DWORD v53[4]; // [rsp+D0h] [rbp-30h] BYREF
  __m128 v54; // [rsp+E0h] [rbp-20h]

  v6 = sub_1800752B4((__int64)a1, *(_DWORD *)(*a2 + 112));
  LOBYTE(v7) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &unk_180209050, 0LL);
  if ( !(_BYTE)v7 )
    return v7;
  v8 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_180209030);
  LOBYTE(v9) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v6 + 64LL))(v6, &unk_180209070, v9);
  v11 = v10;
  v12 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_180209090);
  v13 = LODWORD(v12);
  v14 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1802090B0);
  v15 = LODWORD(v14);
  v16 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1802090D0);
  v17 = LODWORD(v16);
  v18 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1802090F0);
  v19 = LODWORD(v18);
  v20 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_180209110);
  v21 = LODWORD(v20);
  v22 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_180209130);
  v23 = LODWORD(v22);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_180209150);
  v36 = 0LL;
  sub_1800BCF20((__int64)a1, &v36, a2);
  v24 = v36;
  LOBYTE(v7) = (_QWORD)v36 != 0LL;
  if ( !(_QWORD)v36 )
    goto LABEL_27;
  if ( !a3 )
  {
    if ( !a1[1467] )
      goto LABEL_19;
    v24 = v36;
  }
  v51 = __PAIR64__(v15, v13);
  v52 = v17;
  v49 = qword_18021AB50;
  v25 = *((float *)&qword_18021AB50 + 1);
  v50 = dword_18021AB58;
  if ( v11 )
  {
    v42 = 0LL;
    sub_1800839A4(v24);
    v41 = 0LL;
    v45 = *(__int64 **)(v24 + 384);
    v46 = *(__int64 **)(v24 + 376);
    sub_180013F64(&v41, v46, v45, 0);
    if ( v41 != *(__int64 **)(v24 + 384) )
      sub_180013E28((__int64 *)&v42, v41);
    if ( (_QWORD)v42 )
      *((float *)&v49 + 1) = v25 + *(float *)(v42 + 104);
    if ( *((_QWORD *)&v42 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v42 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v26 = *((_QWORD *)&v42 + 1);
        (***((void (__fastcall ****)(_QWORD))&v42 + 1))(*((_QWORD *)&v42 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v42 + 1) + 8LL))(*((_QWORD *)&v42 + 1));
      }
      v24 = v36;
    }
  }
  sub_18007E7C8(v53, (unsigned __int64 *)&v49, &v51);
  sub_180083A6C(v24);
  *(_DWORD *)(v24 + 144) = v53[0];
  *(_DWORD *)(v24 + 148) = v53[1];
  *(_DWORD *)(v24 + 152) = v53[2];
  v27 = _InterlockedIncrement64(&qword_180208648);
  v28 = v36;
  *(_QWORD *)(v36 + 208) = v27;
  v29 = *(_QWORD *)(v28 + 216);
  if ( v27 >= v29 )
    v29 = v27;
  *(_QWORD *)(v28 + 216) = v29;
  if ( a3 )
  {
LABEL_21:
    v37 = __PAIR64__(v21, v19);
    v38 = v23;
    v30 = _mm_movelh_ps((__m128)__PAIR64__(v21, v19), (__m128)v23);
    sub_1800843D0(*(double *)v30.m128_u64);
    v54 = v30;
    v47 = v30;
    sub_1800829D0(v28, &v47);
    if ( a3 )
    {
LABEL_24:
      sub_1800839A4(v28);
      v43 = *(_QWORD *)(v28 + 172);
      v44 = *(_DWORD *)(v28 + 180);
      v31 = sub_18008A680(v48, v8, &v43);
      v39 = *(_QWORD *)v31;
      v40 = v31[2];
      sub_180083A6C(v28);
      *(_QWORD *)(v28 + 172) = v39;
      *(_DWORD *)(v28 + 180) = v40;
      v32 = _InterlockedExchangeAdd64(&qword_180208648, 1uLL);
      v33 = v36;
      *(_QWORD *)(v36 + 208) = v32 + 1;
      v7 = *(_QWORD *)(v33 + 216);
      if ( v32 + 1 >= v7 )
        v7 = v32 + 1;
      *(_QWORD *)(v33 + 216) = v7;
      goto LABEL_27;
    }
    goto LABEL_22;
  }
LABEL_19:
  if ( a1[1468] )
  {
    v28 = v36;
    goto LABEL_21;
  }
LABEL_22:
  LOBYTE(v7) = a1[1466];
  if ( (_BYTE)v7 )
  {
    v28 = v36;
    goto LABEL_24;
  }
LABEL_27:
  if ( *((_QWORD *)&v36 + 1) )
  {
    LODWORD(v7) = _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v36 + 1) + 8LL));
    if ( !(_DWORD)v7 )
    {
      v34 = *((_QWORD *)&v36 + 1);
      (***((void (__fastcall ****)(_QWORD))&v36 + 1))(*((_QWORD *)&v36 + 1));
      LODWORD(v7) = _InterlockedDecrement((volatile signed __int32 *)(v34 + 12));
      if ( !(_DWORD)v7 )
        LOBYTE(v7) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v36 + 1) + 8LL))(*((_QWORD *)&v36 + 1));
    }
  }
  return v7;
}
