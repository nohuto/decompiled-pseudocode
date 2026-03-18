/*
 * XREFs of ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x180254FB8
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJIII@Z @ 0x180259340 (-FrameUpdate@CHolographicClient@@UEAAJIII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ @ 0x180254EEC (-ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ.c)
 *     ?DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x180255174 (-DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?OnExclusiveViewActivate@CHolographicClient@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x1802595B4 (-OnExclusiveViewActivate@CHolographicClient@@QEAA_NPEAVCHolographicExclusiveView@@@Z.c)
 */

bool __fastcall CHolographicExclusiveView::ActivateView(CHolographicExclusiveView *this, struct CHolographicClient *a2)
{
  int v2; // edi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = 0;
  if ( *((_BYTE *)this + 75) )
  {
    *((_BYTE *)this + 72) = 1;
  }
  else
  {
    v5 = CHolographicExclusiveView::ActivateSwapChain(this, (__int64)a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xCBu, 0LL);
    }
    else if ( !CHolographicClient::OnExclusiveViewActivate(a2, this) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147467259, 0xCEu, 0LL);
LABEL_8:
      CHolographicExclusiveView::DeactivateSwapChain(this);
      return *((_BYTE *)this + 72);
    }
  }
  if ( v2 < 0 )
    goto LABEL_8;
  return *((_BYTE *)this + 72);
}
