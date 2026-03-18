/*
 * XREFs of ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x18004E810
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800480E0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18004E030 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180095750 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x1801F7498 (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180050A2C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180054780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x180095B40 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x180095D9C (--1CRegionShape@@UEAA@XZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800BDC0C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x1800C1988 (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800C7F80 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_OffsetFixSetWindowRgn_31015038@@@details@wil@@QEAA_NXZ @ 0x1800EA188 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_OffsetFixSetWindowRgn_3.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180170188 (--1CShapePtr@@QEAA@XZ.c)
 */

__int64 __fastcall CWindowNode::EnsureEffectiveSpriteClip(CWindowNode *this)
{
  unsigned int v2; // edi
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  int WindowClipShape; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  struct CShape *v12; // rsi
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  _QWORD *v20; // [rsp+38h] [rbp-59h] BYREF
  char v21; // [rsp+40h] [rbp-51h]
  struct CShape *v22; // [rsp+48h] [rbp-49h] BYREF
  __int64 v23; // [rsp+50h] [rbp-41h] BYREF
  int v24; // [rsp+58h] [rbp-39h]
  int v25; // [rsp+5Ch] [rbp-35h]
  _QWORD v26[3]; // [rsp+68h] [rbp-29h] BYREF
  int v27; // [rsp+80h] [rbp-11h] BYREF
  __int64 v28; // [rsp+C0h] [rbp+2Fh]

  v2 = 0;
  v22 = 0LL;
  if ( !*((_BYTE *)this + 912) )
  {
    v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 113);
    if ( v3 )
    {
      (**v3)(v3, 1LL);
      *((_QWORD *)this + 113) = 0LL;
    }
  }
  if ( !*((_QWORD *)this + 113) )
  {
    v20 = 0LL;
    v26[0] = &CRegionShape::`vftable';
    v26[2] = &v27;
    v21 = 0;
    v26[1] = 0LL;
    v27 = 0;
    v28 = 0LL;
    if ( *((_QWORD *)this + 97) )
    {
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_OffsetFixSetWindowRgn_31015038>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_OffsetFixSetWindowRgn_31015038>::GetImpl'::`2'::impl) )
      {
        WindowClipShape = CWindowNode::GetWindowClipShape(this, (struct CShapePtr *)&v20);
        v2 = WindowClipShape;
        if ( WindowClipShape < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, WindowClipShape, 0x8C4u, 0LL);
LABEL_9:
          CRegionShape::~CRegionShape((CRegionShape *)v26);
          CShapePtr::~CShapePtr((CShapePtr *)&v20);
          return v2;
        }
      }
      else
      {
        CGeometry::GetShapeData(
          *((CGeometry **)this + 97),
          (const struct D2D_SIZE_F *)((char *)this + 132),
          (struct CShapePtr *)&v20);
      }
    }
    else
    {
      v6 = 0;
      v7 = *((_DWORD *)this + 175) - *((_DWORD *)this + 173);
      v8 = *((_DWORD *)this + 174) - *((_DWORD *)this + 172);
      v23 = 0LL;
      if ( v8 >= 0 )
        v6 = v8;
      v24 = v6;
      v9 = 0;
      if ( v7 >= 0 )
        v9 = v7;
      v25 = v9;
      CRegionShape::BuildFromRects(v26, &v23);
      CShapePtr::Release((CShapePtr *)&v20);
      v21 = 0;
      v20 = v26;
    }
    v10 = CShapePtr::CopyShape((CShapePtr *)&v20, 0LL, &v22);
    v12 = v22;
    v2 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x8D7u, 0LL);
    }
    else
    {
      if ( !*((_BYTE *)this + 913) )
      {
LABEL_23:
        *((_QWORD *)this + 113) = v12;
        *((_BYTE *)this + 912) = 1;
        goto LABEL_9;
      }
      v13 = *((_QWORD *)this + 90);
      v23 = 0LL;
      LOBYTE(v24) = 0;
      v22 = 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v13 + 32LL))(v13, &v23, 0LL);
      v2 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v14, 0x8E0u, 0LL);
      }
      else
      {
        v17 = CShape::Combine(v12, v15, v23, 0LL, 1, &v22);
        v2 = v17;
        if ( v17 >= 0 )
        {
          if ( v12 )
            (**(void (__fastcall ***)(struct CShape *, __int64))v12)(v12, 1LL);
          v12 = v22;
          CShapePtr::~CShapePtr((CShapePtr *)&v23);
          goto LABEL_23;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x8E5u, 0LL);
      }
      CShapePtr::~CShapePtr((CShapePtr *)&v23);
    }
    CRegionShape::~CRegionShape((CRegionShape *)v26);
    CShapePtr::~CShapePtr((CShapePtr *)&v20);
    if ( v12 )
      (**(void (__fastcall ***)(struct CShape *, __int64))v12)(v12, 1LL);
  }
  return v2;
}
