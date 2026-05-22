/*
 * XREFs of ?WorkCallback@ChainedThreadpoolWorker@ThreadHelpers@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180166E90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B288 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x18007595C (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18014B5A4 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetNextWorkItem@ChainedThreadpoolWorker@ThreadHelpers@@AEAA_NPEAV?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@PEAPEAUIUnknown@@@Z @ 0x18015D4F8 (-GetNextWorkItem@ChainedThreadpoolWorker@ThreadHelpers@@AEAA_NPEAV-$shared_ptr@V-$function@$$A6A.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ThreadHelpers::ChainedThreadpoolWorker::WorkCallback(
        PTP_CALLBACK_INSTANCE Instance,
        volatile __int32 **Context,
        PTP_WORK Work)
{
  volatile signed __int32 *v4; // rdi
  std::_Ref_count_base *v5[2]; // [rsp+20h] [rbp-20h] BYREF
  volatile __int32 *v6; // [rsp+30h] [rbp-10h]
  volatile signed __int32 *v7; // [rsp+38h] [rbp-8h]
  __int64 v8; // [rsp+68h] [rbp+28h] BYREF
  __int64 v9; // [rsp+78h] [rbp+38h] BYREF

  v4 = Context[1];
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
    v4 = Context[1];
  }
  v6 = *Context;
  v7 = v4;
  _InterlockedExchange(v6, GetCurrentThreadId());
  v9 = 0LL;
  v8 = 0LL;
  *(_OWORD *)v5 = 0LL;
  while ( 1 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
    if ( !ThreadHelpers::ChainedThreadpoolWorker::GetNextWorkItem((__int64)Context, v5, &v8) )
      break;
    Microsoft::WRL::ComPtr<IUnknown>::operator=(&v9, &v8);
    std::_Func_class<void,>::operator()((__int64)v5[0]);
  }
  if ( v5[1] )
    std::_Ref_count_base::_Decref(v5[1]);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  _InterlockedExchange(v6, 0);
  if ( v4 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v4);
}
