/*
 * XREFs of ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x18008CE74
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180062FA0 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18008C7B0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180099A20 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 * Callees:
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800633F8 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18006356C (--1CRegionShape@@UEAA@XZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180063748 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD884 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D18A0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@QEAA?AVCShapePtr@@_N@Z @ 0x1800E2C04 (-GetAccumShape@CGdiSpriteBitmap@@QEAA-AVCShapePtr@@_N@Z.c)
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x1800EF328 (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 *     ??$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z @ 0x1800F18AC (--$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::EnsureEffectiveSpriteClip(CWindowNode *this)
{
  int v2; // edi
  int WindowClipShape; // eax
  __int64 v5; // rcx
  struct CShape *v6; // rax
  __int64 v7; // rax
  _QWORD *AccumShape; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // [rsp+28h] [rbp-69h]
  struct CShape *v12; // [rsp+38h] [rbp-59h] BYREF
  _QWORD *v13; // [rsp+40h] [rbp-51h] BYREF
  char v14; // [rsp+48h] [rbp-49h]
  _BYTE v15[16]; // [rsp+50h] [rbp-41h] BYREF
  struct tagRECT v16; // [rsp+60h] [rbp-31h] BYREF
  _QWORD v17[3]; // [rsp+78h] [rbp-19h] BYREF
  int v18; // [rsp+90h] [rbp-1h] BYREF
  __int64 v19; // [rsp+D0h] [rbp+3Fh]

  v2 = 0;
  v12 = 0LL;
  if ( !*((_BYTE *)this + 912) )
    SAFE_DELETE<CShape>((char *)this + 904);
  if ( !*((_QWORD *)this + 113) )
  {
    v13 = 0LL;
    v17[0] = &CRegionShape::`vftable';
    v17[2] = &v18;
    v14 = 0;
    v17[1] = 0LL;
    v18 = 0;
    v19 = 0LL;
    if ( *((_QWORD *)this + 102) )
    {
      WindowClipShape = CWindowNode::GetWindowClipShape(this, (struct CShapePtr *)&v13);
      v2 = WindowClipShape;
      if ( WindowClipShape < 0 )
      {
        v11 = 1732;
        goto LABEL_22;
      }
    }
    else
    {
      v16.right = *((_DWORD *)this + 198) - *((_DWORD *)this + 196);
      v16.bottom = *((_DWORD *)this + 199) - *((_DWORD *)this + 197);
      *(_QWORD *)&v16.left = 0LL;
      CRegionShape::BuildFromRects((__int64)v17, &v16, 1u);
      CShapePtr::Release((CShapePtr *)&v13);
      v14 = 0;
      v13 = v17;
    }
    WindowClipShape = CShapePtr::CopyShape((CShapePtr *)&v13, 0LL, &v12);
    v2 = WindowClipShape;
    if ( WindowClipShape >= 0 )
    {
      if ( *((_BYTE *)this + 913) )
      {
        *(_QWORD *)&v16.left = 0LL;
        v7 = CPtrArrayBase::operator[]((char *)this + 800, 0LL);
        AccumShape = (_QWORD *)CGdiSpriteBitmap::GetAccumShape(v7, v15, 0LL);
        v2 = CShape::Combine(v12, v9, *AccumShape, 0LL, 1, &v16);
        CShapePtr::Release((CShapePtr *)v15);
        if ( v2 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v2, 0x6DEu);
          goto LABEL_13;
        }
        if ( v12 )
          (**(void (__fastcall ***)(struct CShape *, __int64))v12)(v12, 1LL);
        v6 = *(struct CShape **)&v16.left;
      }
      else
      {
        v6 = v12;
      }
      *((_QWORD *)this + 113) = v6;
      v12 = 0LL;
      *((_BYTE *)this + 912) = 1;
LABEL_13:
      CRegionShape::~CRegionShape((CRegionShape *)v17);
      CShapePtr::Release((CShapePtr *)&v13);
      goto LABEL_4;
    }
    v11 = 1747;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, WindowClipShape, v11);
    goto LABEL_13;
  }
LABEL_4:
  if ( v12 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v12)(v12, 1LL);
  return (unsigned int)v2;
}
