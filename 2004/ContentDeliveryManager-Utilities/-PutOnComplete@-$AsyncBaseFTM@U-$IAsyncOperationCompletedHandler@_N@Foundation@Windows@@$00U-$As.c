/*
 * XREFs of ?PutOnComplete@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@_N@Foundation@3@@Z @ 0x180082980
 * Callers:
 *     ?put_Completed@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@_N@Foundation@3@@Z @ 0x180082DB0 (-put_Completed@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationComp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::PutOnComplete(
        __int64 a1,
        __int64 a2)
{
  signed __int32 v2; // r8d
  int AgileReference; // edi
  __int64 *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  void (__fastcall *v10)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, _DWORD); // rax
  signed __int32 v11; // ecx
  signed __int32 v13[8]; // [rsp+0h] [rbp-60h] BYREF
  __int64 v14; // [rsp+20h] [rbp-40h]
  int v15; // [rsp+28h] [rbp-38h]
  __int64 v16; // [rsp+40h] [rbp-20h]
  GUID v17; // [rsp+50h] [rbp-10h] BYREF
  signed __int32 v18; // [rsp+90h] [rbp+30h] BYREF
  signed __int32 v19; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+48h]

  v2 = *(_DWORD *)(a1 + 48);
  v18 = -2;
  _InterlockedCompareExchange(&v18, v2, -2);
  if ( v18 == 4 )
  {
    AgileReference = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 20)) == 1 )
  {
    v6 = (__int64 *)(a1 + 112);
    v7 = 0LL;
    v8 = *v6;
    *v6 = 0LL;
    v20 = v8;
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v7 = *v6;
    }
    AgileReference = 0;
    if ( a2 )
    {
      if ( v7 )
      {
        *v6 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      AgileReference = RoGetAgileReference(0LL, &GUID_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a, a2, v6);
    }
    else
    {
      *v6 = 0LL;
      v16 = v7;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( AgileReference >= 0 )
    {
      if ( Microsoft::WRL::gCausality )
      {
        v9 = *(_QWORD *)Microsoft::WRL::gCausality;
        v15 = 0;
        v14 = a1;
        v10 = *(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, _DWORD))(v9 + 64);
        v17 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
        v10(Microsoft::WRL::gCausality, 2LL, 2LL, &v17, a1, 0);
      }
      if ( a2 )
      {
        *(_QWORD *)(a1 + 120) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 128));
      }
      _InterlockedOr(v13, 0);
      v11 = *(_DWORD *)(a1 + 48);
      v19 = -2;
      _InterlockedCompareExchange(&v19, v11, -2);
      if ( (unsigned int)(v19 - 1) <= 3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
    }
  }
  else
  {
    return (unsigned int)-2147483624;
  }
  return (unsigned int)AgileReference;
}
