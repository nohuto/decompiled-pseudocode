/*
 * XREFs of ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@VCHSTRINGResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180021590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<HSTRING__ *>,Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Windows::Internal::CHSTRINGResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetResults(
        __int64 a1,
        HSTRING *a2)
{
  signed __int32 v3; // r8d
  signed __int32 v5; // ecx
  int v6; // ebx
  signed __int32 v8; // [rsp+40h] [rbp+20h] BYREF
  signed __int32 v9; // [rsp+48h] [rbp+28h] BYREF
  signed __int32 v10; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  v3 = *(_DWORD *)(a1 - 120);
  v9 = -2;
  _InterlockedCompareExchange(&v9, v3, -2);
  if ( v9 == 3 )
  {
    v5 = *(_DWORD *)(a1 - 120);
    v10 = -2;
    _InterlockedCompareExchange(&v10, v5, -2);
    if ( v10 == 3 )
    {
      _InterlockedCompareExchange(&v8, *(_DWORD *)(a1 - 116), v8);
      if ( *(_QWORD *)(a1 - 128) )
        SetRestrictedErrorInfo();
      v6 = v8;
      goto LABEL_9;
    }
  }
  else if ( v9 != 1 )
  {
    v6 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
    return (unsigned int)v6;
  }
  v6 = 0;
LABEL_9:
  if ( v6 >= 0 )
    return (unsigned int)WindowsDuplicateString(*(HSTRING *)(a1 + 120), a2);
  return (unsigned int)v6;
}
