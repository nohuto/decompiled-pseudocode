/*
 * XREFs of ?GetOnComplete@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@_N@Foundation@3@@Z @ 0x180082890
 * Callers:
 *     ?get_Completed@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@_N@Foundation@3@@Z @ 0x180082D90 (-get_Completed@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationComp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetOnComplete(
        __int64 a1,
        _QWORD *a2)
{
  signed __int32 v2; // r8d
  unsigned int v5; // edi
  signed __int32 v6; // edx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF
  signed __int32 v12; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = *(_DWORD *)(a1 + 48);
  v12 = -2;
  _InterlockedCompareExchange(&v12, v2, -2);
  if ( v12 == 4 )
  {
    v5 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 128);
    v5 = 0;
    if ( v6 > 0 )
    {
      do
      {
        if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 128), v6 + 1, v6) )
          break;
        v6 = *(_DWORD *)(a1 + 128);
      }
      while ( v6 > 0 );
      if ( v6 > 0 )
      {
        v7 = *(_QWORD *)(a1 + 112);
        *a2 = 0LL;
        if ( v7 )
        {
          v8 = *(_QWORD *)(a1 + 112);
          if ( v8 )
            v5 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v8 + 24LL))(
                   v8,
                   &GUID_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a,
                   a2);
        }
        else
        {
          v5 = -2147024809;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v11, 0);
          v9 = *(_QWORD *)(a1 + 112);
          *(_QWORD *)(a1 + 112) = 0LL;
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
      }
    }
  }
  return v5;
}
