/*
 * XREFs of ?FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z @ 0x18025D508
 * Callers:
 *     ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x18025D794 (-GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180065090 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x1800B3500 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800C1524 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800EE99B (sqrtf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransformedGeometryHelper::FlattenGeometry(CMILMatrix **this, const struct ID2D1Geometry *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  float v6; // xmm11_4
  float v7; // xmm10_4
  float v8; // xmm13_4
  float v9; // xmm12_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm4_4
  float v14; // xmm9_4
  float v15; // xmm8_4
  float v16; // xmm11_4
  int v17; // eax
  __int64 v18; // rcx
  __int64 v20; // [rsp+38h] [rbp-89h] BYREF
  float v21; // [rsp+40h] [rbp-81h]
  float v22; // [rsp+44h] [rbp-7Dh]
  __int64 v23; // [rsp+48h] [rbp-79h]
  float v24; // [rsp+50h] [rbp-71h]
  float v25; // [rsp+54h] [rbp-6Dh]
  __int128 v26; // [rsp+58h] [rbp-69h] BYREF
  __int128 v27; // [rsp+68h] [rbp-59h] BYREF

  v2 = 0;
  if ( this[3] )
  {
    v5 = *(_QWORD *)a2;
    v27 = 0LL;
    (*(void (__fastcall **)(const struct ID2D1Geometry *, _QWORD, __int128 *))(v5 + 32))(a2, 0LL, &v27);
    v6 = *(float *)&v27;
    v7 = *((float *)&v27 + 1);
    v8 = *((float *)&v27 + 2);
    v9 = *((float *)&v27 + 3);
    v26 = v27;
    if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v26) )
      return v2;
    CMILMatrix::Transform2DRectToPerspective(this[3], (const struct MilRectF *)&v26, (struct MilPoint2F *const)&v20);
    v10 = *(float *)&v20;
    v11 = *((float *)&v20 + 1);
    v12 = *(float *)&v23;
    *(_QWORD *)&v26 = v20;
    *((_QWORD *)&v26 + 1) = v23;
    if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v26)
      || TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)&v26) )
    {
      return v2;
    }
    v14 = v22 - v25;
    v15 = v21 - v24;
    v16 = v6 - v8;
    sqrtf_0((float)((float)(v11 - v13) * (float)(v11 - v13)) + (float)((float)(v10 - v12) * (float)(v10 - v12)));
    sqrtf_0((float)((float)(v7 - v9) * (float)(v7 - v9)) + (float)(v16 * v16));
    sqrtf_0((float)(v15 * v15) + (float)(v14 * v14));
    sqrtf_0((float)(v16 * v16) + (float)((float)(v9 - v7) * (float)(v9 - v7)));
  }
  v17 = (*(__int64 (__fastcall **)(const struct ID2D1Geometry *, __int64))(*(_QWORD *)a2 + 72LL))(a2, 1LL);
  v2 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x9Cu, 0LL);
  return v2;
}
