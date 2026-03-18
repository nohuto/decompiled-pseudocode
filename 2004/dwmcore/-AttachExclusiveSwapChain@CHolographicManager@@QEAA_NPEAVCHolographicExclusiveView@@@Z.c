/*
 * XREFs of ?AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x180251284
 * Callers:
 *     ?AttachSwapChain@CHolographicExclusiveView@@AEAAJPEAVCResource@@@Z @ 0x180255058 (-AttachSwapChain@CHolographicExclusiveView@@AEAAJPEAVCResource@@@Z.c)
 *     ?PublishPresentData@CHolographicExclusiveView@@QEAAXXZ @ 0x180255780 (-PublishPresentData@CHolographicExclusiveView@@QEAAXXZ.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180258A80 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AttachExclusiveSwapChain(CHolographicInteropTaskQueue **this, struct IUnknown *a2)
{
  bool result; // al

  result = 0;
  if ( this[6] )
  {
    if ( *((_BYTE *)this + 240) )
      return CHolographicInteropTaskQueue::PostMessageW(this[6], 0xEu, a2, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
