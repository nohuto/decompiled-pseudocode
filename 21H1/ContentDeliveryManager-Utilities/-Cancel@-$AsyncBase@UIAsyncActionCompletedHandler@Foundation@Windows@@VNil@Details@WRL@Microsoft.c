/*
 * XREFs of ?Cancel@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x18001CDA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Cancel(
        volatile signed __int32 *a1)
{
  signed __int32 v1; // edx
  signed __int32 v3; // eax
  void (__fastcall *v4)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, volatile signed __int32 *, int); // rax
  GUID v6; // [rsp+40h] [rbp-18h] BYREF
  signed __int32 v7; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_DWORD *)a1 + 12);
  v7 = -2;
  _InterlockedCompareExchange(&v7, v1, -2);
  if ( !v7 )
  {
    v3 = _InterlockedCompareExchange(a1 + 12, 2, 0);
    if ( v3 == v7 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 152LL))(a1);
      if ( Microsoft::WRL::gCausality )
      {
        v4 = *(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, volatile signed __int32 *, int))(*(_QWORD *)Microsoft::WRL::gCausality + 64LL);
        v6 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
        v4(Microsoft::WRL::gCausality, 1LL, 2LL, &v6, a1, 3);
      }
    }
  }
  return 0LL;
}
