/*
 * XREFs of ?ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1802549C4
 * Callers:
 *     ?DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802543E0 (-DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?ProcessSetSwapChain@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETSWAPCHAIN@@@Z @ 0x1802547D0 (-ProcessSetSwapChain@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPH.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180051DB0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180257CA0 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicExclusiveView::ReleaseSwapChain(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  struct CResource *Ptr; // rdx
  PVOID v4; // rax
  CHolographicInteropTaskQueue *v5; // rcx

  v1 = this + 50;
  AcquireSRWLockExclusive(this + 50);
  Ptr = (struct CResource *)this[10].Ptr;
  if ( Ptr )
  {
    CResource::UnRegisterNotifierInternal((CResource *)this, Ptr);
    this[10].Ptr = 0LL;
    ReleaseSRWLockExclusive(v1);
    v4 = this[7].Ptr;
    if ( v4 )
    {
      v5 = (CHolographicInteropTaskQueue *)*((_QWORD *)v4 + 6);
      if ( v5 )
      {
        if ( *((_BYTE *)v4 + 240) )
          CHolographicInteropTaskQueue::PostMessageW(v5, 0xFu, (struct IUnknown *)this, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  else
  {
    ReleaseSRWLockExclusive(v1);
  }
}
