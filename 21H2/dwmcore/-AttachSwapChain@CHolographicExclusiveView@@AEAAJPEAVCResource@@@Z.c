/*
 * XREFs of ?AttachSwapChain@CHolographicExclusiveView@@AEAAJPEAVCResource@@@Z @ 0x180298DF8
 * Callers:
 *     ?ProcessSetSwapChain@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETSWAPCHAIN@@@Z @ 0x180299440 (-ProcessSetSwapChain@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPH.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x18029565C (-AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z.c)
 */

__int64 __fastcall CHolographicExclusiveView::AttachSwapChain(RTL_SRWLOCK *this, struct CResource *a2)
{
  unsigned int v2; // esi
  RTL_SRWLOCK *v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  CHolographicInteropTaskQueue **Ptr; // rcx

  v2 = 0;
  if ( a2 )
  {
    v5 = this + 51;
    AcquireSRWLockExclusive(this + 51);
    this[11].Ptr = a2;
    v6 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x185u);
      ReleaseSRWLockExclusive(v5);
      this[11].Ptr = 0LL;
    }
    else
    {
      Ptr = (CHolographicInteropTaskQueue **)this[8].Ptr;
      if ( Ptr )
        CHolographicManager::AttachExclusiveSwapChain(Ptr, (struct IUnknown *)this);
      ReleaseSRWLockExclusive(v5);
    }
  }
  return v2;
}
