/*
 * XREFs of ?FireCompletion@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x18001F1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x1800076AC (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        signed __int32 *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  void (__fastcall *v4)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, signed __int32 *, signed __int32); // r10
  int (__fastcall *v5)(signed __int32 *, GUID *, __int64 *); // rsi
  __int64 v6; // rax
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  GUID v11; // [rsp+50h] [rbp-28h] BYREF
  GUID v12; // [rsp+60h] [rbp-18h] BYREF
  signed __int32 v13; // [rsp+A0h] [rbp+28h] BYREF
  signed __int32 v14; // [rsp+A8h] [rbp+30h] BYREF
  unsigned int v15; // [rsp+B0h] [rbp+38h] BYREF
  __int64 v16; // [rsp+B8h] [rbp+40h] BYREF

  v2 = 0;
  v13 = -2;
  _InterlockedCompareExchange(&v13, a1[12], -2);
  if ( !v13 )
    _InterlockedCompareExchange(a1 + 12, 1, 0);
  if ( *((_QWORD *)a1 + 3) && _InterlockedIncrement(a1 + 4) == 1 )
  {
    (*(void (__fastcall **)(signed __int32 *))(*(_QWORD *)a1 + 8LL))(a1);
    v3 = 0LL;
    v16 = 0LL;
    if ( Microsoft::WRL::gCausality )
    {
      _InterlockedCompareExchange(&v14, a1[12], v14);
      v4 = *(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, signed __int32 *, signed __int32))(*(_QWORD *)Microsoft::WRL::gCausality + 56LL);
      v11 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      v4(Microsoft::WRL::gCausality, 0LL, 2LL, &v11, a1, v14);
      v3 = v16;
    }
    v5 = **(int (__fastcall ***)(signed __int32 *, GUID *, __int64 *))a1;
    if ( v3 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    if ( v5(a1, &GUID_3e1fe603_f897_5263_b328_0806426b8a79, &v16) >= 0 )
    {
      v15 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v15, a1[12], -2);
      if ( Microsoft::WRL::gCausality )
      {
        v6 = *(_QWORD *)Microsoft::WRL::gCausality;
        v12 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
        (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, signed __int32 *, _DWORD))(v6 + 72))(
          Microsoft::WRL::gCausality,
          0LL,
          2LL,
          &v12,
          a1,
          0);
      }
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)a1 + 3) + 24LL))(
             *((_QWORD *)a1 + 3),
             v16,
             v15);
      v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
             v7,
             *((_QWORD *)a1 + 3));
      v8 = *((_QWORD *)a1 + 3);
      if ( v8 )
      {
        *((_QWORD *)a1 + 3) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      if ( Microsoft::WRL::gCausality )
        (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
          Microsoft::WRL::gCausality,
          0LL,
          2LL);
    }
    v9 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    (*(void (__fastcall **)(signed __int32 *))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
