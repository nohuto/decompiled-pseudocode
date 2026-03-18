/*
 * XREFs of ?UpdateHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x180296C8C
 * Callers:
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x180298528 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 * Callees:
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x180024D8C (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x180024E64 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?DwmHolographicDisplayUpdate_@CompositorTracing@@QEAAXI@Z @ 0x1802958F0 (-DwmHolographicDisplayUpdate_@CompositorTracing@@QEAAXI@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x18029CF8C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::UpdateHolographicDisplay(
        CHolographicManager *this,
        struct CHolographicDisplay *a2)
{
  int v4; // esi
  __int64 v5; // rcx
  CompositorTracing *v6; // rcx
  CHolographicInteropTaskQueue *v7; // rcx

  if ( a2 )
  {
    v4 = *((_DWORD *)a2 + 22);
    if ( CompositorTracing::IsEnabled((__int64)this) )
    {
      wil::details::static_lazy<CompositorTracing>::get(
        v5,
        _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
      CompositorTracing::DwmHolographicDisplayUpdate_(v6, v4);
    }
  }
  v7 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
  if ( v7 )
    CHolographicInteropTaskQueue::PostMessageW(
      v7,
      8u,
      (struct IUnknown *)(((unsigned __int64)a2 + 72) & -(__int64)(a2 != 0LL)),
      0LL,
      0LL,
      0LL,
      0LL);
}
