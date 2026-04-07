/*
 * XREFs of ?GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z @ 0x1800A4E58
 * Callers:
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800A55C4 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18003CB28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x18005609A (sqrtf_0.c)
 *     ?AddAndSet@?$DynArray@K$0A@@@QEAAJIAEBK@Z @ 0x1800A2AC8 (-AddAndSet@-$DynArray@K$0A@@@QEAAJIAEBK@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z @ 0x1800A2B94 (-AddMultipleAndSet@-$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z @ 0x1800A2C2C (-AddMultipleAndSet@-$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z.c)
 */

__int64 __fastcall CTetherVisual::GenerateMesh(CTetherVisual *this, struct Mesh2D *a2)
{
  int v2; // r8d
  int v4; // edi
  int v6; // ebx
  int v7; // r15d
  int v8; // r12d
  int v9; // ecx
  int v10; // edx
  float v11; // xmm6_4
  float v12; // xmm0_4
  __int64 v13; // rcx
  __int64 v14; // rax
  float v15; // xmm1_4
  int v16; // r8d
  int v17; // r10d
  __m128i v18; // xmm3
  __m128i v19; // xmm2
  double v20; // xmm1_8
  int v21; // eax
  int v22; // ebx
  int v23; // r9d
  __int64 v24; // rsi
  unsigned int v25; // eax
  _DWORD *v26; // r9
  unsigned int v27; // r8d
  int v28; // eax
  unsigned int v30; // [rsp+28h] [rbp-89h]
  __int64 v31; // [rsp+38h] [rbp-79h] BYREF
  _DWORD v32[6]; // [rsp+40h] [rbp-71h] BYREF
  float v33[12]; // [rsp+58h] [rbp-59h] BYREF
  double v34; // [rsp+88h] [rbp-29h] BYREF
  __int64 v35; // [rsp+90h] [rbp-21h]
  double v36; // [rsp+98h] [rbp-19h]
  __int64 v37; // [rsp+A0h] [rbp-11h]
  double v38; // [rsp+A8h] [rbp-9h]
  __int64 v39; // [rsp+B0h] [rbp-1h]
  double v40; // [rsp+B8h] [rbp+7h]
  __int64 v41; // [rsp+C0h] [rbp+Fh]

  v2 = *((_DWORD *)this + 74);
  v4 = *((_DWORD *)this + 76);
  v6 = v2 - v4;
  if ( v2 == v4 )
  {
    v7 = 6;
    v8 = 0;
  }
  else
  {
    v9 = *((_DWORD *)this + 75);
    v10 = *((_DWORD *)this + 77);
    if ( v9 == v10 )
    {
      v7 = 0;
      v8 = 6;
    }
    else
    {
      LODWORD(v11) = COERCE_UNSIGNED_INT((float)((float)v2 - (float)v4) / (float)((float)v9 - (float)v10)) ^ _xmm;
      v12 = sqrtf_0((float)(v11 * v11) + 1.0);
      v7 = (int)(float)(6.0 / v12);
      v8 = (int)(float)((float)(6.0 / v12) * v11);
    }
  }
  v13 = *((_QWORD *)this + 49);
  v31 = *((_QWORD *)this + 37);
  v14 = *((_QWORD *)this + 38);
  if ( v13 )
  {
    v15 = *(double *)(v13 + 48);
    v16 = v4 + (int)(float)((float)v6 * v15);
    v17 = *((_DWORD *)this + 77) + (int)(float)((float)(*((_DWORD *)this + 75) - *((_DWORD *)this + 77)) * v15);
  }
  else
  {
    v17 = HIDWORD(v31);
    v16 = v31;
  }
  v18 = _mm_cvtsi32_si128(*((_DWORD *)this + 89));
  v19 = _mm_cvtsi32_si128(*((_DWORD *)this + 91));
  v33[2] = 0.0;
  v33[5] = 0.0;
  v33[8] = 0.0;
  v33[11] = 0.0;
  v32[0] = 0;
  *((_DWORD *)this + 82) = v16 + v7;
  *((_DWORD *)this + 83) = v17 + v8;
  *((_DWORD *)this + 78) = v16 - v7;
  *((_DWORD *)this + 85) = HIDWORD(v14) + v8;
  *((_DWORD *)this + 79) = v17 - v8;
  *((_DWORD *)this + 80) = v14 - v7;
  *((_DWORD *)this + 81) = HIDWORD(v14) - v8;
  *((_DWORD *)this + 84) = v14 + v7;
  v32[1] = 1;
  v32[3] = 1;
  v33[1] = (float)(v17 - v8);
  v33[0] = (float)(v16 - v7);
  v32[5] = 3;
  v33[3] = (float)(v14 - v7);
  v33[4] = (float)(HIDWORD(v14) - v8);
  v33[6] = (float)(v16 + v7);
  v33[7] = (float)(v17 + v8);
  v32[2] = 2;
  v32[4] = 2;
  v33[10] = (float)(HIDWORD(v14) + v8);
  v38 = (double)*((int *)this + 90);
  v33[9] = (float)(v14 + v7);
  v20 = (double)*((int *)this + 88);
  v40 = v38;
  v34 = v20;
  v36 = v20;
  v35 = *(_OWORD *)&_mm_cvtepi32_pd(v18);
  v37 = *(_OWORD *)&_mm_cvtepi32_pd(v19);
  v39 = v35;
  v41 = v37;
  v21 = DynArray<MilPoint3F,0>::AddMultipleAndSet((__int64)a2, v33, 4u);
  v22 = v21;
  if ( v21 < 0 )
  {
    v30 = 190;
LABEL_11:
    v23 = v21;
    goto LABEL_27;
  }
  v21 = DynArray<MilPoint2D,0>::AddMultipleAndSet((__int64)a2 + 32, &v34, 4u);
  v22 = v21;
  if ( v21 < 0 )
  {
    v30 = 191;
    goto LABEL_11;
  }
  LODWORD(v31) = 255;
  v21 = DynArray<unsigned long,0>::AddAndSet((__int64)a2 + 96, 4u, (int *)&v31);
  v22 = v21;
  if ( v21 < 0 )
  {
    v30 = 192;
    goto LABEL_11;
  }
  v24 = 0LL;
  while ( 1 )
  {
    v25 = *((_DWORD *)a2 + 22);
    v26 = &v32[v24];
    v27 = v25 + 1;
    if ( v25 + 1 < v25 )
      break;
    if ( v27 > *((_DWORD *)a2 + 21) )
    {
      v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2 + 64, 4u, 1, v26);
      v22 = v28;
      if ( v28 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0xC0u);
      if ( v22 < 0 )
        goto LABEL_26;
    }
    else
    {
      v22 = 0;
      *(_DWORD *)(*((_QWORD *)a2 + 8) + 4LL * v25) = *v26;
      *((_DWORD *)a2 + 22) = v27;
    }
    v24 = (unsigned int)(v24 + 1);
    if ( (unsigned int)v24 >= 6 )
      return (unsigned int)v22;
  }
  v22 = -2147024362;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_26:
  v30 = 196;
  v23 = v22;
LABEL_27:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, v30);
  return (unsigned int)v22;
}
