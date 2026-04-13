/*
 * XREFs of ?Start@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x18003ED10
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800187F8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenRotationOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Start(
        __int64 a1)
{
  signed __int32 v1; // edx
  signed __int32 v3; // eax
  int v4; // ebp
  __int64 v5; // rbx
  void (__fastcall *v6)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, PVOID, __int64); // rdi
  HSTRING_HEADER *v7; // rax
  signed __int32 v9; // [rsp+40h] [rbp-68h] BYREF
  const WCHAR *v10; // [rsp+48h] [rbp-60h] BYREF
  GUID v11; // [rsp+50h] [rbp-58h] BYREF
  HSTRING_HEADER v12; // [rsp+60h] [rbp-48h] BYREF

  v1 = *(_DWORD *)(a1 + 48);
  v9 = -2;
  _InterlockedCompareExchange(&v9, v1, -2);
  if ( v9 == -1 && (v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 0, -1), v3 == v9) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
    if ( v4 >= 0
      && InitOnceExecuteOnce(
           &Microsoft::WRL::gCausalityInitOnce,
           (PINIT_ONCE_FN)Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ProcessCreativeEventOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::InitCausality,
           0LL,
           0LL)
      && Microsoft::WRL::gCausality )
    {
      v5 = *(unsigned int *)(a1 + 56);
      v6 = *(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, PVOID, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 48LL);
      v10 = L"ContentManagement.ContentManagementService.EnableLockScreenRotationAsync";
      v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v12, &v10);
      v11 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      v6(Microsoft::WRL::gCausality, 0LL, 2LL, &v11, a1, v7[1].Reserved.Reserved1, v5);
    }
  }
  else
  {
    v4 = -2147483635;
    RoOriginateError(2147483661LL, 0LL);
  }
  return (unsigned int)v4;
}
