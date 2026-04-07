/*
 * XREFs of ?SetClientAreaBrush@CAnimatedTransitionVisual@@QEAAJPEAVCImageLegacyMilBrushProxy@@PEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x180003940
 * Callers:
 *     ?CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800035BC (-CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCSto.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180034528 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::SetClientAreaBrush(
        CAnimatedTransitionVisual *this,
        struct CImageLegacyMilBrushProxy *a2,
        struct CCachedVisualImageProxy *a3,
        struct MilPoint3F *a4)
{
  CBaseObject *v6; // rcx
  CBaseObject *v9; // rcx
  int v10; // eax

  v6 = (CBaseObject *)*((_QWORD *)this + 75);
  if ( v6 )
    CBaseObject::Release(v6);
  *((_QWORD *)this + 75) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  v9 = (CBaseObject *)*((_QWORD *)this + 72);
  if ( v9 )
    CBaseObject::Release(v9);
  *((_QWORD *)this + 72) = a3;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  v10 = *((_DWORD *)a4 + 2);
  *(_QWORD *)((char *)this + 804) = *(_QWORD *)a4;
  *((_DWORD *)this + 203) = v10;
  return 0LL;
}
