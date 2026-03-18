/*
 * XREFs of ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x180298F8C
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJIII@Z @ 0x18029D930 (-FrameUpdate@CHolographicClient@@UEAAJIII@Z.c)
 *     ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18029E7DC (-ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18029EA54 (-ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?OnExclusiveViewDeactivate@CHolographicClient@@QEAAXPEAVCHolographicExclusiveView@@@Z @ 0x18029DC14 (-OnExclusiveViewDeactivate@CHolographicClient@@QEAAXPEAVCHolographicExclusiveView@@@Z.c)
 */

void __fastcall CHolographicExclusiveView::DeactivateView(
        CHolographicExclusiveView *this,
        struct CHolographicClient *a2)
{
  if ( !*((_BYTE *)this + 80) || *((_BYTE *)this + 83) )
  {
    *((_BYTE *)this + 80) = 0;
  }
  else
  {
    CHolographicClient::OnExclusiveViewDeactivate(a2, this);
    CHolographicExclusiveView::DeactivateSwapChain(this);
  }
}
