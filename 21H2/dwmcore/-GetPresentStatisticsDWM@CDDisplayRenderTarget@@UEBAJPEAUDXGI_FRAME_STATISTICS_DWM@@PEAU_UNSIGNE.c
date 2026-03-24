/*
 * XREFs of ?GetPresentStatisticsDWM@CDDisplayRenderTarget@@UEBAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18016EA70
 * Callers:
 *     ?GetOutstandingFrameCount@CDDisplayRenderTarget@@UEBAIPEAI@Z @ 0x18018C5E0 (-GetOutstandingFrameCount@CDDisplayRenderTarget@@UEBAIPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPresentStatisticsDWM@CDDisplaySwapChain@@QEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18023A110 (-GetPresentStatisticsDWM@CDDisplaySwapChain@@QEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_R.c)
 */

__int64 __fastcall CDDisplayRenderTarget::GetPresentStatisticsDWM(
        CDDisplayRenderTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2,
        struct _UNSIGNED_RATIO *a3)
{
  CDDisplaySwapChain *v3; // rcx
  int PresentStatisticsDWM; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  v3 = (CDDisplaySwapChain *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    PresentStatisticsDWM = CDDisplaySwapChain::GetPresentStatisticsDWM(v3, a2, a3);
    v6 = PresentStatisticsDWM;
    if ( PresentStatisticsDWM < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, PresentStatisticsDWM, 0xD9u, 0LL);
  }
  else
  {
    v6 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2003304442, 0xDDu, 0LL);
  }
  return v6;
}
