/*
 * XREFs of ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@@Z @ 0x18000A928
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18000A5B8 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?SetTransform@CNineGridBrush@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18000AB14 (-SetTransform@CNineGridBrush@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?CalculateBounds@CProjectedShadow@@AEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEBVCVisualTree@@@Z @ 0x18000AB44 (-CalculateBounds@CProjectedShadow@@AEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ??4?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z @ 0x18002E694 (--4-$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180031E90 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800AA098 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z @ 0x1800C4388 (--0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z.c)
 *     ?SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x1800C92D0 (-SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadow::AdjustNineGridBrush(
        struct CComposition **this,
        struct CDrawingContext *a2,
        CSurfaceBrush **a3)
{
  float v5; // xmm0_4
  FLOAT m11; // xmm8_4
  float v7; // xmm1_4
  float v8; // xmm6_4
  FLOAT m12; // xmm9_4
  float v10; // xmm7_4
  CComponentTransform2D *v11; // rax
  unsigned int v12; // ecx
  struct CComponentTransform2D *v13; // rbx
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // edi
  unsigned int v17; // xmm6_4
  unsigned int v19; // [rsp+28h] [rbp-39h]
  struct CComponentTransform2D *v20; // [rsp+38h] [rbp-29h] BYREF
  float v21[2]; // [rsp+40h] [rbp-21h] BYREF
  struct D2D_MATRIX_3X2_F v22; // [rsp+48h] [rbp-19h] BYREF

  CProjectedShadow::CalculateBounds(this, &v22, a3, *((_QWORD *)a2 + 741));
  v5 = FLOAT_161_0;
  m11 = v22.m11;
  v7 = FLOAT_161_0;
  v8 = v22.m21 - v22.m11;
  m12 = v22.m12;
  v10 = v22.m22 - v22.m12;
  if ( (float)(v22.m21 - v22.m11) < (float)(v22.m22 - v22.m12) )
    v7 = (float)((float)((float)(v10 / v8) - 1.0) * 33.0) + 161.0;
  else
    v5 = (float)((float)((float)(v8 / v10) - 1.0) * 33.0) + 161.0;
  v20 = 0LL;
  *(_QWORD *)&v22.m11 = 0xC2800000C2800000uLL;
  v21[0] = v5 / 161.0;
  v21[1] = v7 / 161.0;
  v11 = (CComponentTransform2D *)DefaultHeap::AllocClear(0xD8uLL);
  if ( v11 )
    v11 = CComponentTransform2D::CComponentTransform2D(v11, this[2]);
  wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::operator=(&v20, v11);
  v13 = v20;
  if ( !v20 )
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x481u, 0LL);
LABEL_17:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
    return v16;
  }
  v14 = ((__int64 (__fastcall *)(char *, void *, float *))xmmword_180341248)(
          (char *)v20 + SDWORD2(xmmword_180341248),
          &CComponentTransform2D::sc_Scale,
          v21);
  v16 = v14;
  if ( v14 < 0 )
  {
    v19 = 1155;
    goto LABEL_16;
  }
  v14 = ((__int64 (__fastcall *)(char *, void *, struct D2D_MATRIX_3X2_F *))xmmword_180341280)(
          (char *)v13 + SDWORD2(xmmword_180341280),
          &CComponentTransform2D::sc_Offset,
          &v22);
  v16 = v14;
  if ( v14 < 0 )
  {
    v19 = 1156;
    goto LABEL_16;
  }
  v14 = CSurfaceBrush::SetTransform(a3[10], v13);
  v16 = v14;
  if ( v14 < 0 )
  {
    v19 = 1159;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, v19, 0LL);
    goto LABEL_17;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
  v22.m21 = 0.0;
  *(float *)&v17 = fminf(v8 / 33.0, v10 / 33.0);
  v22.dy = m12;
  *(_QWORD *)&v22.m11 = v17;
  *(_QWORD *)&v22.m[1][1] = __PAIR64__(LODWORD(m11), v17);
  CNineGridBrush::SetTransform((CNineGridBrush *)a3, &v22);
  return v16;
}
