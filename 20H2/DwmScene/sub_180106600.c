/*
 * XREFs of sub_180106600 @ 0x180106600
 * Callers:
 *     sub_180106458 @ 0x180106458 (sub_180106458.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18007DB28 @ 0x18007DB28 (sub_18007DB28.c)
 *     sub_18007E3E4 @ 0x18007E3E4 (sub_18007E3E4.c)
 *     sub_18007E6A4 @ 0x18007E6A4 (sub_18007E6A4.c)
 *     sub_18007E934 @ 0x18007E934 (sub_18007E934.c)
 *     sub_18007FC9C @ 0x18007FC9C (sub_18007FC9C.c)
 *     sub_180080408 @ 0x180080408 (sub_180080408.c)
 *     sub_1800807D8 @ 0x1800807D8 (sub_1800807D8.c)
 *     sub_180081344 @ 0x180081344 (sub_180081344.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     sub_18008AA80 @ 0x18008AA80 (sub_18008AA80.c)
 *     sub_1800AA14C @ 0x1800AA14C (sub_1800AA14C.c)
 *     sub_1800ACD60 @ 0x1800ACD60 (sub_1800ACD60.c)
 *     sub_1800B7544 @ 0x1800B7544 (sub_1800B7544.c)
 *     sub_1800B7670 @ 0x1800B7670 (sub_1800B7670.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18011EB10 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     cosf @ 0x18011F766 (cosf.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
char *__fastcall sub_180106600(char *a1, __int64 *a2, __int64 a3)
{
  __int64 *v3; // rbx
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r13
  __int64 v6; // r15
  __int64 v7; // rdi
  volatile signed __int32 *v8; // r14
  __int64 v9; // xmm8_8
  __int64 v10; // xmm11_8
  int v11; // esi
  __int64 v12; // rdx
  signed __int32 v13; // eax
  double v14; // xmm10_8
  __int64 v15; // rdx
  signed __int32 v16; // eax
  __int64 v17; // rdx
  signed __int32 v18; // eax
  float *v19; // rax
  float v20; // xmm2_4
  float v21; // xmm1_4
  __m128 v22; // xmm2
  int v23; // eax
  __int64 v24; // rbx
  double v25; // xmm1_8
  int v26; // xmm6_4
  float v27; // xmm6_4
  double v28; // xmm0_8
  double v29; // xmm7_8
  __m128 v30; // xmm2
  _DWORD *v31; // rax
  __int64 v32; // rax
  _DWORD *v33; // rax
  __int64 v34; // rax
  unsigned __int32 v35; // xmm1_4
  unsigned __int32 v36; // xmm2_4
  __int64 v37; // rax
  __int64 *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rbx
  int v41; // edi
  signed __int32 v42; // eax
  __int64 v43; // rbx
  volatile signed __int32 *v44; // rdi
  __int64 v45; // rsi
  unsigned __int64 v46; // r15
  __int64 v47; // rbx
  __int64 v48; // rbx
  _OWORD *v49; // rax
  float v50; // xmm1_4
  int v51; // xmm4_4
  float v52; // xmm0_4
  int v53; // eax
  int v54; // xmm3_4
  int v55; // xmm5_4
  int v56; // xmm2_4
  __int64 v57; // rax
  _DWORD *v58; // rax
  int v60; // [rsp+38h] [rbp-D0h]
  __int128 v62; // [rsp+48h] [rbp-C0h]
  __int128 v63; // [rsp+58h] [rbp-B0h]
  __int128 v64; // [rsp+68h] [rbp-A0h]
  __int128 v65; // [rsp+78h] [rbp-90h]
  __int64 v66; // [rsp+88h] [rbp-80h]
  __int64 v67; // [rsp+98h] [rbp-70h]
  int v68; // [rsp+A0h] [rbp-68h]
  __int64 v69; // [rsp+A8h] [rbp-60h]
  int v70; // [rsp+B0h] [rbp-58h]
  __int64 *v71; // [rsp+B8h] [rbp-50h] BYREF
  char *v72; // [rsp+C0h] [rbp-48h]
  __int128 v73; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v74; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int32 v75; // [rsp+E0h] [rbp-28h]
  _BYTE *v76; // [rsp+E8h] [rbp-20h]
  __int64 *v77; // [rsp+F0h] [rbp-18h]
  __int128 v78; // [rsp+F8h] [rbp-10h]
  char *v79; // [rsp+108h] [rbp+0h]
  __int64 *v80; // [rsp+110h] [rbp+8h]
  __int64 *v81; // [rsp+118h] [rbp+10h]
  int v82[3]; // [rsp+120h] [rbp+18h] BYREF
  int v83[3]; // [rsp+12Ch] [rbp+24h] BYREF
  __m128 v84; // [rsp+138h] [rbp+30h]
  char v85[64]; // [rsp+148h] [rbp+40h] BYREF
  char v86[64]; // [rsp+188h] [rbp+80h] BYREF
  unsigned __int64 v87; // [rsp+1C8h] [rbp+C0h] BYREF
  float v88; // [rsp+1D0h] [rbp+C8h]
  __int32 v89; // [rsp+1D8h] [rbp+D0h] BYREF
  unsigned __int32 v90; // [rsp+1DCh] [rbp+D4h]
  unsigned __int32 v91; // [rsp+1E0h] [rbp+D8h]
  __m128 v92; // [rsp+1E8h] [rbp+E0h]
  unsigned __int64 v93; // [rsp+1F8h] [rbp+F0h] BYREF
  __int32 v94; // [rsp+200h] [rbp+F8h]
  int v95; // [rsp+208h] [rbp+100h] BYREF
  __m128 v96[4]; // [rsp+218h] [rbp+110h] BYREF

  v3 = a2;
  v77 = a2;
  v72 = a1;
  v79 = a1;
  `eh vector constructor iterator'(
    a1,
    0x10uLL,
    3uLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_96);
  v60 = 1;
  v4 = (v3[1] - *v3) >> 4;
  if ( v4 > 3 )
  {
    v4 = 3LL;
LABEL_4:
    v5 = 0LL;
    while ( 1 )
    {
      v6 = 16 * v5;
      v7 = *v3;
      v8 = *(volatile signed __int32 **)(16 * v5 + *v3 + 8);
      if ( v8 )
      {
        _InterlockedIncrement(v8 + 2);
        v8 = *(volatile signed __int32 **)(v6 + v7 + 8);
      }
      v66 = *(_QWORD *)(v6 + v7);
      v84 = (__m128)_mm_loadu_si128((const __m128i *)(v66 + 88));
      v92 = _mm_mul_ps(
              _mm_shuffle_ps((__m128)*(unsigned int *)(v66 + 104), (__m128)*(unsigned int *)(v66 + 104), 0),
              v84);
      v9 = 0LL;
      v76 = (_BYTE *)(v66 + 72);
      if ( !*(_BYTE *)(v66 + 72) )
      {
        v92.m128_u64[0] = xmmword_18020DC70;
        v92.m128_i32[2] = DWORD2(xmmword_18020DC70);
      }
      v10 = *(unsigned int *)(v66 + 116);
      v11 = *(_DWORD *)(v66 + 120);
      v63 = 0LL;
      v12 = *(_QWORD *)(v66 + 64);
      if ( v12 )
      {
        while ( 1 )
        {
          v13 = *(_DWORD *)(v12 + 8);
          if ( !v13 )
            break;
          if ( v13 == _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v13 + 1, v13) )
          {
            v63 = *(_OWORD *)(v66 + 56);
            break;
          }
        }
      }
      sub_1800807D8(v63, (float *)&v95);
      if ( *((_QWORD *)&v63 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v63 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (***((void (__fastcall ****)(_QWORD))&v63 + 1))(*((_QWORD *)&v63 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v63 + 1) + 12LL), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v63 + 1) + 8LL))(*((_QWORD *)&v63 + 1));
        }
      }
      v14 = o_cbrtf();
      v64 = 0LL;
      v15 = *(_QWORD *)(v66 + 64);
      if ( v15 )
      {
        while ( 1 )
        {
          v16 = *(_DWORD *)(v15 + 8);
          if ( !v16 )
            break;
          if ( v16 == _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 8), v16 + 1, v16) )
          {
            v64 = *(_OWORD *)(v66 + 56);
            break;
          }
        }
      }
      sub_180080408(v64, (__int64)&v89);
      if ( *((_QWORD *)&v64 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v64 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (***((void (__fastcall ****)(_QWORD))&v64 + 1))(*((_QWORD *)&v64 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v64 + 1) + 12LL), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v64 + 1) + 8LL))(*((_QWORD *)&v64 + 1));
        }
      }
      v65 = 0LL;
      v17 = *(_QWORD *)(v66 + 64);
      if ( v17 )
      {
        while ( 1 )
        {
          v18 = *(_DWORD *)(v17 + 8);
          if ( !v18 )
            break;
          if ( v18 == _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 8), v18 + 1, v18) )
          {
            v65 = *(_OWORD *)(v66 + 56);
            break;
          }
        }
      }
      v19 = (float *)sub_18007FC9C(v65, (__int64)v85);
      v20 = -v19[10];
      v21 = -v19[9];
      *(float *)&v87 = -v19[8];
      *((float *)&v87 + 1) = v21;
      v88 = v20;
      if ( *((_QWORD *)&v65 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v65 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (***((void (__fastcall ****)(_QWORD))&v65 + 1))(*((_QWORD *)&v65 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v65 + 1) + 12LL), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v65 + 1) + 8LL))(*((_QWORD *)&v65 + 1));
        }
      }
      sub_180081344(&v87);
      if ( v11 == 2 )
      {
        v22 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps((__m128)v87, (__m128)LODWORD(v88)));
        v89 = v22.m128_i32[0];
        v90 = _mm_shuffle_ps(v22, v22, 85).m128_u32[0];
        v91 = _mm_shuffle_ps(v22, v22, 170).m128_u32[0];
      }
      v23 = sub_18008AA80(v66);
      if ( !v23 )
      {
        if ( v11 == 2 )
          goto LABEL_48;
        v23 = 2;
      }
      if ( v11 >= 0 )
      {
        if ( v11 <= 1 )
        {
          switch ( v23 )
          {
            case 1:
              v9 = 1034090883LL;
              break;
            case 2:
              v9 = 1065353216LL;
              break;
            case 4:
              HIDWORD(v9) = HIDWORD(v10);
              *(float *)&v9 = *(float *)&v10 * *(float *)&v10;
              break;
          }
        }
        else if ( v11 == 2 )
        {
          if ( v23 != 3 )
          {
            if ( v23 == 4 )
            {
              HIDWORD(v9) = 0;
              *(float *)&v9 = (float)(1.0 - cosf(fmaxf(0.001, *(float *)&v10))) * 6.2831855;
            }
            goto LABEL_49;
          }
LABEL_48:
          v9 = 1065353216LL;
          goto LABEL_49;
        }
      }
      if ( v11 == 1 )
      {
        v27 = cosf((float)(fmaxf(1.0, *(float *)(v66 + 112)) * 0.017453292) * 0.5);
        v28 = o_log2f();
        HIDWORD(v29) = HIDWORD(v28);
        *(float *)&v29 = *(float *)&v28 / (float)(v27 - 1.0);
        v30 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps((__m128)v87, (__m128)LODWORD(v88)));
        LODWORD(v74) = v30.m128_i32[0];
        HIDWORD(v74) = _mm_shuffle_ps(v30, v30, 85).m128_u32[0];
        v75 = _mm_shuffle_ps(v30, v30, 170).m128_u32[0];
        v31 = sub_18007E6A4(v82, &v74, v29);
        v67 = *(_QWORD *)v31;
        v68 = v31[2];
        v24 = a3;
        v32 = *(_QWORD *)(a3 + 64) + 16 * (v5 + 25);
        *(_QWORD *)v32 = v67;
        *(_DWORD *)(v32 + 8) = v68;
        *(float *)(v32 + 12) = -*(float *)&v29;
        goto LABEL_50;
      }
LABEL_49:
      v24 = a3;
      *(_OWORD *)(*(_QWORD *)(a3 + 64) + 16 * (v5 + 25)) = xmmword_18021AB60;
LABEL_50:
      v93 = v92.m128_u64[0];
      v94 = v92.m128_i32[2];
      if ( v11 == 2 )
      {
        v26 = 0;
      }
      else
      {
        HIDWORD(v25) = HIDWORD(v14);
        *(float *)&v25 = *(float *)&v14 * *(float *)&v14;
        sub_18007E934(&v93, v25);
        v26 = 1065353216;
      }
      v33 = sub_18007E6A4(v83, &v93, *(double *)&v9);
      v69 = *(_QWORD *)v33;
      v70 = v33[2];
      v34 = *(_QWORD *)(v24 + 64) + 16 * (v5 + 28);
      *(_QWORD *)v34 = v69;
      *(_DWORD *)(v34 + 8) = v70;
      *(_DWORD *)(v34 + 12) = v26;
      v35 = v90;
      v36 = v91;
      v37 = *(_QWORD *)(v24 + 64) + 16 * (v5 + 22);
      *(_DWORD *)v37 = v89;
      *(_DWORD *)(v37 + 4) = v35;
      *(_DWORD *)(v37 + 8) = v36;
      *(float *)(v37 + 12) = *(float *)&v14 * *(float *)&v10;
      if ( v5 < 3 )
      {
        v38 = (__int64 *)&v72[v6];
        if ( !*(_QWORD *)&v72[v6] )
        {
          v62 = 0LL;
          v39 = *(_QWORD *)(v66 + 64);
          if ( v39 )
          {
            while ( 1 )
            {
              v42 = *(_DWORD *)(v39 + 8);
              if ( !v42 )
                break;
              if ( v42 == _InterlockedCompareExchange((volatile signed __int32 *)(v39 + 8), v42 + 1, v42) )
              {
                v40 = *(_QWORD *)(v66 + 56);
                *((_QWORD *)&v62 + 1) = *(_QWORD *)(v66 + 64);
                goto LABEL_67;
              }
            }
          }
          v40 = 0LL;
LABEL_67:
          sub_1800839A4(v40);
          v71 = 0LL;
          v80 = *(__int64 **)(v40 + 384);
          v81 = *(__int64 **)(v40 + 376);
          sub_1800B7670(&v71, v81, v80, 0);
          v41 = v60 | 2;
          if ( v71 == *(__int64 **)(v40 + 384) )
            v73 = 0LL;
          else
            sub_1800B7544((__int64 *)&v73, v71);
          std::shared_ptr<__ExceptionPtr>::operator=(v38, (__int64 *)&v73);
          if ( *((_QWORD *)&v73 + 1) )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v73 + 1) + 8LL), 0xFFFFFFFF) == 1 )
            {
              v43 = *((_QWORD *)&v73 + 1);
              (***((void (__fastcall ****)(_QWORD))&v73 + 1))(*((_QWORD *)&v73 + 1));
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v43 + 12), 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v73 + 1) + 8LL))(*((_QWORD *)&v73 + 1));
            }
          }
          v60 |= 2u;
          if ( *((_QWORD *)&v62 + 1) )
          {
            v60 = v41;
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v62 + 1) + 8LL), 0xFFFFFFFF) == 1 )
            {
              (***((void (__fastcall ****)(_QWORD))&v62 + 1))(*((_QWORD *)&v62 + 1));
              v60 = v41;
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v62 + 1) + 12LL), 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v62 + 1) + 8LL))(*((_QWORD *)&v62 + 1));
                v60 = v41;
              }
            }
          }
        }
        v78 = 0LL;
        v44 = (volatile signed __int32 *)v38[1];
        if ( v44 )
        {
          _InterlockedIncrement(v44 + 2);
          v44 = (volatile signed __int32 *)v38[1];
        }
        v45 = *v38;
        *(_QWORD *)&v78 = v45;
        *((_QWORD *)&v78 + 1) = v44;
        if ( v45 )
        {
          v46 = v5 << 6;
          v47 = v66;
          if ( *(_BYTE *)(v66 + 124) )
          {
            sub_1800AA14C(v45, v96);
            sub_1800ACD60(v96, (_OWORD *)(v46 + *(_QWORD *)(a3 + 64)));
          }
          else
          {
            v48 = *(_QWORD *)(a3 + 64);
            v49 = (_OWORD *)sub_18007DB28(
                              (__int64)v86,
                              (int *)&xmmword_18021AB60,
                              &xmmword_18021AB60,
                              &xmmword_18021AB60,
                              &xmmword_18021AB60);
            sub_18007E3E4((_OWORD *)(v48 + v46), v49);
            v47 = v66;
          }
          v50 = 1.0 / (float)*(int *)(v45 + 1940);
          if ( *(_BYTE *)(v45 + 1952) )
            v51 = 1065353216;
          else
            v51 = 0;
          v52 = *(float *)(v45 + 1948);
          v53 = *(_DWORD *)(v45 + 316);
          if ( v53 == 2 || v53 == 4 )
            v52 = -v52;
          if ( *(_DWORD *)(v45 + 1960) == 1 )
            v54 = 1065353216;
          else
            v54 = 0;
          v55 = *(_DWORD *)(v45 + 1968);
          if ( *v76 && *(_BYTE *)(v47 + 124) )
            v56 = 1065353216;
          else
            v56 = 0;
          v57 = *(_QWORD *)(a3 + 64) + 16 * (v5 + 31);
          *(float *)v57 = v50;
          *(float *)(v57 + 4) = v50;
          *(_DWORD *)(v57 + 8) = v51;
          *(float *)(v57 + 12) = v52;
          v58 = (_DWORD *)(*(_QWORD *)(a3 + 64) + 16 * (v5 + 34));
          *v58 = *(_DWORD *)(v45 + 1956);
          v58[1] = v54;
          v58[2] = v55;
          v58[3] = v56;
        }
        if ( v44 )
        {
          if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v44)(v44);
            if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
          }
        }
      }
      if ( v8 )
      {
        if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
          if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
        }
      }
      ++v5;
      v3 = v77;
      if ( v5 >= v4 )
        return v72;
    }
  }
  if ( v4 )
    goto LABEL_4;
  return v72;
}
