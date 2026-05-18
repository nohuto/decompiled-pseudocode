/*
 * XREFs of sub_18010FEE0 @ 0x18010FEE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_1800703D4 @ 0x1800703D4 (sub_1800703D4.c)
 *     sub_180070948 @ 0x180070948 (sub_180070948.c)
 *     sub_18007AB84 @ 0x18007AB84 (sub_18007AB84.c)
 *     sub_18007B2B4 @ 0x18007B2B4 (sub_18007B2B4.c)
 *     sub_180092708 @ 0x180092708 (sub_180092708.c)
 *     sub_180092714 @ 0x180092714 (sub_180092714.c)
 *     sub_180092720 @ 0x180092720 (sub_180092720.c)
 *     sub_180092874 @ 0x180092874 (sub_180092874.c)
 *     sub_180092A88 @ 0x180092A88 (sub_180092A88.c)
 *     sub_180092A90 @ 0x180092A90 (sub_180092A90.c)
 *     sub_180092AA8 @ 0x180092AA8 (sub_180092AA8.c)
 *     sub_180092B60 @ 0x180092B60 (sub_180092B60.c)
 *     sub_180092DDC @ 0x180092DDC (sub_180092DDC.c)
 *     sub_180092E1C @ 0x180092E1C (sub_180092E1C.c)
 *     sub_1800A5D20 @ 0x1800A5D20 (sub_1800A5D20.c)
 *     sub_1800BD5B0 @ 0x1800BD5B0 (sub_1800BD5B0.c)
 *     sub_1800E2524 @ 0x1800E2524 (sub_1800E2524.c)
 *     sub_18010F1F4 @ 0x18010F1F4 (sub_18010F1F4.c)
 *     _o_powf @ 0x180123946 (_o_powf.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801239AC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18010FEE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  char v8; // r12
  int v9; // ebx
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rax
  __int16 v13; // cx
  char v14; // r15
  char v15; // r13
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // rbx
  int v20; // r14d
  __m128 v21; // xmm0
  __m128 v22; // xmm7
  __m128 v23; // xmm0
  __m128 v24; // xmm6
  __m128 v25; // xmm0
  unsigned int v26; // edx
  __int64 v27; // r12
  __int64 v28; // rax
  volatile signed __int32 *v29; // rbx
  __m128 v30; // xmm0
  __m128 v31; // xmm7
  __m128 v32; // xmm0
  __m128 v33; // xmm6
  __m128 v34; // xmm0
  unsigned int v35; // edx
  __int64 v36; // rax
  volatile signed __int32 *v37; // rbx
  unsigned int v38; // edx
  __int64 v39; // rax
  volatile signed __int32 *v40; // rbx
  __m128i *p_si128; // rax
  unsigned int v42; // edx
  __int64 v43; // rax
  volatile signed __int32 *v44; // rbx
  __m128 v45; // xmm0
  __m128 v46; // xmm7
  __m128 v47; // xmm0
  __m128 v48; // xmm6
  __m128 v49; // xmm0
  unsigned int v50; // edx
  __int64 v51; // rax
  volatile signed __int32 *v52; // rbx
  __int64 v54; // [rsp+20h] [rbp-E0h]
  _DWORD v56[4]; // [rsp+40h] [rbp-C0h] BYREF
  __m128i v57; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v58[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v59; // [rsp+70h] [rbp-90h]
  __int64 v60[2]; // [rsp+80h] [rbp-80h] BYREF
  __m128i si128; // [rsp+90h] [rbp-70h] BYREF
  __m128 v62; // [rsp+A0h] [rbp-60h]
  __m128 v63; // [rsp+B0h] [rbp-50h]
  __m128 v64; // [rsp+C0h] [rbp-40h]
  __int128 v65; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v66; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v67; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v68; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v69[2]; // [rsp+110h] [rbp+10h] BYREF

  v8 = *(_BYTE *)(a3 + 162);
  v9 = 1;
  switch ( v8 )
  {
    case 0:
      sub_180092A90(a2, 1);
      v10 = 0;
LABEL_9:
      sub_180092A88(a2, v10);
      break;
    case 2:
      v10 = 1;
      goto LABEL_9;
    case 3:
      v10 = 3;
      goto LABEL_9;
    case 4:
      v10 = 2;
      goto LABEL_9;
  }
  *(_WORD *)(a2 + 112) = *(_WORD *)(a3 + 160);
  v54 = sub_180070948(a4);
  v11 = sub_1800703D4(a4);
  v12 = sub_18007AB84(v11, 1);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v12 + 64LL))(v12, &unk_18020FE88, 0LL)
    || (v13 = *(_WORD *)(a2 + 112), (v13 & 0x10) == 0) )
  {
    v14 = 0;
    goto LABEL_15;
  }
  v14 = 1;
  if ( (v13 & 0x20) != 0 )
  {
LABEL_15:
    v15 = 1;
    goto LABEL_16;
  }
  v15 = 0;
LABEL_16:
  if ( !v14 || (*(_BYTE *)(a2 + 112) & 1) == 0 )
    v9 = 0;
  sub_180092720(a2);
  if ( !v9 )
  {
    *(_WORD *)(a2 + 112) &= ~1u;
    *(_WORD *)(a2 + 112) |= 2u;
  }
  v16 = sub_1800703D4(a4);
  v17 = sub_18007B2B4(v16);
  v59 = 0LL;
  sub_180020B7C(v58, (__int64)&qword_180213638);
  v57.m128i_i64[0] = (__int64)v58;
  v57.m128i_i64[1] = (__int64)v60;
  v18 = sub_1800BD5B0(v60, &v57);
  v19 = sub_1800A5D20(v17, v18);
  `eh vector destructor iterator'(v58, 0x20uLL, 1uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  sub_180092874(a2, v19, v14);
  v20 = *(_DWORD *)(a3 + 4);
  if ( (v20 & 1) != 0 )
  {
    v62 = _mm_mul_ps(
            (__m128)xmmword_1801DC840,
            _mm_add_ps(
              _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                         _mm_and_ps(
                                           _mm_shuffle_ps(
                                             (__m128)*(unsigned int *)(a3 + 16),
                                             (__m128)*(unsigned int *)(a3 + 16),
                                             0),
                                           (__m128)xmmword_18013FCB0),
                                         (__m128)xmmword_18013FC90)),
              (__m128)xmmword_18013FCA0));
    if ( v15 )
    {
      v21 = (__m128)v62.m128_u32[2];
      *(double *)v21.m128_u64 = o_powf();
      v22 = v21;
      v23 = (__m128)v62.m128_u32[1];
      *(double *)v23.m128_u64 = o_powf();
      v24 = v23;
      v25 = (__m128)v62.m128_u32[0];
      *(double *)v25.m128_u64 = o_powf();
      v62 = _mm_unpacklo_ps(_mm_unpacklo_ps(v25, v22), _mm_unpacklo_ps(v24, (__m128)v62.m128_u32[3]));
    }
    if ( !v14 && v62.m128_f32[3] < 1.0 && !v8 )
      sub_180092A88(a2, 3);
    v26 = *(_DWORD *)(a3 + 20);
    v27 = v54;
    if ( v26 )
    {
      v28 = sub_1800E2524(v54, v26, a5);
      sub_180092B60(a2, (__int64)&qword_180212558, v28, v54);
      sub_180092708(a2);
      v65 = 0LL;
      sub_18010F1F4(&v65, a4, *(_BYTE **)(a3 + 24));
      sub_180092DDC(a2, (__int64)&qword_180212558, &v65);
      if ( v15 )
      {
        v62.m128_u64[0] = xmmword_180214CF0;
        v62.m128_i32[2] = DWORD2(xmmword_180214CF0);
      }
      v29 = (volatile signed __int32 *)*((_QWORD *)&v65 + 1);
      if ( *((_QWORD *)&v65 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v65 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
        }
      }
    }
    sub_180092714(a2);
  }
  else
  {
    v27 = v54;
  }
  if ( (v20 & 2) != 0 )
  {
    v63 = _mm_mul_ps(
            (__m128)xmmword_1801DC840,
            _mm_add_ps(
              _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                         _mm_and_ps(
                                           _mm_shuffle_ps(
                                             (__m128)*(unsigned int *)(a3 + 36),
                                             (__m128)*(unsigned int *)(a3 + 36),
                                             0),
                                           (__m128)xmmword_18013FCB0),
                                         (__m128)xmmword_18013FC90)),
              (__m128)xmmword_18013FCA0));
    if ( v15 )
    {
      v30 = (__m128)v63.m128_u32[2];
      *(double *)v30.m128_u64 = o_powf();
      v31 = v30;
      v32 = (__m128)v63.m128_u32[1];
      *(double *)v32.m128_u64 = o_powf();
      v33 = v32;
      v34 = (__m128)v63.m128_u32[0];
      *(double *)v34.m128_u64 = o_powf();
      v63 = _mm_unpacklo_ps(_mm_unpacklo_ps(v34, v31), _mm_unpacklo_ps(v33, (__m128)v63.m128_u32[3]));
    }
    v35 = *(_DWORD *)(a3 + 40);
    if ( v35 )
    {
      v36 = sub_1800E2524(v27, v35, a5);
      sub_180092B60(a2, (__int64)&qword_180212598, v36, v27);
      sub_180092708(a2);
      v66 = 0LL;
      sub_18010F1F4(&v66, a4, *(_BYTE **)(a3 + 48));
      sub_180092DDC(a2, (__int64)&qword_180212598, &v66);
      if ( v15 )
        v63 = (__m128)xmmword_180214CF0;
      v37 = (volatile signed __int32 *)*((_QWORD *)&v66 + 1);
      if ( *((_QWORD *)&v66 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v66 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v37)(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
        }
      }
    }
    sub_180092714(a2);
    v20 = *(_DWORD *)(a3 + 4);
  }
  if ( (v20 & 4) != 0 )
  {
    v38 = *(_DWORD *)(a3 + 84);
    if ( v38 )
    {
      v39 = sub_1800E2524(v27, v38, a5);
      sub_180092B60(a2, (__int64)&qword_180212578, v39, v27);
      sub_180092708(a2);
      v67 = 0LL;
      sub_18010F1F4(&v67, a4, *(_BYTE **)(a3 + 88));
      sub_180092DDC(a2, (__int64)&qword_180212578, &v67);
      v40 = (volatile signed __int32 *)*((_QWORD *)&v67 + 1);
      if ( *((_QWORD *)&v67 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v67 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v40)(v40);
          if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
        }
      }
    }
    if ( v14 )
    {
      v56[0] = *(_DWORD *)(a3 + 96);
      v56[1] = v56[0];
      v56[2] = 1065353216;
      v56[3] = 1065353216;
      p_si128 = (__m128i *)v56;
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_1801D5310);
      v20 = *(_DWORD *)(a3 + 4);
      p_si128 = &si128;
    }
    v69[1] = *p_si128;
    sub_180092E1C(a2);
  }
  if ( (v20 & 0x10) != 0 )
  {
    v42 = *(_DWORD *)(a3 + 68);
    if ( v42 )
    {
      v43 = sub_1800E2524(v27, v42, a5);
      sub_180092B60(a2, (__int64)&qword_1802125B8, v43, v27);
      sub_180092708(a2);
      v68 = 0LL;
      sub_18010F1F4(&v68, a4, *(_BYTE **)(a3 + 72));
      sub_180092DDC(a2, (__int64)&qword_1802125B8, &v68);
      v44 = (volatile signed __int32 *)*((_QWORD *)&v68 + 1);
      if ( *((_QWORD *)&v68 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v68 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v44)(v44);
          if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
        }
      }
    }
    if ( v14 )
    {
      v64 = _mm_mul_ps(
              (__m128)xmmword_1801DC840,
              _mm_add_ps(
                _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                           _mm_and_ps(
                                             _mm_shuffle_ps(
                                               (__m128)*(unsigned int *)(a3 + 60),
                                               (__m128)*(unsigned int *)(a3 + 60),
                                               0),
                                             (__m128)xmmword_18013FCB0),
                                           (__m128)xmmword_18013FC90)),
                (__m128)xmmword_18013FCA0));
      if ( v15 )
      {
        v45 = (__m128)v64.m128_u32[2];
        *(double *)v45.m128_u64 = o_powf();
        v46 = v45;
        v47 = (__m128)v64.m128_u32[1];
        *(double *)v47.m128_u64 = o_powf();
        v48 = v47;
        v49 = (__m128)v64.m128_u32[0];
        *(double *)v49.m128_u64 = o_powf();
        v64 = _mm_unpacklo_ps(_mm_unpacklo_ps(v49, v46), _mm_unpacklo_ps(v48, (__m128)v64.m128_u32[3]));
      }
      sub_180092714(a2);
    }
  }
  if ( (v20 & 0x20) != 0 )
  {
    v50 = *(_DWORD *)(a3 + 120);
    if ( v50 )
    {
      v51 = sub_1800E2524(v27, v50, a5);
      sub_180092B60(a2, (__int64)&qword_1802125F8, v51, v27);
      sub_180092708(a2);
      v69[0] = 0LL;
      sub_18010F1F4(v69, a4, *(_BYTE **)(a3 + 128));
      sub_180092DDC(a2, (__int64)&qword_1802125F8, v69);
      v52 = (volatile signed __int32 *)*((_QWORD *)&v69[0] + 1);
      if ( *((_QWORD *)&v69[0] + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v69[0] + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v52)(v52);
          if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
        }
      }
    }
    if ( v14 )
      sub_180092AA8(a2);
  }
  return sub_180092AA8(a2);
}
