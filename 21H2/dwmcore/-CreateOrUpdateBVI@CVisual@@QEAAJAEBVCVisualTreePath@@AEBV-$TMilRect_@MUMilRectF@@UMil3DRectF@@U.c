/*
 * XREFs of ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x180086704
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008D06C (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x1800D4E30 (-UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 * Callees:
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x1800473B0 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18008685C (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUMilRec.c)
 *     ?GetBackdropVisualImage@CTreeData@@IEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x180089B0C (-GetBackdropVisualImage@CTreeData@@IEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x18008D4A8 (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008D5F4 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18008E708 (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008F210 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@@Z @ 0x1800D43C8 (-Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@.c)
 *     ?SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z @ 0x1800DB714 (-SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z.c)
 */

__int64 __fastcall CVisual::CreateOrUpdateBVI(
        struct CVisual *a1,
        struct CVisualTreePath *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  CVisual *v7; // rsi
  const struct CVisualTree *v8; // r14
  CTreeData *v9; // r15
  struct CBackdropVisualImage *BackdropVisualImage; // rax
  struct CBackdropVisualImage *v11; // rbx
  unsigned int v12; // edi
  struct CVisualTree *VisualTreeNoRef; // rax
  const char **DebugString; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  _BYTE v18[8]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v19[8]; // [rsp+38h] [rbp-30h] BYREF
  struct CBackdropVisualImage *v20; // [rsp+78h] [rbp+10h] BYREF

  v7 = *(CVisual **)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 64LL);
  v8 = *(const struct CVisualTree **)(*((_QWORD *)a2 + 1) - 8LL);
  v9 = CVisual::EnsureTreeData(a1, v8);
  BackdropVisualImage = CTreeData::GetBackdropVisualImage(v9, a2);
  v11 = BackdropVisualImage;
  if ( BackdropVisualImage )
  {
    CMILRefCountImpl::AddReference((struct CBackdropVisualImage *)((char *)BackdropVisualImage + 8));
  }
  else
  {
    v20 = 0LL;
    VisualTreeNoRef = CVisual::GetVisualTreeNoRef(v7);
    CBackdropVisualImage::Create(g_pComposition, a1, a2, VisualTreeNoRef == v8, &v20);
    v11 = v20;
    CTreeData::SetBackdropVisualImage(v9, a2, v20);
    DebugString = (const char **)CVisualTreePath::GetDebugString(a2, &v20);
    v16 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v18, "pBVI=0x%p, bviPath=[%s]", v11, *DebugString);
    v17 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v19, "Visual-CreatedNewBVI");
    DwmDbg::Backdrops::LogBrushEtwEvent(v17, a1, v16);
    if ( v20 )
      DefaultHeap::Free(v20);
  }
  v12 = CBackdropVisualImage::ValidateRootAndSourceRectangle(v11, a5);
  if ( v11 )
    CResource::InternalRelease(v11);
  return v12;
}
