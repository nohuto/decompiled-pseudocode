/*
 * XREFs of ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800633F8
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180062FA0 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x18008CE74 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1802445C0 (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1CRegionShape@@UEAA@XZ @ 0x18006356C (--1CRegionShape@@UEAA@XZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180063748 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18009AF00 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD884 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowNode::GetWindowClipShape(CWindowNode *this, struct CShapePtr *a2)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  CGeometry *v6; // rcx
  int ShapeData; // eax
  __int64 v8; // rdx
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rbx
  __int64 v14; // [rsp+30h] [rbp-49h] BYREF
  char v15; // [rsp+38h] [rbp-41h]
  __int64 v16; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v17[3]; // [rsp+50h] [rbp-29h] BYREF
  int v18; // [rsp+68h] [rbp-11h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+2Fh]

  v2 = *((_QWORD *)this + 102);
  v3 = 0;
  if ( v2 && *(_BYTE *)(v2 + 168) )
  {
    CShapePtr::Release(a2);
    *((_BYTE *)a2 + 8) = 0;
    *(_QWORD *)a2 = &CRectanglesShape::sc_emptyShape;
  }
  else
  {
    v17[1] = 0LL;
    v18 = 0;
    v19 = 0LL;
    v17[0] = &CRegionShape::`vftable';
    v17[2] = &v18;
    CRegionShape::BuildFromRects(v17, (char *)this + 752, 1LL);
    v6 = (CGeometry *)*((_QWORD *)this + 102);
    v14 = 0LL;
    v15 = 0;
    ShapeData = CGeometry::GetShapeData(v6, (const struct D2D_SIZE_F *)((char *)this + 140), (struct CShapePtr *)&v14);
    v3 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, ShapeData, 0x6FFu, 0LL);
    }
    else
    {
      v16 = 0LL;
      v10 = CShape::Combine(v14, v8, v17, 0LL, 1, &v16);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x705u, 0LL);
      }
      else
      {
        v12 = v16;
        CShapePtr::Release(a2);
        *(_QWORD *)a2 = v12;
        *((_BYTE *)a2 + 8) = 1;
      }
    }
    CShapePtr::Release((CShapePtr *)&v14);
    CRegionShape::~CRegionShape((CRegionShape *)v17);
  }
  return v3;
}
