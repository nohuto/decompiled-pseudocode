/*
 * XREFs of sub_18001D460 @ 0x18001D460
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001070C @ 0x18001070C (sub_18001070C.c)
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     sub_180017CFC @ 0x180017CFC (sub_180017CFC.c)
 *     sub_180018F70 @ 0x180018F70 (sub_180018F70.c)
 *     sub_180019258 @ 0x180019258 (sub_180019258.c)
 *     sub_180019810 @ 0x180019810 (sub_180019810.c)
 *     sub_180019F78 @ 0x180019F78 (sub_180019F78.c)
 *     sub_18001BA00 @ 0x18001BA00 (sub_18001BA00.c)
 *     sub_18001FA88 @ 0x18001FA88 (sub_18001FA88.c)
 *     sub_1800208CC @ 0x1800208CC (sub_1800208CC.c)
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_18007A810 @ 0x18007A810 (sub_18007A810.c)
 *     sub_180088444 @ 0x180088444 (sub_180088444.c)
 *     sub_1800AFD2C @ 0x1800AFD2C (sub_1800AFD2C.c)
 *     sub_1800B1EC0 @ 0x1800B1EC0 (sub_1800B1EC0.c)
 *     sub_1800B1F9C @ 0x1800B1F9C (sub_1800B1F9C.c)
 *     sub_1800B2100 @ 0x1800B2100 (sub_1800B2100.c)
 *     sub_1800B47C0 @ 0x1800B47C0 (sub_1800B47C0.c)
 *     sub_1800B5060 @ 0x1800B5060 (sub_1800B5060.c)
 *     sub_1800B5130 @ 0x1800B5130 (sub_1800B5130.c)
 *     sub_1800B93FC @ 0x1800B93FC (sub_1800B93FC.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10 #try_helpers=1
__int64 __fastcall sub_18001D460(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  volatile signed __int32 *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rbx
  float v12; // xmm9_4
  float v13; // xmm6_4
  float v14; // xmm7_4
  int v15; // ecx
  int v16; // eax
  _QWORD *v17; // rax
  volatile signed __int32 *v18; // r15
  __int64 v19; // r13
  float v20; // xmm1_4
  volatile signed __int32 *v21; // rbx
  __m128 v22; // xmm2
  volatile signed __int32 *v23; // rbx
  char v24; // cl
  float v25; // xmm4_4
  int v26; // xmm3_4
  float v27; // xmm2_4
  __int64 v28; // r8
  __int64 v29; // rdx
  signed __int32 v30; // eax
  __int64 v31; // rdx
  __int128 v32; // xmm3
  __int128 v33; // xmm2
  __int128 v34; // xmm0
  __int64 v35; // rcx
  volatile signed __int32 *v36; // rbx
  float v39[4]; // [rsp+28h] [rbp-360h]
  __int128 v40; // [rsp+38h] [rbp-350h]
  __int128 v41; // [rsp+48h] [rbp-340h] BYREF
  _DWORD v42[4]; // [rsp+60h] [rbp-328h] BYREF
  __int64 v43; // [rsp+70h] [rbp-318h]
  __int128 v44; // [rsp+78h] [rbp-310h]
  __int128 v45; // [rsp+88h] [rbp-300h]
  int v46; // [rsp+98h] [rbp-2F0h] BYREF
  __int128 v47; // [rsp+9Ch] [rbp-2ECh]
  int v48; // [rsp+ACh] [rbp-2DCh]
  __int128 v49; // [rsp+B0h] [rbp-2D8h]
  int v50; // [rsp+C0h] [rbp-2C8h]
  int v51; // [rsp+C4h] [rbp-2C4h]
  float v52; // [rsp+C8h] [rbp-2C0h]
  int v53; // [rsp+CCh] [rbp-2BCh]
  float v54; // [rsp+D0h] [rbp-2B8h]
  int v55; // [rsp+D4h] [rbp-2B4h]
  float v56; // [rsp+D8h] [rbp-2B0h] BYREF
  __int128 v57; // [rsp+DCh] [rbp-2ACh]
  float v58; // [rsp+ECh] [rbp-29Ch]
  __int128 v59; // [rsp+F0h] [rbp-298h]
  int v60; // [rsp+100h] [rbp-288h]
  int v61; // [rsp+104h] [rbp-284h]
  float v62; // [rsp+108h] [rbp-280h]
  float v63; // [rsp+10Ch] [rbp-27Ch]
  int v64; // [rsp+110h] [rbp-278h]
  int v65; // [rsp+114h] [rbp-274h]
  __int64 v66[4]; // [rsp+118h] [rbp-270h] BYREF
  unsigned __int64 v67; // [rsp+138h] [rbp-250h]
  __int64 v68; // [rsp+140h] [rbp-248h]
  volatile signed __int32 *v69; // [rsp+148h] [rbp-240h]
  __int64 v70; // [rsp+150h] [rbp-238h]
  volatile signed __int32 *v71; // [rsp+158h] [rbp-230h]
  __int128 v72; // [rsp+160h] [rbp-228h] BYREF
  __int128 v73; // [rsp+170h] [rbp-218h] BYREF
  _BYTE v74[64]; // [rsp+180h] [rbp-208h] BYREF
  _OWORD v75[4]; // [rsp+1C0h] [rbp-1C8h] BYREF
  _BYTE v76[64]; // [rsp+200h] [rbp-188h] BYREF
  __int128 v77; // [rsp+240h] [rbp-148h] BYREF
  unsigned __int64 v78; // [rsp+250h] [rbp-138h]
  unsigned __int64 v79; // [rsp+258h] [rbp-130h]
  __int64 v80; // [rsp+260h] [rbp-128h] BYREF
  __int128 v81; // [rsp+268h] [rbp-120h] BYREF
  __int128 v82; // [rsp+278h] [rbp-110h] BYREF
  _OWORD v83[4]; // [rsp+290h] [rbp-F8h] BYREF
  _BYTE v84[64]; // [rsp+2D0h] [rbp-B8h] BYREF

  v43 = a3;
  v80 = 0LL;
  sub_180018F70(&v80);
  v44 = 0LL;
  v7 = *(volatile signed __int32 **)(a2 + 24);
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v7 = *(volatile signed __int32 **)(a2 + 24);
  }
  v8 = *(_QWORD *)(a2 + 16);
  v9 = v8;
  *(_QWORD *)&v44 = v8;
  *((_QWORD *)&v44 + 1) = v7;
  v77 = 0LL;
  v41 = 0LL;
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v9 = v44;
  }
  *(_QWORD *)&v41 = v9;
  *((_QWORD *)&v41 + 1) = v7;
  sub_18007A810(*(_QWORD *)(a1 + 40), &v77, 0LL, &v41);
  sub_18001070C(
    *(_QWORD *)(a1 + 64),
    *(_QWORD *)(a1 + 120),
    *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128),
    *(_DWORD *)(a1 + 140) - *(_DWORD *)(a1 + 132));
  v82 = 0LL;
  sub_180066E84(v8 + 16, &v82);
  v81 = 0LL;
  v66[2] = 0LL;
  v66[3] = 0LL;
  sub_18001277C(v66, (__int64)&qword_18020F768);
  sub_180017CFC(v9, (__int64)&v81, v66);
  sub_1800B93FC(v81, a2 + 48);
  v10 = (volatile signed __int32 *)*((_QWORD *)&v81 + 1);
  if ( *((_QWORD *)&v81 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v81 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = *(_QWORD *)(a1 + 64);
  v12 = (float)(*(int (__fastcall **)(__int64))(*(_QWORD *)v11 + 88LL))(v11);
  *(float *)&v79 = (float)(*(int (__fastcall **)(__int64))(*(_QWORD *)v11 + 80LL))(v11);
  *((float *)&v79 + 1) = v12;
  *(_QWORD *)v39 = *(_QWORD *)(a1 + 144);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 280LL))(*(_QWORD *)(a1 + 64)) )
  {
    *(_BYTE *)(v77 + 465) |= 1u;
    *(_OWORD *)(v77 + 296) = xmmword_180221EA0;
    v13 = v39[0] - (float)*(int *)(a1 + 128);
    v14 = v39[1] - (float)*(int *)(a1 + 132);
    sub_1800B2100(v77, qword_180221E78, v79, 1LL);
    v15 = *(_DWORD *)(a1 + 140) - *(_DWORD *)(a1 + 132);
    v16 = *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128);
    v42[0] = 0;
    v42[1] = 0;
    v42[2] = v16;
    v42[3] = v15;
    sub_1800B1F9C(v77, v42);
    v45 = 0LL;
    v17 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 152LL))(*(_QWORD *)(a1 + 64));
    v18 = (volatile signed __int32 *)v17[1];
    if ( v18 )
    {
      _InterlockedIncrement(v18 + 2);
      v18 = (volatile signed __int32 *)v17[1];
    }
    *(_QWORD *)&v45 = *v17;
    v19 = v45;
    *((_QWORD *)&v45 + 1) = v18;
    *(_DWORD *)(v45 + 448) = 8 * (a4 ^ 1);
    v20 = (float)*(int *)(a1 + 132);
    *(float *)&v78 = (float)*(int *)(a1 + 128);
    *((float *)&v78 + 1) = v20;
    v21 = *(volatile signed __int32 **)(v19 + 280);
    if ( v21 )
    {
      _InterlockedIncrement(v21 + 2);
      v21 = *(volatile signed __int32 **)(v19 + 280);
    }
    v68 = *(_QWORD *)(v19 + 272);
    v69 = v21;
    v22 = _mm_add_ps((__m128)v79, _mm_unpacklo_ps((__m128)(unsigned int)v78, (__m128)HIDWORD(v78)));
    v67 = _mm_unpacklo_ps(v22, _mm_shuffle_ps(v22, v22, 85)).m128_u64[0];
    v78 = _mm_unpacklo_ps((__m128)(unsigned int)v78, (__m128)HIDWORD(v78)).m128_u64[0];
    sub_1800B2100(v68, v78, v67, 1LL);
    if ( v21 )
    {
      if ( !_InterlockedDecrement(v21 + 2) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
        if ( !_InterlockedDecrement(v21 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
      }
    }
    v72 = *(_OWORD *)(a1 + 128);
    v23 = *(volatile signed __int32 **)(v19 + 280);
    if ( v23 )
    {
      _InterlockedIncrement(v23 + 2);
      v23 = *(volatile signed __int32 **)(v19 + 280);
    }
    v70 = *(_QWORD *)(v19 + 272);
    v71 = v23;
    sub_1800B1F9C(v70, &v72);
    if ( v23 )
    {
      if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
        if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
      }
    }
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
      }
    }
  }
  else
  {
    v24 = *(_BYTE *)(v77 + 465) | 1;
    if ( !a4 )
      v24 = *(_BYTE *)(v77 + 465) & 0xFE;
    *(_BYTE *)(v77 + 465) = v24;
    *(_OWORD *)(v77 + 296) = xmmword_180221EA0;
    v73 = *(_OWORD *)(a1 + 128);
    sub_1800B1F9C(v77, &v73);
    v14 = v39[1];
    v13 = v39[0];
  }
  v25 = -*(float *)(a1 + 152);
  v26 = *(_DWORD *)(a1 + 148);
  v27 = -*(float *)(a1 + 144);
  v46 = 1065353216;
  v47 = 0LL;
  v48 = -1082130432;
  v49 = 0LL;
  v50 = 1065353216;
  v51 = 0;
  v52 = v27;
  v53 = v26;
  v54 = v25;
  v55 = 1065353216;
  sub_180019258(v75, v43);
  sub_180019F78((__int64)v83, v75, &v46);
  v28 = v77;
  v40 = 0LL;
  v29 = *(_QWORD *)(v77 + 64);
  if ( v29 )
  {
    while ( 1 )
    {
      v30 = *(_DWORD *)(v29 + 8);
      if ( !v30 )
        break;
      if ( v30 == _InterlockedCompareExchange((volatile signed __int32 *)(v29 + 8), v30 + 1, v30) )
      {
        v40 = *(_OWORD *)(v28 + 56);
        break;
      }
    }
  }
  v31 = sub_18001BA00(v83, (__int64)v76);
  sub_180088444(v40, v31);
  if ( *((_QWORD *)&v40 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v40 + 1) + 8LL)) )
    {
      (***((void (__fastcall ****)(_QWORD))&v40 + 1))(*((_QWORD *)&v40 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v40 + 1) + 12LL)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v40 + 1) + 8LL))(*((_QWORD *)&v40 + 1));
    }
  }
  sub_1800AFD2C(v77);
  v56 = 2.0 / *(float *)&v79;
  v57 = 0LL;
  v58 = 2.0 / v12;
  v59 = 0LL;
  v60 = 1065353216;
  v61 = 0;
  v62 = (float)((float)(2.0 / *(float *)&v79) * v13) - 1.0;
  v63 = 1.0 - (float)((float)(2.0 / v12) * v14);
  v64 = 0;
  v65 = 1065353216;
  *(_OWORD *)&v74[4] = 0LL;
  *(_OWORD *)&v74[24] = 0LL;
  *(_OWORD *)&v74[44] = 0LL;
  v32 = *(unsigned int *)(a1 + 160);
  v33 = *(unsigned int *)(a1 + 156);
  v34 = 0x40000000u;
  *(double *)&v34 = sub_1800208CC();
  *(_OWORD *)v74 = v34;
  *(_OWORD *)&v74[16] = 0x40000000u;
  *(_OWORD *)&v74[32] = v33;
  *(_OWORD *)&v74[48] = v32;
  sub_180019F78((__int64)v84, v74, &v56);
  v35 = v77;
  if ( *(_DWORD *)(v77 + 316) != 5 )
  {
    *(_DWORD *)(v77 + 316) = 5;
    sub_1800B1EC0(v35, 2LL);
    v35 = v77;
  }
  sub_18001FA88(v35, v84);
  if ( BYTE8(v82) )
    sub_180067304(v82);
  sub_1800B47C0(*(_QWORD *)(a1 + 48), &v77);
  sub_1800B5130(*(_QWORD *)(a1 + 48));
  sub_1800B5060(*(_QWORD *)(a1 + 48), &v77);
  v36 = (volatile signed __int32 *)*((_QWORD *)&v77 + 1);
  if ( *((_QWORD *)&v77 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v77 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v36)(v36);
      if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
    }
  }
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  sub_180019810(&v80);
  return 0LL;
}
