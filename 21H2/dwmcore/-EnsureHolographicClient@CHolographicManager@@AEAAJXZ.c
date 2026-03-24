/*
 * XREFs of ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x1802537B0
 * Callers:
 *     ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z @ 0x180252B18 (-AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18005FB60 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800C0950 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800DB3BC (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800DB3E0 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?HolographicClientCreated_@CompositorTracing@@QEAAXXZ @ 0x180253C18 (-HolographicClientCreated_@CompositorTracing@@QEAAXXZ.c)
 *     ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x18025A808 (-Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x18025AE3C (-Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CHolographicManager::EnsureHolographicClient(CHolographicManager *this)
{
  unsigned int v1; // ebx
  CRenderTargetBitmap *v2; // rsi
  struct CHolographicInteropTaskQueue *v3; // rdi
  int v5; // eax
  __int64 v6; // rcx
  struct CHolographicInteropTaskQueue *v7; // r14
  int v8; // eax
  __int64 v9; // rcx
  CMILCOMBase *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  CompositorTracing *v13; // rcx
  CRenderTargetBitmap *v15; // [rsp+60h] [rbp+8h] BYREF
  struct CHolographicInteropTaskQueue *v16; // [rsp+68h] [rbp+10h] BYREF
  struct CHolographicInteropTaskQueue *v17; // [rsp+70h] [rbp+18h] BYREF

  v1 = 0;
  v2 = 0LL;
  v17 = 0LL;
  v3 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( !*((_QWORD *)this + 5) )
  {
    v5 = CHolographicInteropTaskQueue::Create(&v17);
    v7 = v17;
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x2EDu, 0LL);
    }
    else
    {
      v8 = CHolographicClient::Create(v17, &v16, &v15);
      v1 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x2EEu, 0LL);
        v2 = v15;
        v3 = v16;
      }
      else
      {
        v2 = v15;
        v10 = v15;
        *((_QWORD *)this + 5) = v15;
        CMILCOMBase::InternalAddRef(v10);
        *((_QWORD *)this + 6) = v7;
        (**(void (__fastcall ***)(struct CHolographicInteropTaskQueue *))v7)(v7);
        v3 = v16;
        *((_QWORD *)this + 7) = v16;
        (**(void (__fastcall ***)(struct CHolographicInteropTaskQueue *))v3)(v3);
        if ( CompositorTracing::IsEnabled(v11) )
        {
          wil::details::static_lazy<CompositorTracing>::get(
            v12,
            _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
          CompositorTracing::HolographicClientCreated_(v13);
        }
      }
    }
    if ( v3 )
      (*(void (__fastcall **)(struct CHolographicInteropTaskQueue *))(*(_QWORD *)v3 + 8LL))(v3);
    if ( v7 )
      (*(void (__fastcall **)(struct CHolographicInteropTaskQueue *))(*(_QWORD *)v7 + 8LL))(v7);
    if ( v2 )
      CRenderTargetBitmap::Release(v2);
  }
  return v1;
}
