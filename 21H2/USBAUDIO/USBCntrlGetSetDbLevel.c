/*
 * XREFs of USBCntrlGetSetDbLevel @ 0x1C00324F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0004744 (WPP_RECORDER_SF_ddd.c)
 *     log10 @ 0x1C00122A8 (log10.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012E90 (_guard_dispatch_icall_nop.c)
 *     pow @ 0x1C0012EA0 (pow.c)
 */

__int64 __fastcall USBCntrlGetSetDbLevel(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int *a4,
        unsigned int a5,
        int a6,
        _DWORD *a7)
{
  __int64 v7; // rdi
  int *v8; // rbx
  unsigned int *v10; // rsi
  __int64 v11; // rax
  int v13; // r9d
  int v14; // r13d
  void *v15; // r10
  char v16; // cl
  int v17; // ebx
  unsigned int v18; // edi
  double v19; // xmm0_8
  unsigned int v20; // ebx
  __m128i v21; // xmm1
  float v22; // xmm2_4
  __m128i v23; // xmm0
  signed int v24; // eax
  unsigned int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  unsigned int v28; // edi
  __int64 v29; // rax
  unsigned int v30; // ecx
  int v31; // edx
  int v32; // edx
  int v33; // eax
  float v34; // xmm1_4
  int v35; // [rsp+28h] [rbp-50h]
  __int64 v36; // [rsp+28h] [rbp-50h]
  int v38; // [rsp+80h] [rbp+8h]
  __int64 v39; // [rsp+88h] [rbp+10h]
  unsigned int v40; // [rsp+90h] [rbp+18h] BYREF
  int *v41; // [rsp+98h] [rbp+20h]

  v41 = a4;
  v7 = a1;
  v8 = a4;
  v10 = (unsigned int *)(*(_QWORD *)(a2 + 128) + 32LL * a5);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v39 = v11;
  if ( a3 < 4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        a2,
        0xAu,
        0xAu,
        (__int64)&WPP_c2ce4f10c1f73bfa41afadc737c30031_Traceguids);
    return 3221225990LL;
  }
  v40 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_ddd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0LL,
      0xAu,
      0xBu,
      (__int64)&WPP_c2ce4f10c1f73bfa41afadc737c30031_Traceguids,
      *(_DWORD *)(a2 + 76),
      a5,
      *a4);
    v11 = v39;
  }
  v13 = *(_DWORD *)(a2 + 76);
  if ( v13 == 8 )
  {
    v15 = USBHwGetSetShort;
    v14 = 256;
    v13 = 8;
    if ( *(_BYTE *)(v11 + 6) )
    {
      v16 = a6;
      if ( (a6 & 0x80u) != 0 )
        goto LABEL_13;
      v17 = v10[7];
      v18 = v10[6];
      v19 = pow(10.0, (float)((float)((float)*v41 * 0.000015258789) - (float)((float)v17 * 0.000015258789)) / 20.0);
      v20 = v17 - v18;
      v21 = _mm_cvtsi32_si128(v18);
      v7 = a1;
      v15 = USBHwGetSetShort;
      v22 = v19;
      v23 = _mm_cvtsi32_si128(v20);
      v8 = v41;
      *v41 = (int)(float)((float)(v22 * _mm_cvtepi32_ps(v23).m128_f32[0]) + _mm_cvtepi32_ps(v21).m128_f32[0]);
      v13 = *(_DWORD *)(a2 + 76);
    }
  }
  else
  {
    v14 = 0x4000;
    v15 = USBHwGetSetByte;
  }
  v16 = a6;
LABEL_13:
  v38 = v16 & 0x80;
  if ( (v16 & 0x80) == 0 )
  {
    v24 = *v8;
    if ( *v8 <= (int)v10[7] )
    {
      if ( v24 < (int)v10[6] )
      {
        v25 = 0xFF800000 / v14;
        goto LABEL_17;
      }
    }
    else
    {
      v24 = v10[7];
    }
    v25 = v24 / v14;
LABEL_17:
    v40 = v25;
  }
  LOBYTE(v35) = v16;
  v26 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int *, int))v15)(
          v7,
          *(unsigned int *)(a2 + 80),
          v10[2],
          (unsigned int)(v13 - 6),
          &v40,
          v35);
  v28 = v26;
  if ( v26 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v36) = v26;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v27,
        0xAu,
        0xCu,
        (__int64)&WPP_c2ce4f10c1f73bfa41afadc737c30031_Traceguids,
        v36);
    }
  }
  else
  {
    if ( v38 )
    {
      if ( a6 == 131 && (v29 = *(_QWORD *)(v39 + 32), *(_WORD *)(v29 + 8) == 3468) )
      {
        v30 = v40;
        if ( *(_WORD *)(v29 + 10) == 1 )
          v30 = 0;
        v40 = v30;
      }
      else
      {
        LOWORD(v30) = v40;
      }
      v31 = (char)v30;
      if ( v14 == 256 )
        v31 = (__int16)v30;
      v32 = v14 * v31;
      *v8 = v32;
      if ( *(_DWORD *)(a2 + 76) == 8 )
      {
        if ( *(_BYTE *)(v39 + 6) )
        {
          v33 = *(_DWORD *)(a2 + 96);
          if ( _bittest(&v33, a5) )
          {
            v34 = log10((float)((float)(int)(v32 - v10[6]) / (float)(int)(v10[7] - v10[6])));
            *v8 = (int)(float)((float)(v34 * 20.0) * 65536.0);
          }
        }
      }
    }
    *a7 = 4;
  }
  return v28;
}
