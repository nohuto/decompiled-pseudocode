/*
 * XREFs of ?SetVisualTree@CVisual@@IEAAJPEAVCVisualTree@@@Z @ 0x18008DDF4
 * Callers:
 *     ?Initialize@CVisualTree@@MEAAJXZ @ 0x18008DDE0 (-Initialize@CVisualTree@@MEAAJXZ.c)
 *     ?Initialize@CDesktopTree@@MEAAJXZ @ 0x1800D3710 (-Initialize@CDesktopTree@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180067460 (-CalculateRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x18008DE88 (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::SetVisualTree(CVisual *this, struct CVisualTree *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // xmm1_8
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v4 = 0;
  CVisual::SetVisualTreeNoRef(this, a2);
  if ( (*((_BYTE *)this + 88) & 1) == 0 )
  {
    v10 = 0LL;
    v9 = 0LL;
    v5 = CVisual::CalculateRootBounds(this, (__int64)&v9);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xF96u, 0LL);
    }
    else
    {
      v7 = v10;
      *((_OWORD *)a2 + 4) = v9;
      *((_QWORD *)a2 + 10) = v7;
    }
  }
  return v4;
}
