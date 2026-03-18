/*
 * XREFs of ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x180095FB0
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180095240 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z @ 0x1801B27B4 (-ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18007CF48 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x180096088 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180096450 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180096614 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

void __fastcall CVisual::SetOffset(CVisual *this, float a2, float a3, float a4)
{
  _DWORD v5[4]; // [rsp+20h] [rbp-58h] BYREF

  if ( *((float *)this + 26) != a2 || *((float *)this + 27) != a3 || *((float *)this + 28) != a4 )
  {
    *((float *)this + 26) = a2;
    *((float *)this + 27) = a3;
    *((float *)this + 28) = a4;
    CVisual::PropagateFlags((__int64)this, 5u);
    CVisual::OnOuterTransformChanged(this);
    *(float *)v5 = a2;
    *(float *)&v5[1] = a3;
    *(float *)&v5[2] = a4;
    CPropertyChangeResource::NotifyVector3PropertyChanged(this, 0x1Cu, (const struct D2DVector3 *)v5);
    CResource::InvalidateAnimationSources(this, 0x1Cu);
  }
}
