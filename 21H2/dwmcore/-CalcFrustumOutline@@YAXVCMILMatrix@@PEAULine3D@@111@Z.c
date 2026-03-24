/*
 * XREFs of ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x1801F41EC
 * Callers:
 *     ?CalcEyePointOrVector@CCompositionLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x18002068C (-CalcEyePointOrVector@CCompositionLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@.c)
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z @ 0x18000BA0C (-Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     powf @ 0x1800E81C8 (powf.c)
 *     floorf_0 @ 0x1800F476F (floorf_0.c)
 *     log10f_0 @ 0x1800F4787 (log10f_0.c)
 *     sqrtf_0 @ 0x1800F47AB (sqrtf_0.c)
 *     ??0Line3D@@QEAA@UMilPoint4F@@0@Z @ 0x1801F4118 (--0Line3D@@QEAA@UMilPoint4F@@0@Z.c)
 */

__int64 __fastcall CalcFrustumOutline(CMILMatrix *a1, __int64 a2, __int64 a3, __int64 a4, _OWORD *a5)
{
  float *v5; // rbx
  unsigned int v6; // xmm1_4
  char v11; // r14
  float v12; // xmm7_4
  float v13; // xmm8_4
  __int64 v14; // rsi
  float v15; // xmm0_4
  float v16; // xmm6_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float *v20; // rax
  float v21; // xmm3_4
  __int64 v22; // rcx
  float v23; // xmm1_4
  float v24; // xmm0_4
  __int64 v25; // rax
  __int128 v26; // xmm0
  __int64 v27; // rax
  __int128 v28; // xmm0
  __int64 v29; // rax
  __int128 v30; // xmm0
  __int64 result; // rax
  _OWORD *v32; // rcx
  _QWORD v33[3]; // [rsp+20h] [rbp-E8h] BYREF
  _OWORD *v34; // [rsp+38h] [rbp-D0h]
  _BYTE v35[16]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v36; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v37[8]; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD v38[8]; // [rsp+E8h] [rbp-20h] BYREF

  v5 = (float *)&v36;
  v6 = *((_DWORD *)a1 + 7);
  LODWORD(v36) = *((_DWORD *)a1 + 3);
  *(_QWORD *)((char *)&v36 + 4) = __PAIR64__(*((_DWORD *)a1 + 11), v6);
  v11 = 0;
  v12 = 0.0;
  v13 = 0.0;
  HIDWORD(v36) = *((_DWORD *)a1 + 15);
  v14 = 4LL;
  v34 = a5;
  do
  {
    if ( *v5 == 0.0 )
      goto LABEL_9;
    v15 = log10f_0(COERCE_FLOAT(*(_DWORD *)v5 & _xmm));
    v16 = v15 / log10f_0(2.0);
    *v5 = v16;
    if ( v11 )
    {
      if ( v16 > v12 )
      {
        v12 = v16;
        goto LABEL_9;
      }
      v16 = fminf(v16, v13);
    }
    else
    {
      v11 = 1;
      v12 = v16;
    }
    v13 = v16;
LABEL_9:
    ++v5;
    --v14;
  }
  while ( v14 );
  v17 = sqrtf_0(v12 - v13);
  v18 = floorf_0(v17);
  v19 = powf(2.0, v18);
  v20 = (float *)v37 + 2;
  v37[0] = _xmm;
  v21 = v19;
  v22 = 8LL;
  v37[2] = _xmm;
  v37[1] = _xmm;
  v37[4] = _xmm;
  v37[3] = _xmm;
  v37[6] = _xmm;
  v37[5] = _xmm;
  v37[7] = _xmm;
  do
  {
    v23 = v21 * *(v20 - 1);
    *(v20 - 2) = v21 * *(v20 - 2);
    v24 = v21 * *v20;
    *(v20 - 1) = v23;
    *v20 = v24;
    v20 += 4;
    --v22;
  }
  while ( v22 );
  CMILMatrix::Transform(a1, (const struct MilPoint4F *)v37, (struct MilPoint4F *)v38, 8);
  v36 = v38[4];
  *(_OWORD *)&v33[1] = v38[0];
  v25 = Line3D::Line3D((__int64)v35, (float *)&v33[1], (float *)&v36);
  *(_OWORD *)a2 = *(_OWORD *)v25;
  v26 = v38[5];
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(v25 + 16);
  v36 = v38[1];
  *(_OWORD *)&v33[1] = v26;
  v27 = Line3D::Line3D((__int64)v35, (float *)&v36, (float *)&v33[1]);
  *(_OWORD *)a3 = *(_OWORD *)v27;
  v28 = v38[6];
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(v27 + 16);
  v36 = v38[2];
  *(_OWORD *)&v33[1] = v28;
  v29 = Line3D::Line3D((__int64)v35, (float *)&v36, (float *)&v33[1]);
  *(_OWORD *)a4 = *(_OWORD *)v29;
  v30 = v38[7];
  *(_QWORD *)(a4 + 16) = *(_QWORD *)(v29 + 16);
  v36 = v38[3];
  *(_OWORD *)&v33[1] = v30;
  result = Line3D::Line3D((__int64)v35, (float *)&v36, (float *)&v33[1]);
  v32 = v34;
  *v34 = *(_OWORD *)result;
  *((_QWORD *)v32 + 2) = *(_QWORD *)(result + 16);
  return result;
}
