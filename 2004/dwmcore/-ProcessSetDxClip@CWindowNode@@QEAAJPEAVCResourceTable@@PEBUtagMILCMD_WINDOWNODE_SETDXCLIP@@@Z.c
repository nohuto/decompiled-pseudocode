/*
 * XREFs of ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x1801F4C1C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180006498 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034D4C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180073590 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A0618 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A28A8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800A3C64 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A61E4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C456C (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F4A84 (-GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 */

__int64 __fastcall CWindowNode::ProcessSetDxClip(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETDXCLIP *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  CGeometry *Resource; // rsi
  __int64 v8; // rcx
  CGeometry *v9; // rcx
  bool v10; // r14
  int ShapeData; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  CShape *v18; // [rsp+30h] [rbp-50h] BYREF
  char v19; // [rsp+38h] [rbp-48h]
  CShape *v20; // [rsp+40h] [rbp-40h] BYREF
  char v21; // [rsp+48h] [rbp-38h]
  __int128 v22; // [rsp+50h] [rbp-30h] BYREF
  __int128 v23; // [rsp+60h] [rbp-20h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (CGeometry *)CResourceTable::GetResource((__int64)a2, v5, 0x41u)) != 0LL )
  {
    v9 = (CGeometry *)*((_QWORD *)this + 107);
    if ( Resource == v9 )
      return v4;
    v20 = 0LL;
    v18 = 0LL;
    v10 = 0;
    v21 = 0;
    v19 = 0;
    if ( Resource )
    {
      ShapeData = CGeometry::GetShapeData(
                    Resource,
                    (const struct D2D_SIZE_F *)((char *)this + 132),
                    (struct CShapePtr *)&v20);
      v4 = ShapeData;
      if ( ShapeData < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, ShapeData, 0x290u, 0LL);
LABEL_19:
        CShapePtr::Release((CShapePtr *)&v18);
        CShapePtr::Release((CShapePtr *)&v20);
        return v4;
      }
      v9 = (CGeometry *)*((_QWORD *)this + 107);
    }
    if ( v9
      && (v13 = CGeometry::GetShapeData(v9, (const struct D2D_SIZE_F *)((char *)this + 132), (struct CShapePtr *)&v18),
          v4 = v13,
          v13 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x295u, 0LL);
    }
    else
    {
      if ( CShapePtr::IsAxisAlignedRectangle(&v20) && CShapePtr::IsAxisAlignedRectangle(&v18) )
      {
        v23 = 0LL;
        v22 = 0LL;
        CWindowNode::GetGeometryBounds((__int64)this, Resource);
        CWindowNode::GetGeometryBounds((__int64)this, *((CGeometry **)this + 107));
        v10 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(
                (float *)&v23,
                (float *)&v22) != 0;
      }
      v15 = CResource::RegisterNotifier(this, Resource);
      v4 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x2A7u, 0LL);
      }
      else
      {
        CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 107));
        *((_QWORD *)this + 107) = Resource;
        if ( !v10 )
        {
          *((_BYTE *)this + 912) = 0;
          CVisual::PropagateFlags((__int64)this, 5u);
        }
      }
    }
    goto LABEL_19;
  }
  v4 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x27Bu, 0LL);
  return v4;
}
