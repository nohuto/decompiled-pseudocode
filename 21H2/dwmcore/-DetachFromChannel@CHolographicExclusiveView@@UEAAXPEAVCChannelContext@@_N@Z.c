/*
 * XREFs of ?DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180257090
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z @ 0x180254040 (-ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z.c)
 *     ?RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z @ 0x1802541B8 (-RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z.c)
 *     ?ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x180257674 (-ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 */

void __fastcall CHolographicExclusiveView::DetachFromChannel(
        CHolographicExclusiveView *this,
        CAnimationLoggingManager **a2)
{
  void *v4; // rcx
  CHolographicInteropTaskQueue **v5; // rcx

  CHolographicExclusiveView::ReleaseSwapChain(this);
  v4 = (void *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 12) = 0LL;
  }
  v5 = (CHolographicInteropTaskQueue **)*((_QWORD *)this + 7);
  if ( v5 )
  {
    CHolographicManager::ReleaseExclusivePresentData(v5, *((_DWORD *)this + 16));
    CHolographicManager::RemoveExclusiveView(*((CHolographicManager **)this + 7), (struct IUnknown *)this);
  }
  CResource::DetachFromChannel(this, a2);
}
