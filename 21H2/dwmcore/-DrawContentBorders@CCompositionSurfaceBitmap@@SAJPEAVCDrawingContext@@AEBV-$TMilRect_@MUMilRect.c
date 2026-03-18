/*
 * XREFs of ?DrawContentBorders@CCompositionSurfaceBitmap@@SAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1AEBU_D3DCOLORVALUE@@@Z @ 0x18020FE68
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180006310 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?DrawLetterboxingMarginsInternal@CCompositionSurfaceBitmap@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180006498 (-DrawLetterboxingMarginsInternal@CCompositionSurfaceBitmap@@AEAAJPEAVCDrawingContext@@AEBV-$TMil.c)
 *     ?Draw@CBitmapRenderStrategy@@UEAAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B28D0 (-Draw@CBitmapRenderStrategy@@UEAAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCD.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::DrawContentBorders(__int64 a1, float *a2, float *a3, __int64 a4)
{
  unsigned int v4; // ebx
  float v5; // xmm1_4
  __int64 *v10; // rcx
  float v11; // xmm0_4
  float v12; // xmm1_4
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  float v16; // xmm0_4
  float v17; // xmm1_4
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm3_4
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  float v27; // xmm2_4
  float v28; // xmm3_4
  float v29; // xmm1_4
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  float v34; // [rsp+30h] [rbp-28h] BYREF
  int v35; // [rsp+34h] [rbp-24h]
  float v36; // [rsp+38h] [rbp-20h]
  float v37; // [rsp+3Ch] [rbp-1Ch]

  v4 = 0;
  v5 = a3[1];
  if ( v5 <= a2[1] )
    goto LABEL_4;
  v10 = (__int64 *)(a1 + 16);
  v35 = *((_DWORD *)a2 + 1);
  v11 = *a2;
  v37 = v5;
  v12 = a2[2];
  v13 = *v10;
  v34 = v11;
  v36 = v12;
  v14 = (*(__int64 (__fastcall **)(__int64 *, float *, __int64))(v13 + 16))(v10, &v34, a4);
  v4 = v14;
  if ( v14 >= 0 )
  {
LABEL_4:
    v16 = a2[3];
    if ( v16 <= a3[3] )
      goto LABEL_7;
    v35 = *((_DWORD *)a3 + 3);
    v17 = a2[2];
    v18 = *(_QWORD *)(a1 + 16);
    v37 = v16;
    v34 = *a2;
    v36 = v17;
    v19 = (*(__int64 (__fastcall **)(__int64, float *, __int64))(v18 + 16))(a1 + 16, &v34, a4);
    v4 = v19;
    if ( v19 >= 0 )
    {
LABEL_7:
      v21 = *a2;
      v22 = *a3;
      if ( *a3 <= *a2 )
        goto LABEL_11;
      v23 = a3[3];
      if ( v23 <= a3[1]
        || (v35 = *((_DWORD *)a3 + 1),
            v24 = *(_QWORD *)(a1 + 16),
            v37 = v23,
            v34 = v21,
            v36 = v22,
            v25 = (*(__int64 (__fastcall **)(__int64, float *, __int64))(v24 + 16))(a1 + 16, &v34, a4),
            v4 = v25,
            v25 >= 0) )
      {
LABEL_11:
        v27 = a2[2];
        v28 = a3[2];
        if ( v27 > v28 )
        {
          v29 = a3[3];
          if ( v29 > a3[1] )
          {
            v35 = *((_DWORD *)a3 + 1);
            v30 = *(_QWORD *)(a1 + 16);
            v37 = v29;
            v34 = v28;
            v36 = v27;
            v31 = (*(__int64 (__fastcall **)(__int64, float *, __int64))(v30 + 16))(a1 + 16, &v34, a4);
            v4 = v31;
            if ( v31 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0LL, v31, 0x2D2u);
          }
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, v25, 0x2C6u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, v19, 0x2BAu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x2AFu);
  }
  return v4;
}
