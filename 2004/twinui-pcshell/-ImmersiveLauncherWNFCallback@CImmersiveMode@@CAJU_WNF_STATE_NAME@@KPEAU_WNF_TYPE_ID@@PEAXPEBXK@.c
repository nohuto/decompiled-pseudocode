/*
 * XREFs of ?ImmersiveLauncherWNFCallback@CImmersiveMode@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180083030
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b9e009682738098b72449fb04d8aa113___ @ 0x1800830A0 (Windows--Internal--ComTaskPool--QueueTask__lambda_b9e009682738098b72449fb04d8aa113___.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveMode::ImmersiveLauncherWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        unsigned int *a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int *v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
  v8 = a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
  Windows::Internal::ComTaskPool::QueueTask__lambda_b9e009682738098b72449fb04d8aa113___(v6, v5, a4[92], &v8);
  if ( v8 )
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v8 + 16LL))(v8);
  (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a4 + 16LL))(a4);
  return 0LL;
}
