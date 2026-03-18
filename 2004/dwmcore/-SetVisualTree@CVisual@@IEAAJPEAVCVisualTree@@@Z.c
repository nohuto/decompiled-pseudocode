/*
 * XREFs of ?SetVisualTree@CVisual@@IEAAJPEAVCVisualTree@@@Z @ 0x180035824
 * Callers:
 *     ?Initialize@CVisualTree@@MEAAJXZ @ 0x180035810 (-Initialize@CVisualTree@@MEAAJXZ.c)
 *     ?Initialize@CDesktopTree@@MEAAJXZ @ 0x1800DB370 (-Initialize@CDesktopTree@@MEAAJXZ.c)
 * Callees:
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x1800358B8 (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180078900 (-CalculateRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::SetVisualTree(CVisual *this, struct CVisualTree *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // ecx

  v4 = 0;
  CVisual::SetVisualTreeNoRef(this, a2);
  if ( (*((_BYTE *)this + 88) & 1) == 0 )
  {
    v5 = CVisual::CalculateRootBounds(this);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xF96u, 0LL);
    }
    else
    {
      *((_OWORD *)a2 + 4) = 0LL;
      *((_QWORD *)a2 + 10) = 0LL;
    }
  }
  return v4;
}
