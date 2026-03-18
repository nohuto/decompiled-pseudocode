/*
 * XREFs of ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x1800621D0
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18001513C (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@.c)
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001A3FC (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF.c)
 *     ?DrawSolidRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18001A9F0 (-DrawSolidRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAn.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180055708 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800BB86C (-AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800C19F8 (-AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IM@@@@Z @ 0x1800C3E70 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800CCEDC (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801F5E6C (-AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180072960 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800AC2C0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 */

__int64 __fastcall COcclusionContext::CollectRectangleForOcclusion(__int64 a1, float *a2, __int64 a3, __m128 *a4)
{
  int v6; // eax
  CMILMatrix *v7; // rcx
  int v8; // eax
  __m128 v9; // xmm4
  float v10; // xmm3_4
  float v11; // xmm5_4
  float v12; // xmm0_4
  float v13; // xmm6_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  __m128 v16; // xmm1
  __m128 v17; // xmm1
  __m128 v18; // xmm1
  __m128 v19; // xmm1
  int v20; // eax
  unsigned int v21; // r8d
  float v22; // xmm2_4
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // rax
  unsigned int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v30; // ebx
  __int64 v31; // rcx
  int v32; // eax
  __m128 v33; // [rsp+30h] [rbp-78h]
  __m128 v34; // [rsp+50h] [rbp-58h] BYREF
  int v35; // [rsp+60h] [rbp-48h]

  if ( a2[2] <= *a2 || a2[3] <= a2[1] )
    return 0LL;
  v6 = *(_DWORD *)(a1 + 24);
  v35 = 0;
  v7 = v6 ? (CMILMatrix *)(*(_QWORD *)(a1 + 40) + 68LL * (unsigned int)(v6 - 1)) : (CMILMatrix *)&CMILMatrix::Identity;
  CMILMatrix::Transform2DBoundsHelper<0>(v7);
  v8 = *(_DWORD *)(a1 + 136);
  if ( v8 )
  {
    v9 = *(__m128 *)(*(_QWORD *)(a1 + 152) + 16LL * (unsigned int)(v8 - 1));
    v33 = v9;
    if ( v9.m128_f32[0] < 0.0 )
      v9 = 0u;
    v10 = v33.m128_f32[1];
    v11 = v33.m128_f32[1];
    if ( v33.m128_f32[1] < 0.0 )
    {
      v10 = 0.0;
      v11 = 0.0;
    }
    v12 = v33.m128_f32[2];
    v13 = v33.m128_f32[2];
    if ( v33.m128_f32[2] > 0.0 )
    {
      v12 = 0.0;
      v13 = 0.0;
    }
    v14 = v33.m128_f32[3];
    v15 = v33.m128_f32[3];
    if ( v33.m128_f32[3] > 0.0 )
    {
      v14 = 0.0;
      v15 = 0.0;
    }
    if ( v13 <= v9.m128_f32[0] || v15 <= v11 )
    {
      v10 = 0.0;
      v14 = 0.0;
      v12 = 0.0;
      v9 = 0LL;
    }
  }
  else
  {
    v9 = 0u;
    v10 = 0.0;
    v12 = 0.0;
    v14 = 0.0;
  }
  v16 = _mm_shuffle_ps(v9, v9, 225);
  v16.m128_f32[0] = v10;
  v17 = _mm_shuffle_ps(v16, v16, 198);
  v17.m128_f32[0] = v12;
  v18 = _mm_shuffle_ps(v17, v17, 39);
  v18.m128_f32[0] = v14;
  v19 = _mm_shuffle_ps(v18, v18, 57);
  v34 = v19;
  if ( a4 )
    *a4 = v19;
  v20 = *(_DWORD *)(a1 + 1504);
  v21 = -1;
  v22 = (float)(v14 - v10) * (float)(v12 - v9.m128_f32[0]);
  if ( v20 )
    v21 = *(_DWORD *)(*(_QWORD *)(a1 + 1520) + 4LL * (unsigned int)(v20 - 1));
  v23 = *(_QWORD *)(a1 + 1064);
  v24 = 0LL;
  if ( !v23 )
    return 0LL;
  while ( ((v21 >> v24) & 1) == 0 || v22 <= (float)(*(float *)(a1 + 4LL * (unsigned int)v24 + 1200) * 0.25) )
  {
    v24 = (unsigned int)(v24 + 1);
    if ( (unsigned int)v24 >= v23 )
      return 0LL;
  }
  v26 = *(unsigned int *)(a1 + 856);
  v27 = v26 + 1;
  if ( (int)v26 + 1 < (unsigned int)v26 )
  {
    v30 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    if ( v27 <= *(_DWORD *)(a1 + 852) )
    {
      v28 = *(_QWORD *)(a1 + 832);
      v29 = 5 * v26;
      *(__m128 *)(v28 + 4 * v29) = v19;
      *(_DWORD *)(v28 + 4 * v29 + 16) = v35;
      *(_DWORD *)(a1 + 856) = v27;
      return 0LL;
    }
    v32 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 832, 20LL, 1LL, &v34);
    v30 = v32;
    if ( v32 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v32, 0xC0u, 0LL);
  }
  if ( v30 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x683u, 0LL);
  return (unsigned int)v30;
}
