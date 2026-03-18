/*
 * XREFs of ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801B0B14
 * Callers:
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x1801AFF60 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@M$01$01$09@@QEAA_NPEAM@Z @ 0x180004C70 (-Pop@-$CWatermarkStack@M$01$01$09@@QEAA_NPEAM@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180014578 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800435E0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008AF20 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x18008F04C (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180096690 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18009A3CC (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A9DE0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800D53DC (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800D5448 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?GetOpacity@CDrawingContext@@QEBAMXZ @ 0x180103950 (-GetOpacity@CDrawingContext@@QEBAMXZ.c)
 *     ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x1801AF98C (-D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PE.c)
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x1801B41E0 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ?Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801FA628 (-Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z @ 0x1801FA704 (-GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawPolygon(CDrawingContext *this, struct CPolygon *a2)
{
  unsigned int v4; // ebx
  char v5; // r13
  char v6; // r12
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // r14
  const struct CMILMatrix *v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r14
  struct CGeometry *v19; // rdx
  int v20; // eax
  __int64 v21; // rcx
  const struct CMILMatrix *TopByReference; // rax
  const struct CShape *v23; // r10
  int v24; // eax
  __int64 v25; // rcx
  const struct CMILMatrix *v26; // rax
  unsigned int v27; // xmm1_4
  unsigned int v28; // xmm0_4
  unsigned int v29; // xmm1_4
  __int128 *v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  char v36; // [rsp+40h] [rbp-29h]
  bool v37; // [rsp+41h] [rbp-28h] BYREF
  char v38; // [rsp+42h] [rbp-27h]
  struct ID2D1Geometry *v39; // [rsp+48h] [rbp-21h] BYREF
  __int64 v40; // [rsp+50h] [rbp-19h] BYREF
  char v41; // [rsp+58h] [rbp-11h]
  __int128 v42; // [rsp+60h] [rbp-9h] BYREF
  unsigned __int64 v43; // [rsp+70h] [rbp+7h]

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v38 = 0;
  v36 = 0;
  if ( *((_QWORD *)a2 + 31) )
  {
    CPolygon::GetRenderOptions(a2, (struct MilRenderOptions *)&v42);
    if ( (_DWORD)v42 )
    {
      v7 = CDrawingContext::PushRenderOptionsInternal(this, 0LL, (const struct MilRenderOptions *)&v42, 1);
      v4 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x527u);
        v14 = 0;
        goto LABEL_30;
      }
      v38 = 1;
    }
    *(float *)&v39 = CDrawingContext::GetOpacity(this) * *((float *)a2 + 56);
    v9 = CWatermarkStack<float,64,2,10>::Push((unsigned int *)this + 776, &v39);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v9, 0x52Cu);
    }
    else
    {
      v14 = 1;
      v36 = 1;
      if ( !CMILMatrix::IsIdentity<0>((__int64)a2 + 144, v10, v12, v13) )
      {
        v16 = CDrawingContext::PushTransformInternal(this, 0LL, v15, 1, 1);
        v4 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0x532u);
          goto LABEL_30;
        }
        v5 = 1;
      }
      v18 = *((_QWORD *)a2 + 27);
      v19 = *(struct CGeometry **)(v18 + 248);
      if ( !v19 )
        goto LABEL_21;
      v40 = 0LL;
      v41 = 0;
      v20 = CDrawingContext::ShapeDataFromGeometry(
              (const struct D2D_SIZE_F *)(v18 + 140),
              v19,
              (struct CShapePtr *)&v40);
      v4 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, 0x53Du);
      }
      else
      {
        if ( !v40 )
        {
LABEL_20:
          CShapePtr::Release((CShapePtr *)&v40);
LABEL_21:
          *((_QWORD *)this + 419) = a2;
          v33 = CPolygon::Draw(a2, this);
          v4 = v33;
          if ( v33 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0LL, v33, 0x55Au);
          goto LABEL_29;
        }
        v39 = 0LL;
        v37 = 1;
        v43 = 0LL;
        v42 = 0LL;
        TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 368));
        v24 = CDrawingContext::D2DGeometryFromShape((CDrawingContext *)&v37, v23, (__int64)TopByReference, &v39, &v37);
        v4 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, v24, 0x548u);
        }
        else
        {
          if ( v37 )
          {
            v30 = 0LL;
          }
          else
          {
            v26 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 368));
            v27 = *((_DWORD *)v26 + 1);
            LODWORD(v42) = *(_DWORD *)v26;
            *(_QWORD *)((char *)&v42 + 4) = __PAIR64__(*((_DWORD *)v26 + 4), v27);
            v28 = *((_DWORD *)v26 + 12);
            HIDWORD(v42) = *((_DWORD *)v26 + 5);
            v29 = *((_DWORD *)v26 + 13);
            v30 = &v42;
            v43 = __PAIR64__(v29, v28);
          }
          v31 = CDrawingContext::PushD2DLayer(this, (char *)v18, 0LL, (__int64)v39, (__int64)v30, 1.0, 0, 0);
          v4 = v31;
          if ( v31 >= 0 )
          {
            v6 = 1;
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v39);
            goto LABEL_20;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0LL, v31, 0x552u);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v39);
      }
      CShapePtr::Release((CShapePtr *)&v40);
    }
  }
LABEL_29:
  v14 = v36;
LABEL_30:
  *((_QWORD *)this + 419) = 0LL;
  if ( v6 )
    CDrawingContext::PopLayer(this);
  if ( v5 )
    CDrawingContext::PopTransformInternal(this, 1);
  if ( v14 )
    CWatermarkStack<float,2,2,10>::Pop((_DWORD *)this + 776);
  if ( v38 )
    CDrawingContext::PopRenderOptionsInternal(this, 1);
  return v4;
}
