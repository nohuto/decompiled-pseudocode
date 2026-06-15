/*
 * XREFs of ?FireCompletionErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x14004D034
 * Callers:
 *     ?FireCompletion@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x14004CD20 (-FireCompletion@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@M.c)
 *     ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x14004CE20 (-FireCompletion@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Device.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001A8BC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireCompletionErrorPropagationPolicyFilter(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // edi
  int v4; // ebx
  int MatchingRestrictedErrorInfo; // esi
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0;
  v4 = a1;
  if ( (_DWORD)a1 == -2147417848
    || (_DWORD)a1 == -2147023174
    || (_DWORD)a1 == -1996357631
    || (_DWORD)a1 == -2147418105
    || (_DWORD)a1 == -2147418094 )
  {
    RoTransformError(a1, 0LL, 0LL);
    v4 = 0;
  }
  if ( (unsigned int)IsErrorPropagationEnabled() )
  {
    if ( v4 < 0 )
    {
      v7 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
      MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo((unsigned int)v4, &v7);
      if ( MatchingRestrictedErrorInfo >= 0 )
        MatchingRestrictedErrorInfo = RoReportFailedDelegate(a2, v7);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
      if ( MatchingRestrictedErrorInfo < 0 )
        return (unsigned int)v4;
      return v2;
    }
  }
  else if ( v4 < 0 )
  {
    RoTransformError((unsigned int)v4, 0LL, 0LL);
    return v2;
  }
  return (unsigned int)v4;
}
