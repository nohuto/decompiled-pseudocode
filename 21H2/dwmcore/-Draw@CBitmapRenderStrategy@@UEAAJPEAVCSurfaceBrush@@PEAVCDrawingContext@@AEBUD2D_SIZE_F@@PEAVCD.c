/*
 * XREFs of ?Draw@CBitmapRenderStrategy@@UEAAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B28D0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18006286C (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18008A770 (-Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x1800ABBF0 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x1800B2A90 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DrawContentBorders@CCompositionSurfaceBitmap@@SAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1AEBU_D3DCOLORVALUE@@@Z @ 0x18020FE68 (-DrawContentBorders@CCompositionSurfaceBitmap@@SAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRect.c)
 *     ?DrawLetterboxingMargins@CCompositionSurfaceBitmap@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180210064 (-DrawLetterboxingMargins@CCompositionSurfaceBitmap@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CBitmapRenderStrategy::Draw(
        CBitmapRenderStrategy *this,
        struct CSurfaceBrush *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        struct CDrawListCache *a5)
{
  void (__fastcall ***v6)(_QWORD, GUID *, struct IBitmapResource **); // rcx
  unsigned int v7; // edi
  char v11; // r13
  char v12; // al
  _QWORD *v13; // rcx
  bool v14; // bl
  struct IBitmapResource *v15; // r12
  int v16; // eax
  __int64 v17; // rcx
  char *v18; // rcx
  struct CShape *v20; // rcx
  bool v21; // bl
  __int64 (__fastcall ***v22)(_QWORD, __int64); // rdx
  int v23; // eax
  __int64 v24; // rcx
  float width; // xmm0_4
  float height; // xmm1_4
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  char v31; // [rsp+30h] [rbp-91h]
  struct CDrawListCache *v32; // [rsp+38h] [rbp-89h] BYREF
  struct IBitmapResource *v33; // [rsp+40h] [rbp-81h] BYREF
  _BYTE v34[40]; // [rsp+48h] [rbp-79h] BYREF
  struct CShape *v35[2]; // [rsp+70h] [rbp-51h] BYREF
  __int64 v36; // [rsp+80h] [rbp-41h]
  int v37; // [rsp+88h] [rbp-39h]
  _DWORD v38[4]; // [rsp+90h] [rbp-31h] BYREF
  _BYTE v39[16]; // [rsp+A0h] [rbp-21h] BYREF
  _BYTE v40[16]; // [rsp+B0h] [rbp-11h] BYREF

  v6 = (void (__fastcall ***)(_QWORD, GUID *, struct IBitmapResource **))*((_QWORD *)a2 + 13);
  v7 = 0;
  v33 = 0LL;
  v32 = a5;
  (**v6)(v6, &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c, &v33);
  v11 = (*(__int64 (__fastcall **)(CBitmapRenderStrategy *, struct CSurfaceBrush *, _BYTE *))(*(_QWORD *)this + 24LL))(
          this,
          a2,
          v39);
  v12 = (*(__int64 (__fastcall **)(CBitmapRenderStrategy *, struct CSurfaceBrush *, _BYTE *))(*(_QWORD *)this + 32LL))(
          this,
          a2,
          v40);
  v13 = (_QWORD *)*((_QWORD *)a3 + 6);
  v14 = 0;
  v15 = v33;
  v31 = v12;
  v36 = 0LL;
  v37 = 0;
  *(_OWORD *)v35 = 0LL;
  if ( v13 )
    v14 = (**(int (__fastcall ***)(_QWORD, struct CShape **))*v13)(*v13, v35) >= 0;
  (*(void (__fastcall **)(struct IBitmapResource *, unsigned __int64))(*(_QWORD *)v15 + 32LL))(
    v15,
    (unsigned __int64)v35 & -(__int64)v14);
  if ( !CDrawingContext::DrawAsOverlay(a3, v33) )
  {
    v16 = CBrush::Draw((struct CSurfaceBrush *)((char *)a2 + 112), a3, a4, v32);
    v7 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0x41Cu);
      goto LABEL_7;
    }
  }
  if ( !v11 )
    goto LABEL_6;
  v32 = 0LL;
  v35[0] = (struct CShape *)&v32;
  v35[1] = 0LL;
  LOBYTE(v36) = 1;
  v21 = (int)CSurfaceBrush::ComputeLayout(a2, a4, (struct CContent::LayoutData *)v34, &v35[1]) >= 0;
  if ( (_BYTE)v36 )
  {
    v20 = v35[0];
    v22 = *(__int64 (__fastcall ****)(_QWORD, __int64))v35[0];
    *(_QWORD *)v35[0] = v35[1];
    if ( v22 )
      std::default_delete<CShape>::operator()((__int64)v20, v22);
  }
  if ( !v21 )
    goto LABEL_21;
  *(_OWORD *)v35 = 0LL;
  v23 = (*(__int64 (__fastcall **)(struct CDrawListCache *, struct CShape **, _QWORD))(*(_QWORD *)v32 + 48LL))(
          v32,
          v35,
          0LL);
  v7 = v23;
  if ( v23 >= 0 )
  {
    width = a4->width;
    height = a4->height;
    v38[0] = 0;
    v38[1] = 0;
    *(float *)&v38[2] = width + 0.0;
    *(float *)&v38[3] = height + 0.0;
    v27 = CCompositionSurfaceBitmap::DrawContentBorders(a3, v38, v35, v39);
    v7 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v20, 0LL, 0LL, v27, 0x43Au);
      goto LABEL_19;
    }
LABEL_21:
    if ( v32 )
      std::default_delete<CShape>::operator()((__int64)v20, (__int64 (__fastcall ***)(_QWORD, __int64))v32);
LABEL_6:
    if ( v31 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a2 + 13) + 56LL))(
             *((_QWORD *)a2 + 13),
             40LL) )
      {
        v29 = CCompositionSurfaceBitmap::DrawLetterboxingMargins(*((CCompositionSurfaceBitmap **)a2 + 13), a3, a4);
        v7 = v29;
        if ( v29 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0LL, v29, 0x442u);
      }
    }
    goto LABEL_7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, v23, 0x42Eu);
LABEL_19:
  if ( v32 )
    std::default_delete<CShape>::operator()(v28, (__int64 (__fastcall ***)(_QWORD, __int64))v32);
LABEL_7:
  if ( v33 )
  {
    v18 = (char *)v33 + *(int *)(*((_QWORD *)v33 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return v7;
}
