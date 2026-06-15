/*
 * XREFs of sub_18012B740 @ 0x18012B740
 * Callers:
 *     sub_18012A5D4 @ 0x18012A5D4 (sub_18012A5D4.c)
 * Callees:
 *     sub_180029B80 @ 0x180029B80 (sub_180029B80.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 *     sub_18012A888 @ 0x18012A888 (sub_18012A888.c)
 *     sub_18012AA10 @ 0x18012AA10 (sub_18012AA10.c)
 *     sub_18012AB98 @ 0x18012AB98 (sub_18012AB98.c)
 *     sub_18012ACAC @ 0x18012ACAC (sub_18012ACAC.c)
 *     sub_18012ADBC @ 0x18012ADBC (sub_18012ADBC.c)
 *     sub_18012B4AC @ 0x18012B4AC (sub_18012B4AC.c)
 */

__int64 __fastcall sub_18012B740(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // r15
  int v7; // ebp
  int v8; // r12d
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // esi
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rax
  float v24; // xmm4_4
  __int64 v25; // rcx
  __int64 v26; // rdx
  __m128 v27; // xmm3
  __m128 v28; // xmm1
  __m128 v29; // xmm2
  __m128 v30; // xmm0
  __m128 v31; // xmm1
  __int64 v33; // [rsp+40h] [rbp-48h] BYREF
  __int64 v34; // [rsp+90h] [rbp+8h] BYREF
  __int64 v35; // [rsp+A8h] [rbp+20h] BYREF

  v3 = (_QWORD *)(a1 + 536);
  v7 = 0;
  v8 = 0;
  sub_1800461B8((__int64 *)(a1 + 536));
  v9 = sub_180029B80(v3);
  v12 = v9;
  v13 = 2;
  if ( v9 >= 0 )
  {
    v14 = *(_QWORD *)a2 - 0x4831B846B53D940CLL;
    if ( *(_QWORD *)a2 == 0x4831B846B53D940CLL )
      v14 = *(_QWORD *)(a2 + 8) + 0x5FDA4846FD2E8961LL;
    if ( v14 )
    {
      v15 = *(_QWORD *)a2 - 0x4E35FA3EA289735DLL;
      if ( *(_QWORD *)a2 == 0x4E35FA3EA289735DLL )
        v15 = *(_QWORD *)(a2 + 8) + 0x184D536907498263LL;
      if ( v15 )
      {
        v16 = *(_QWORD *)a2 - 0x49BF38751459AC38LL;
        if ( *(_QWORD *)a2 == 0x49BF38751459AC38LL )
          v16 = *(_QWORD *)(a2 + 8) - 0x5D394D0FE80F59BBLL;
        if ( !v16 )
          goto LABEL_15;
        v17 = *(_QWORD *)a2 - 0x4AD9C8EF4C81E564LL;
        if ( *(_QWORD *)a2 == 0x4AD9C8EF4C81E564LL )
          v17 = *(_QWORD *)(a2 + 8) + 0x6FC8AC6A0661D361LL;
        if ( v17 )
        {
          v18 = *(_QWORD *)a2 - 0x4C2C8DC04444ACB0LL;
          if ( *(_QWORD *)a2 == 0x4C2C8DC04444ACB0LL )
            v18 = *(_QWORD *)(a2 + 8) + 0x79F0B82489D32760LL;
          if ( !v18 )
            goto LABEL_22;
          v19 = *(_QWORD *)a2 - 0x404AAC4CADAFD3C6LL;
          if ( *(_QWORD *)a2 == 0x404AAC4CADAFD3C6LL )
            v19 = *(_QWORD *)(a2 + 8) - 0x640506E915966A83LL;
          if ( v19 )
          {
            v20 = *(_QWORD *)a2 - 0x4AD4CAFB1304D643LL;
            if ( *(_QWORD *)a2 == 0x4AD4CAFB1304D643LL )
              v20 = *(_QWORD *)(a2 + 8) + 0x1CA37F27E6527B41LL;
            if ( !v20 )
            {
              v8 = 1;
              sub_18012ACAC(a1, (__int128 *)a2);
            }
          }
          else
          {
LABEL_22:
            sub_18012AB98(a1, (__int128 *)a2);
          }
        }
        else
        {
LABEL_15:
          v7 = 1;
          sub_18012A888(a1, (__int128 *)a2);
        }
      }
      else
      {
        v7 = 1;
        sub_18012AA10(a1, (__int128 *)a2);
      }
    }
    else
    {
      sub_18012ADBC(a1, (__int128 *)a2);
    }
    v12 = sub_18012B4AC(a1, (unsigned int *)(a1 + 100));
  }
  else if ( (unsigned int)dword_18019C480 > 2 )
  {
    LODWORD(v34) = v9;
    LODWORD(v35) = 149;
    v33 = (__int64)"SpatialAudioEncoderProperties::RuntimeClassInitialize";
    sub_180109778(
      (__int64)&dword_18019C480,
      byte_18016C0FA,
      v10,
      v11,
      (const CHAR **)&v33,
      (__int64)&v35,
      (__int64)&v34);
  }
  v21 = 17;
  if ( v12 >= 0 )
  {
    if ( a3 )
    {
      v12 = -2147024882;
      v22 = o__aligned_malloc(272LL, 16LL);
      *(_QWORD *)(a1 + 48) = v22;
      if ( v22 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)*v3 + 24LL))(
                *v3,
                a1 + 272,
                v22,
                272LL);
        if ( v7 || v8 )
        {
          v23 = 0LL;
          v24 = *(float *)(a1 + 276) * 0.5;
          v25 = 17LL;
          do
          {
            v26 = *(_QWORD *)(a1 + 48);
            v27 = *(__m128 *)(v23 + v26);
            if ( v7 )
            {
              v28 = _mm_shuffle_ps(v27, v27, 255);
              v29 = _mm_shuffle_ps(v27, v27, 170);
              v30 = _mm_shuffle_ps(v27, v27, 85);
              v29.m128_f32[0] = v29.m128_f32[0] + v24;
              v27.m128_f32[0] = v27.m128_f32[0] + v24;
              *(__m128 *)(v23 + v26) = _mm_unpacklo_ps(_mm_unpacklo_ps(v27, v30), _mm_unpacklo_ps(v29, v28));
            }
            else
            {
              v31 = _mm_shuffle_ps(v27, v27, 198);
              v31.m128_f32[0] = -_mm_shuffle_ps(v27, v27, 170).m128_f32[0];
              *(__m128 *)(v23 + v26) = _mm_shuffle_ps(v31, v31, 198);
            }
            v23 += 16LL;
            --v25;
          }
          while ( v25 );
        }
      }
    }
  }
  *(_DWORD *)(a1 + 544) = 0;
  if ( v12 >= 0 )
  {
    do
    {
      --v21;
      if ( (v13 & *(_DWORD *)(a1 + 116)) != 0 )
        ++*(_DWORD *)(a1 + 544);
      v13 *= 2;
    }
    while ( v21 );
  }
  return (unsigned int)v12;
}
