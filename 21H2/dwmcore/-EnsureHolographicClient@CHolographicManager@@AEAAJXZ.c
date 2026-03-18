/*
 * XREFs of ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x180295C00
 * Callers:
 *     ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z @ 0x180295104 (-AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z.c)
 * Callees:
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x180024D8C (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x180024E64 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HolographicClientCreated_@CompositorTracing@@QEAAXXZ @ 0x1802960A0 (-HolographicClientCreated_@CompositorTracing@@QEAAXXZ.c)
 *     ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x18029CE34 (-Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x18029D52C (-Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CHolographicManager::EnsureHolographicClient(CHolographicManager *this)
{
  unsigned int v1; // ebx
  volatile signed __int32 *v2; // rsi
  struct CHolographicInteropTaskQueue *v3; // rdi
  int v5; // eax
  __int64 v6; // rcx
  struct CHolographicInteropTaskQueue *v7; // r14
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  CompositorTracing *v12; // rcx
  struct CHolographicClient *v14; // [rsp+60h] [rbp+8h] BYREF
  struct CHolographicInteropTaskQueue *v15; // [rsp+68h] [rbp+10h] BYREF
  struct CHolographicInteropTaskQueue *v16; // [rsp+70h] [rbp+18h] BYREF

  v1 = 0;
  v2 = 0LL;
  v16 = 0LL;
  v3 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( !*((_QWORD *)this + 5) )
  {
    v5 = CHolographicInteropTaskQueue::Create(&v16);
    v7 = v16;
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v5, 0x2EDu);
    }
    else
    {
      v8 = CHolographicClient::Create(v16, &v15, &v14);
      v1 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x2EEu);
        v2 = (volatile signed __int32 *)v14;
        v3 = v15;
      }
      else
      {
        v2 = (volatile signed __int32 *)v14;
        *((_QWORD *)this + 5) = v14;
        CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v2 + 2));
        *((_QWORD *)this + 6) = v7;
        (**(void (__fastcall ***)(struct CHolographicInteropTaskQueue *))v7)(v7);
        v3 = v15;
        *((_QWORD *)this + 7) = v15;
        (**(void (__fastcall ***)(struct CHolographicInteropTaskQueue *))v3)(v3);
        if ( CompositorTracing::IsEnabled(v10) )
        {
          wil::details::static_lazy<CompositorTracing>::get(
            v11,
            _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
          CompositorTracing::HolographicClientCreated_(v12);
        }
      }
    }
    if ( v3 )
      (*(void (__fastcall **)(struct CHolographicInteropTaskQueue *))(*(_QWORD *)v3 + 8LL))(v3);
    if ( v7 )
      (*(void (__fastcall **)(struct CHolographicInteropTaskQueue *))(*(_QWORD *)v7 + 8LL))(v7);
    if ( v2 )
      CMILRefCountBaseT<IUnknown>::InternalRelease(v2);
  }
  return v1;
}
