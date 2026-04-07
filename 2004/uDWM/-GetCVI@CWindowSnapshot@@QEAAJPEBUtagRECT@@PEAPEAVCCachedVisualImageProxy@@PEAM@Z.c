/*
 * XREFs of ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x1800092F4
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x180001860 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@_NPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x1800369C4 (-GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 *     ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCCachedVisualImageProxy@@@Z @ 0x1800935FC (-MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCCachedVisualIma.c)
 * Callees:
 *     ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z @ 0x180009350 (-HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CWindowSnapshot::GetCVI(
        CWindowSnapshot *this,
        const struct tagRECT *a2,
        struct CCachedVisualImageProxy **a3,
        float *a4)
{
  unsigned int v6; // ebx
  __int64 v7; // r11
  __int64 v8; // rax

  v6 = -2147023434;
  if ( CWindowSnapshot::HasCVIOfCompatibleSize(this, a2) )
  {
    *a3 = *(struct CCachedVisualImageProxy **)(v7 + 48);
    v8 = *(_QWORD *)(v7 + 48);
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v6 = 0;
    *a4 = *(float *)(v7 + 72);
  }
  return v6;
}
