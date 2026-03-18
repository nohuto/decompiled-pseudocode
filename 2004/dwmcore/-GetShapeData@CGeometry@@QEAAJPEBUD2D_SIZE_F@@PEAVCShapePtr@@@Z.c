/*
 * XREFs of ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180073590
 * Callers:
 *     ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180006428 (-TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180040694 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x180040760 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x1800669C8 (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800678C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18006AEC0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     ?GetEffects@CDrawingContext@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEAUNodeEffects@1@@Z @ 0x18006F890 (-GetEffects@CDrawingContext@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEAUNodeEffects@1@@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180070DE0 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800748A0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180075FB0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x180081CEC (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180084570 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A11B0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x180179EB8 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801B9D80 (-GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801C53A0 (-GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x1801E1134 (-EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ.c)
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801E569C (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801E7510 (-GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x1801EE188 (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1801EE264 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801F49FC (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z @ 0x1801F4A54 (-GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z.c)
 *     ?GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F4A84 (-GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x1801F4C1C (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x1801F8BC4 (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18025FB2C (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18006C580 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C456C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800D1280 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x1801B73EC (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 */

__int64 __fastcall CGeometry::GetShapeData(CGeometry *this, const struct D2D_SIZE_F *a2, struct CShapePtr *a3)
{
  char v3; // al
  unsigned int v4; // r14d
  const struct D2D_SIZE_F *v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  void (__fastcall ***v11)(_QWORD, __int64); // rcx
  CShape *v12; // rcx
  int v13; // eax
  __int64 v15; // rbx
  __int64 v16; // rbx
  char v17; // bl
  __int64 v18; // rbx
  int ShapeDataWorker; // eax
  __int64 v20; // rcx
  int TrimmedShapeData; // eax
  __int64 v22; // rcx
  __int64 v23; // r15
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  struct CShape *v28; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v29[2]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v30; // [rsp+48h] [rbp-31h]
  int v31; // [rsp+50h] [rbp-29h]
  int v32; // [rsp+54h] [rbp-25h]
  __int64 v33; // [rsp+58h] [rbp-21h]
  __int128 v34; // [rsp+60h] [rbp-19h]
  int v35; // [rsp+70h] [rbp-9h]
  int v36; // [rsp+74h] [rbp-5h]
  int v37; // [rsp+78h] [rbp-1h]
  int v38; // [rsp+7Ch] [rbp+3h]
  int v39; // [rsp+80h] [rbp+7h]
  _DWORD v40[6]; // [rsp+90h] [rbp+17h] BYREF

  v3 = *((_BYTE *)this + 128);
  v4 = 0;
  if ( v3 )
    goto LABEL_2;
  v15 = *((_QWORD *)this + 2);
  if ( GetCurrentThreadId() == *(_DWORD *)(v15 + 528) )
  {
    if ( (*((_BYTE *)this + 32) & 1) != 0 )
    {
      v17 = 1;
      ShapeDataWorker = CGeometry::GetShapeDataWorker(this, a2, (CGeometry *)((char *)this + 96));
      v4 = ShapeDataWorker;
      if ( ShapeDataWorker < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, ShapeDataWorker, 0xAAu, 0LL);
        return v4;
      }
      *((_DWORD *)this + 8) &= ~1u;
    }
    else
    {
      v17 = 0;
    }
    if ( *((_BYTE *)this + 129) )
    {
      if ( v17 || *((_BYTE *)this + 130) || (v18 = *((_QWORD *)this + 14)) == 0 )
      {
        TrimmedShapeData = CGeometry::GetTrimmedShapeData(
                             this,
                             *((const struct CShape **)this + 12),
                             (CGeometry *)((char *)this + 112));
        v4 = TrimmedShapeData;
        if ( TrimmedShapeData < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, TrimmedShapeData, 0xB2u, 0LL);
          return v4;
        }
        v18 = *((_QWORD *)this + 14);
        *((_BYTE *)this + 130) = 0;
      }
      CShapePtr::Release(a3);
    }
    else
    {
      v18 = *((_QWORD *)this + 12);
      if ( *((_BYTE *)a3 + 8) && *(_QWORD *)a3 )
        (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
    }
    *(_QWORD *)a3 = v18;
    *((_BYTE *)a3 + 8) = 0;
  }
  else
  {
    v3 = *((_BYTE *)this + 128);
    if ( v3 || (*((_BYTE *)this + 32) & 1) != 0 || (v16 = *((_QWORD *)this + 12)) == 0 )
    {
LABEL_2:
      v8 = 0LL;
      if ( v3 )
        v8 = a2;
      v9 = (*(__int64 (__fastcall **)(CGeometry *, const struct D2D_SIZE_F *, struct CShapePtr *))(*(_QWORD *)this
                                                                                                 + 224LL))(
             this,
             v8,
             a3);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xFAu, 0LL);
      }
      else if ( (*(unsigned __int8 (__fastcall **)(CGeometry *))(*(_QWORD *)this + 240LL))(this) && *(_QWORD *)a3 )
      {
        (*(void (__fastcall **)(CGeometry *, const struct D2D_SIZE_F *, _DWORD *))(*(_QWORD *)this + 232LL))(
          this,
          v8,
          v40);
        v12 = *(CShape **)a3;
        v29[0] = v40[0];
        v29[1] = v40[1];
        v31 = v40[2];
        v32 = v40[3];
        v35 = v40[4];
        v34 = _xmm;
        v36 = v40[5];
        v38 = (int)FLOAT_1_0;
        v39 = 0;
        v30 = 0LL;
        v33 = 0LL;
        v37 = 0;
        v13 = CShape::CopyShape(v12, (const struct CMILMatrix *)v29, &v28);
        v4 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, 0LL, 0, v13, 0x108u, 0LL);
        }
        else
        {
          if ( *((_BYTE *)a3 + 8) )
          {
            v11 = *(void (__fastcall ****)(_QWORD, __int64))a3;
            if ( *(_QWORD *)a3 )
              (**v11)(v11, 1LL);
          }
          *(_QWORD *)a3 = v28;
          *((_BYTE *)a3 + 8) = 1;
        }
      }
      if ( (v4 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, 0LL, 0, v4, 0xC6u, 0LL);
      }
      else if ( *((_BYTE *)this + 129) )
      {
        v26 = CGeometry::GetTrimmedShapeData(this, *(const struct CShape **)a3, a3);
        v4 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xCAu, 0LL);
      }
      return v4;
    }
    if ( *((_BYTE *)this + 129) )
    {
      if ( *((_BYTE *)this + 130) || (v23 = *((_QWORD *)this + 14)) == 0 )
      {
        v24 = CGeometry::GetTrimmedShapeData(this, *((const struct CShape **)this + 12), a3);
        v4 = v24;
        if ( v24 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xD3u, 0LL);
      }
      else
      {
        CShapePtr::Release(a3);
        *(_QWORD *)a3 = v23;
        *((_BYTE *)a3 + 8) = 0;
      }
    }
    else
    {
      if ( *((_BYTE *)a3 + 8) && *(_QWORD *)a3 )
        (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
      *(_QWORD *)a3 = v16;
      *((_BYTE *)a3 + 8) = 0;
    }
  }
  return v4;
}
