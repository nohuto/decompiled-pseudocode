/*
 * XREFs of ?AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z @ 0x1802952F4
 * Callers:
 *     ?OnChanged@CHolographicViewer@@AEAAXXZ @ 0x18029C960 (-OnChanged@CHolographicViewer@@AEAAXXZ.c)
 * Callees:
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x180024D8C (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x180024E64 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?DwmHolographicViewerAdd_@CompositorTracing@@QEAAXIK@Z @ 0x180295A58 (-DwmHolographicViewerAdd_@CompositorTracing@@QEAAXIK@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x18029CF8C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddHolographicViewer(RTL_SRWLOCK *this, struct CHolographicViewer *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  bool v5; // di
  CompositorTracing *v6; // rcx
  __int64 v7; // rcx
  unsigned int Ptr; // eax
  unsigned int v9; // r8d
  CHolographicInteropTaskQueue *v10; // rcx
  struct IUnknown *v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  struct CHolographicViewer *v15; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v16[4]; // [rsp+68h] [rbp-30h]

  v15 = a2;
  v3 = *((_DWORD *)a2 + 20);
  *(_OWORD *)v16 = *(_OWORD *)((char *)a2 + 116);
  v5 = 0;
  if ( CompositorTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<CompositorTracing>::get(
      v4,
      _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
    CompositorTracing::DwmHolographicViewerAdd_(v6, v3, v16[3]);
  }
  AcquireSRWLockExclusive(this + 13);
  Ptr = (unsigned int)this[28].Ptr;
  v9 = Ptr + 1;
  if ( Ptr + 1 < Ptr )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2147024362, 0xB5u);
    goto LABEL_13;
  }
  if ( v9 > HIDWORD(this[27].Ptr) )
  {
    v12 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)&this[25], 8u, 1, &v15);
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0xC0u);
      goto LABEL_13;
    }
  }
  else
  {
    *((_QWORD *)this[25].Ptr + Ptr) = v15;
    LODWORD(this[28].Ptr) = v9;
  }
  CMILRefCountImpl::AddReference((struct CHolographicViewer *)((char *)v15 + 8));
  v10 = (CHolographicInteropTaskQueue *)this[6].Ptr;
  if ( v10 )
  {
    v11 = (struct IUnknown *)((char *)v15 + 64);
    if ( !v15 )
      v11 = 0LL;
    v5 = CHolographicInteropTaskQueue::PostMessageW(v10, 0x18u, v11, 0LL, 0LL, 0LL, 0LL);
  }
LABEL_13:
  ReleaseSRWLockExclusive(this + 13);
  return v5;
}
