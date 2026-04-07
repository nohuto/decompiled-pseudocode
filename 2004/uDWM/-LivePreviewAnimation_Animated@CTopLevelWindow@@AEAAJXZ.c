/*
 * XREFs of ?LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ @ 0x180094AF0
 * Callers:
 *     ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ @ 0x180095634 (-UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180040810 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ @ 0x180085190 (-GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ.c)
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x1800954A4 (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
 */

__int64 __fastcall CTopLevelWindow::LivePreviewAnimation_Animated(CLivePreviewTimeline **this)
{
  double CurrentOpacity; // xmm0_8
  int v3; // eax
  unsigned int v4; // edi

  CurrentOpacity = CLivePreviewTimeline::GetCurrentOpacity(this[85]);
  v3 = CTopLevelWindow::SetLivePreviewAlpha((CTopLevelWindow *)this, CurrentOpacity * *((double *)this + 23));
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( *((_BYTE *)this[85] + 72) )
      CTopLevelWindow::StopLivePreviewAnimation((CTopLevelWindow *)this);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x1053u);
  }
  return v4;
}
