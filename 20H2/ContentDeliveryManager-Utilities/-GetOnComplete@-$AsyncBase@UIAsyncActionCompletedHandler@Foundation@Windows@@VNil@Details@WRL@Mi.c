/*
 * XREFs of ?GetOnComplete@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenOverlayOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAPEAUIAsyncActionCompletedHandler@Foundation@Windows@@@Z @ 0x18001D3B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenOverlayOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetOnComplete(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v2; // ebx
  signed __int32 v5; // r8d
  __int64 v6; // rcx
  signed __int32 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0LL;
  v5 = *(_DWORD *)(a1 + 48);
  v8 = -2;
  _InterlockedCompareExchange(&v8, v5, -2);
  if ( v8 == 4 )
  {
    v2 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v6 = *(_QWORD *)(a1 + 24);
    }
    *a2 = v6;
  }
  return v2;
}
