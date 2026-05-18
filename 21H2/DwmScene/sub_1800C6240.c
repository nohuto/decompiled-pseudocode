/*
 * XREFs of sub_1800C6240 @ 0x1800C6240
 * Callers:
 *     sub_1800C3600 @ 0x1800C3600 (sub_1800C3600.c)
 * Callees:
 *     sub_18007AB84 @ 0x18007AB84 (sub_18007AB84.c)
 *     sub_18007B2B4 @ 0x18007B2B4 (sub_18007B2B4.c)
 *     sub_1800A5C64 @ 0x1800A5C64 (sub_1800A5C64.c)
 *     sub_1800F5710 @ 0x1800F5710 (sub_1800F5710.c)
 *     sub_1800F5830 @ 0x1800F5830 (sub_1800F5830.c)
 *     sub_1800F5E58 @ 0x1800F5E58 (sub_1800F5E58.c)
 *     sub_18011AA48 @ 0x18011AA48 (sub_18011AA48.c)
 *     _o_powf @ 0x180123946 (_o_powf.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C6240(__m128 *a1, __int64 a2, int a3)
{
  __int64 v5; // rdi
  int v6; // r13d
  int v7; // r15d
  int v8; // eax
  char v9; // si
  BOOL v10; // eax
  float v11; // xmm10_4
  BOOL v12; // eax
  float v13; // xmm9_4
  BOOL v14; // eax
  float v15; // xmm8_4
  BOOL v16; // eax
  float v17; // xmm7_4
  BOOL v18; // eax
  float v19; // xmm6_4
  BOOL v20; // eax
  bool v21; // al
  float v22; // xmm14_4
  int v23; // r12d
  int v24; // xmm15_4
  int v25; // esi
  double v26; // xmm0_8
  double v27; // xmm0_8
  double v28; // xmm0_8
  int v29; // xmm11_4
  double v30; // xmm0_8
  int v31; // xmm9_4
  double v32; // xmm0_8
  int v33; // xmm7_4
  double v34; // xmm0_8
  int v35; // xmm8_4
  double v36; // xmm0_8
  int v37; // xmm6_4
  __int64 v38; // rax
  __int64 result; // rax
  volatile signed __int32 *v40; // rbx
  signed __int32 v41; // eax
  bool v42; // zf
  float v43; // [rsp+2Ch] [rbp-D4h]
  float v44; // [rsp+30h] [rbp-D0h]
  float v45; // [rsp+34h] [rbp-CCh]
  float v46; // [rsp+38h] [rbp-C8h]
  _BYTE v47[16]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v48[16]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v49; // [rsp+78h] [rbp-88h] BYREF
  __m128 v50; // [rsp+88h] [rbp-78h]
  int v51; // [rsp+98h] [rbp-68h]
  int v52; // [rsp+9Ch] [rbp-64h]
  int v53; // [rsp+A0h] [rbp-60h]
  float v54; // [rsp+A4h] [rbp-5Ch]
  int v55; // [rsp+A8h] [rbp-58h]
  int v56; // [rsp+ACh] [rbp-54h]
  int v57; // [rsp+B0h] [rbp-50h]
  float v58; // [rsp+B4h] [rbp-4Ch]
  float v59; // [rsp+B8h] [rbp-48h]
  float v60; // [rsp+BCh] [rbp-44h]
  float v61; // [rsp+C0h] [rbp-40h]
  float v62; // [rsp+C4h] [rbp-3Ch]
  float v63; // [rsp+C8h] [rbp-38h]
  float v64; // [rsp+CCh] [rbp-34h]
  int v65; // [rsp+D0h] [rbp-30h]
  float v66; // [rsp+D4h] [rbp-2Ch]

  v5 = sub_18007AB84((__int64)a1, a3);
  v6 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 72LL))(v5, &unk_180210028, 0LL);
  v7 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 72LL))(v5, &unk_180210048, 0LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_180210008, 0LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_18020FE88, 0LL);
  v50 = a1[92];
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 88LL))(a2);
  v50 = _mm_mul_ps(
          v50,
          _mm_shuffle_ps((__m128)COERCE_UNSIGNED_INT((float)v8), (__m128)COERCE_UNSIGNED_INT((float)v8), 0));
  if ( a1 == (__m128 *)-1472LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( _mm_movemask_ps(_mm_cmpneq_ps((__m128)xmmword_180214C78, a1[92])) )
    a1[91].m128_i8[1] = 1;
  else
    v50.m128_i32[1] = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_18020FF28, 0LL);
  v10 = v9
     && (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_18020FF48, 0LL);
  v11 = (float)v10;
  v12 = v9
     && (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_18020FF68, 0LL);
  v13 = (float)v12;
  v14 = v9
     && (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_18020FF88, 0LL);
  v15 = (float)v14;
  v16 = v9
     && (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_18020FFA8, 0LL);
  v17 = (float)v16;
  v18 = v9
     && (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_18020FFC8, 0LL);
  v19 = (float)v18;
  v20 = v9
     && (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_18020FFE8, 0LL);
  v21 = !v9 || v11 == 0.0 || v13 == 0.0 || v15 == 0.0 || v17 == 0.0 || v19 == 0.0 || (float)v20 == 0.0;
  if ( v7 || v6 != 2 )
    v21 = 1;
  if ( v21 )
    a1[91].m128_i8[1] = 1;
  v43 = 0.0;
  v44 = 0.0;
  v45 = 1.0;
  v46 = 0.0;
  v22 = 1.0;
  v23 = (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_180212108, 0LL);
  v24 = 0;
  v25 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 72LL))(v5, &unk_180212128, 0LL);
  if ( (_BYTE)v23 )
  {
    v26 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1802120E8);
    v22 = *(float *)&v26 / 100.0;
    a1[91].m128_i8[1] = 1;
  }
  if ( v25 )
  {
    if ( v25 == 2 )
      v24 = 1065353216;
    a1[91].m128_i8[1] = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1802121A8, 0LL) )
  {
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_180212188);
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_180212168);
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_180212148);
    sub_18011AA48(v47);
    v43 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1802121C8);
    a1[91].m128_i8[1] = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_180212248, 0LL) )
  {
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_180212228);
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_180212208);
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1802121E8);
    sub_18011AA48(v48);
    v44 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_180212268);
    a1[91].m128_i8[1] = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1802122A8, 0LL) )
  {
    v27 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_180212288);
    v45 = *(float *)&v27 / 100.0;
    v46 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1802122C8);
    a1[91].m128_i8[1] = 1;
  }
  v28 = ((double (*)(void))o_powf)();
  v29 = LODWORD(v28);
  v30 = ((double (*)(void))o_powf)();
  v31 = LODWORD(v30);
  v32 = ((double (*)(void))o_powf)();
  v33 = LODWORD(v32);
  v34 = ((double (*)(void))o_powf)();
  v35 = LODWORD(v34);
  v36 = ((double (*)(void))o_powf)();
  v37 = LODWORD(v36);
  *(float *)&v36 = o_powf();
  v51 = v33;
  v52 = v31;
  v53 = v29;
  v54 = v43;
  v55 = LODWORD(v36);
  v56 = v37;
  v57 = v35;
  v58 = v44;
  v59 = v45;
  v60 = v45;
  v61 = v45;
  v62 = v46;
  v63 = v22;
  v64 = (float)v23;
  v65 = v24;
  v66 = (float)(v25 != 0);
  v49 = 0LL;
  v38 = sub_18007B2B4((__int64)a1);
  sub_1800A5C64(v38, &v49);
  sub_1800F5830(v49);
  sub_1800F5830(v49);
  sub_1800F5710(v49);
  sub_1800F5710(v49);
  sub_1800F5710(v49);
  sub_1800F5710(v49);
  sub_1800F5710(v49);
  sub_1800F5710(v49);
  sub_1800F5710(v49);
  sub_1800F5710(v49);
  sub_1800F5E58(v49);
  sub_1800F5E58(v49);
  sub_1800F5E58(v49);
  sub_1800F5E58(v49);
  result = sub_1800F5E58(v49);
  v40 = (volatile signed __int32 *)*((_QWORD *)&v49 + 1);
  if ( *((_QWORD *)&v49 + 1) )
  {
    v41 = _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 8LL), 0xFFFFFFFF);
    v42 = v41 == 1;
    result = (unsigned int)(v41 - 1);
    if ( v42 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v40)(v40);
      result = (unsigned int)_InterlockedDecrement(v40 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
    }
  }
  return result;
}
