/*
 * XREFs of ?RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x1802542E0
 * Callers:
 *     ?DetachFromChannel@CHolographicDisplay@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802564D0 (-DetachFromChannel@CHolographicDisplay@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18005FB60 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800DB3BC (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800DB3E0 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?DwmHolographicDisplayRemove_@CompositorTracing@@QEAAXI@Z @ 0x180253280 (-DwmHolographicDisplayRemove_@CompositorTracing@@QEAAXI@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x18025A950 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::RemoveHolographicDisplay(RTL_SRWLOCK *this, struct CHolographicDisplay *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  CompositorTracing *v6; // rcx
  unsigned int Ptr; // edx
  __int64 v8; // rcx
  struct CHolographicDisplay **i; // r8
  CHolographicInteropTaskQueue *v10; // rcx

  if ( a2 )
  {
    v4 = *((_DWORD *)a2 + 20);
    if ( CompositorTracing::IsEnabled((__int64)this) )
    {
      wil::details::static_lazy<CompositorTracing>::get(
        v5,
        _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
      CompositorTracing::DwmHolographicDisplayRemove_(v6, v4);
    }
  }
  AcquireSRWLockExclusive(this + 13);
  Ptr = (unsigned int)this[17].Ptr;
  v8 = 0LL;
  for ( i = (struct CHolographicDisplay **)this[14].Ptr; (unsigned int)v8 < Ptr; v8 = (unsigned int)(v8 + 1) )
  {
    if ( a2 == i[v8] )
      break;
  }
  if ( (unsigned int)v8 < Ptr )
  {
    while ( (unsigned int)v8 < Ptr - 1 )
    {
      i[v8] = i[(unsigned int)(v8 + 1)];
      v8 = (unsigned int)(v8 + 1);
      Ptr = (unsigned int)this[17].Ptr;
    }
    LODWORD(this[17].Ptr) = Ptr - 1;
    v10 = (CHolographicInteropTaskQueue *)this[6].Ptr;
    if ( v10 )
      CHolographicInteropTaskQueue::PostMessageW(
        v10,
        7u,
        (struct IUnknown *)(((unsigned __int64)a2 + 64) & -(__int64)(a2 != 0LL)),
        0LL,
        0LL,
        0LL,
        0LL);
    CRenderTargetBitmap::Release(a2);
  }
  ReleaseSRWLockExclusive(this + 13);
}
