/*
 * XREFs of ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x180072CD0
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800728E0 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180080D20 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801F2FD4 (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z @ 0x180072EB8 (--$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180072EDC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180092390 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800A5EE8 (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniquene.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x1800A6350 (--1CRegionShape@@UEAA@XZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C463C (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?Offset@CRegionShape@@QEAAJJJ@Z @ 0x1800ECD84 (-Offset@CRegionShape@@QEAAJJJ@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x18016B814 (--1CShapePtr@@QEAA@XZ.c)
 */

__int64 __fastcall CWindowNode::GetWindowClipShape(CWindowNode *this, struct CShapePtr *a2)
{
  __int64 v2; // rax
  unsigned int v5; // edi
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int ShapeData; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // eax
  __int64 v17; // rcx
  CRegionShape *v18; // rbx
  CRegionShape *v20; // [rsp+30h] [rbp-59h] BYREF
  __int64 v21; // [rsp+38h] [rbp-51h] BYREF
  char v22; // [rsp+40h] [rbp-49h]
  __int64 v23; // [rsp+48h] [rbp-41h]
  int v24; // [rsp+50h] [rbp-39h]
  int v25; // [rsp+54h] [rbp-35h]
  _QWORD v26[2]; // [rsp+60h] [rbp-29h] BYREF
  int *v27; // [rsp+70h] [rbp-19h] BYREF
  int v28; // [rsp+78h] [rbp-11h] BYREF
  __int64 v29; // [rsp+B8h] [rbp+2Fh]

  v2 = *((_QWORD *)this + 97);
  v20 = 0LL;
  v5 = 0;
  if ( v2 && *(_BYTE *)(v2 + 160) )
  {
    CShapePtr::Release(a2);
    *((_BYTE *)a2 + 8) = 0;
    *(_QWORD *)a2 = &CRectanglesShape::sc_emptyShape;
  }
  else
  {
    v6 = 0;
    v7 = *((_DWORD *)this + 163) - *((_DWORD *)this + 161);
    v8 = *((_DWORD *)this + 162) - *((_DWORD *)this + 160);
    v21 = 0LL;
    if ( v8 >= 0 )
      v6 = v8;
    v22 = 0;
    v24 = v6;
    v23 = 0LL;
    v9 = 0;
    v26[1] = 0LL;
    if ( v7 >= 0 )
      v9 = v7;
    v28 = 0;
    v25 = v9;
    v29 = 0LL;
    v26[0] = &CRegionShape::`vftable';
    v27 = &v28;
    CRegion::AppendRects<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>>((FastRegion::CRegion *)&v27);
    ShapeData = CGeometry::GetShapeData(
                  *((CGeometry **)this + 97),
                  (const struct D2D_SIZE_F *)((char *)this + 132),
                  (struct CShapePtr *)&v21);
    v5 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, ShapeData, 0x7FDu, 0LL);
    }
    else
    {
      v13 = CShape::Combine(v21, v11, v26, 0LL, 1, &v20);
      v5 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x803u, 0LL);
      }
      else
      {
        v15 = *((_DWORD *)this + 161) - *((_DWORD *)this + 173);
        if ( (*((_DWORD *)this + 160) != *((_DWORD *)this + 172) || v15)
          && (v16 = CRegionShape::Offset(v20, *((_DWORD *)this + 160) - *((_DWORD *)this + 172), v15), v5 = v16, v16 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x810u, 0LL);
        }
        else
        {
          v18 = v20;
          CShapePtr::Release(a2);
          *(_QWORD *)a2 = v18;
          *((_BYTE *)a2 + 8) = 1;
          v20 = 0LL;
        }
      }
    }
    CRegionShape::~CRegionShape((CRegionShape *)v26);
    CShapePtr::~CShapePtr((CShapePtr *)&v21);
  }
  SAFE_DELETE<CShape>(&v20);
  return v5;
}
