/*
 * XREFs of ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x1800C6F58
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180095240 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetRelativeOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRELATIVEOFFSET@@@Z @ 0x1801B2880 (-ProcessSetRelativeOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRELATIVEOFFS.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18007CF48 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x180096088 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180096450 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180096614 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x1800C704C (-SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1800C71F8 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

void __fastcall CVisual::SetRelativeOffset(CVisual *this, FLOAT a2, FLOAT a3, FLOAT a4)
{
  struct D2D_VECTOR_3F v5; // [rsp+20h] [rbp-58h] BYREF

  CVisual::GetRelativeOffsetInternal(this, &v5);
  if ( v5.x != a2 || v5.y != a3 || v5.z != a4 )
  {
    v5.x = a2;
    v5.y = a3;
    v5.z = a4;
    CVisual::SetRelativeOffsetInternal(this, &v5);
    CVisual::PropagateFlags((__int64)this, 5u);
    CVisual::OnOuterTransformChanged(this);
    v5.x = a2;
    v5.y = a3;
    v5.z = a4;
    CPropertyChangeResource::NotifyVector3PropertyChanged(this, 0x1Eu, (const struct D2DVector3 *)&v5);
    CResource::InvalidateAnimationSources(this);
  }
}
