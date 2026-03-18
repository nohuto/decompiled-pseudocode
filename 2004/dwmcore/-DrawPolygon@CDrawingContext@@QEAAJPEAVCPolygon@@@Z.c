/*
 * XREFs of ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801774F4
 * Callers:
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180176864 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x180017D28 (-D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PE.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800374A0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Pop@?$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z @ 0x18003A4FC (-Pop@-$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z.c)
 *     ??1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ @ 0x18003A818 (--1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18003BF94 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18003C064 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180046238 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180057020 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18006F780 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x180080058 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z @ 0x180082818 (-Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800828C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800AAC20 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C456C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800D339C (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?GetOpacity@CDrawingContext@@QEBAMXZ @ 0x1800E5E04 (-GetOpacity@CDrawingContext@@QEBAMXZ.c)
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x180179EB8 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ?Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801F8AF4 (-Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z @ 0x1801F8B68 (-GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawPolygon(CDrawingContext *this, struct CPolygon *a2)
{
  unsigned int v4; // ebx
  char v5; // r15
  char v6; // r13
  char v7; // r14
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  const struct CMILMatrix *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r14
  struct CGeometry *v18; // rdx
  int v19; // eax
  __int64 v20; // rcx
  const struct CMILMatrix *TopByReference; // rax
  const struct CShape *v22; // r10
  int v23; // eax
  __int64 v24; // rcx
  const struct CMILMatrix *v25; // rax
  unsigned int v26; // xmm1_4
  unsigned int v27; // xmm0_4
  unsigned int v28; // xmm1_4
  struct D2D_MATRIX_3X2_F *v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  bool v35; // [rsp+41h] [rbp-38h] BYREF
  char v36; // [rsp+42h] [rbp-37h]
  __int64 v37; // [rsp+48h] [rbp-31h] BYREF
  struct ID2D1Geometry *v38; // [rsp+50h] [rbp-29h] BYREF
  __int64 v39; // [rsp+58h] [rbp-21h] BYREF
  char v40; // [rsp+60h] [rbp-19h]
  __int128 v41; // [rsp+68h] [rbp-11h] BYREF
  unsigned __int64 v42; // [rsp+78h] [rbp-1h]

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v36 = 0;
  if ( *((_QWORD *)a2 + 31) )
  {
    v37 = 0LL;
    CPolygon::GetRenderOptions(a2, (struct MilRenderOptions *)&v41);
    if ( (_DWORD)v41 )
    {
      v8 = CDrawingContext::PushRenderOptionsInternal(this, 0LL, (const struct MilRenderOptions *)&v41, 1);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x51Fu, 0LL);
        goto LABEL_34;
      }
      v36 = 1;
    }
    *(float *)&v38 = CDrawingContext::GetOpacity(this) * *((float *)a2 + 56);
    v10 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 808, &v38);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x524u, 0LL);
      goto LABEL_34;
    }
    v7 = 1;
    if ( !CMILMatrix::IsIdentity<0>((__int64)a2 + 144) )
    {
      v13 = CDrawingContext::PushTransformInternal(this, 0LL, v12, 1, 1);
      v4 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x52Au, 0LL);
        goto LABEL_34;
      }
      v5 = 1;
    }
    if ( *(_BYTE *)(84LL * (unsigned int)(*((_DWORD *)this + 240) - 1) + *((_QWORD *)this + 117) + 80) )
    {
      if ( v5 )
      {
        v15 = CDrawingContext::CDisableCPUClipScope::Enter((CDrawingContext::CDisableCPUClipScope *)&v37, this);
        v4 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x534u, 0LL);
LABEL_34:
          CDrawingContext::CDisableCPUClipScope::~CDisableCPUClipScope((CDrawingContext::CDisableCPUClipScope *)&v37);
          goto LABEL_35;
        }
      }
    }
    v17 = *((_QWORD *)a2 + 27);
    v18 = *(struct CGeometry **)(v17 + 240);
    if ( !v18 )
      goto LABEL_25;
    v39 = 0LL;
    v40 = 0;
    v19 = CDrawingContext::ShapeDataFromGeometry((const struct D2D_SIZE_F *)(v17 + 132), v18, (struct CShapePtr *)&v39);
    v4 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x53Eu, 0LL);
    }
    else
    {
      if ( !v39 )
      {
LABEL_24:
        CShapePtr::Release((CShapePtr *)&v39);
LABEL_25:
        *((_QWORD *)this + 435) = a2;
        v32 = CPolygon::Draw(a2, this);
        v4 = v32;
        if ( v32 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x55Bu, 0LL);
        goto LABEL_32;
      }
      v38 = 0LL;
      v35 = 1;
      v42 = 0LL;
      v41 = 0LL;
      TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 408));
      v23 = CDrawingContext::D2DGeometryFromShape((CDrawingContext *)&v35, v22, TopByReference, &v38, &v35);
      v4 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x549u, 0LL);
      }
      else
      {
        if ( v35 )
        {
          v29 = 0LL;
        }
        else
        {
          v25 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 408));
          v26 = *((_DWORD *)v25 + 1);
          LODWORD(v41) = *(_DWORD *)v25;
          *(_QWORD *)((char *)&v41 + 4) = __PAIR64__(*((_DWORD *)v25 + 4), v26);
          v27 = *((_DWORD *)v25 + 12);
          HIDWORD(v41) = *((_DWORD *)v25 + 5);
          v28 = *((_DWORD *)v25 + 13);
          v29 = (struct D2D_MATRIX_3X2_F *)&v41;
          v42 = __PAIR64__(v28, v27);
        }
        v30 = CDrawingContext::PushD2DLayer(this, (struct CVisual *)v17, 0LL, v38, v29, 1.0, 0, 0);
        v4 = v30;
        if ( v30 >= 0 )
        {
          v6 = 1;
          wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v38);
          goto LABEL_24;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x553u, 0LL);
      }
      wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v38);
    }
    CShapePtr::Release((CShapePtr *)&v39);
LABEL_32:
    CDrawingContext::CDisableCPUClipScope::~CDisableCPUClipScope((CDrawingContext::CDisableCPUClipScope *)&v37);
    v7 = 1;
  }
LABEL_35:
  *((_QWORD *)this + 435) = 0LL;
  if ( v6 )
    CDrawingContext::PopLayer(this);
  if ( v5 )
    CDrawingContext::PopTransformInternal(this, 1);
  if ( v7 )
    CWatermarkStack<float,64,2,10>::Pop((_DWORD *)this + 808);
  if ( v36 )
    CDrawingContext::PopRenderOptionsInternal(this, 1);
  return v4;
}
