/*
 * XREFs of Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&SetConstantAsyncCasualityName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_a408cc100a5b103155a70fabf7a2049b___ @ 0x18010ED84
 * Callers:
 *     ?SetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAUIPropertyValue@Foundation@6@PEAPEAUIAsyncAction@96@@Z @ 0x180118540 (-SetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D280 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_a408cc100a5b103155a70fabf7a2049b__Windows::Internal::CNoResult_::COperationLambdaVar_0__lambda_a408cc100a5b103155a70fabf7a2049b__Windows::Internal::CNoResult___lambda_a408cc100a5b103155a70fabf7a2049b___ @ 0x18010DB5C (Windows--Internal--COperationLambdaVar_0__lambda_a408cc100a5b103155a70fabf7a2049b__Windows--Inte.c)
 *     ??$MakeAsyncHelper@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@UINilDelegate@Internal@3@VCNoResult@63@VComTaskPoolHandler@63@U?$AsyncCausalityOptions@$1?SetConstantAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJPEAPEAUIAsyncAction@Foundation@1@$$QEAVComTaskPoolHandler@01@QEBGW4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x18010F158 (--$MakeAsyncHelper@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@_ea_18010F158.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions__SetConstantAsyncCasualityName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_a408cc100a5b103155a70fabf7a2049b___(
        int a1,
        int a2,
        __int64 a3,
        _OWORD *a4)
{
  void *v7; // rcx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rax

  v7 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = 0LL;
  if ( v7 )
    v10 = Windows::Internal::COperationLambdaVar_0__lambda_a408cc100a5b103155a70fabf7a2049b__Windows::Internal::CNoResult_::COperationLambdaVar_0__lambda_a408cc100a5b103155a70fabf7a2049b__Windows::Internal::CNoResult___lambda_a408cc100a5b103155a70fabf7a2049b___(
            (__int64)v7,
            a4);
  return Windows::Internal::MakeAsyncHelper<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const SetConstantAsyncCasualityName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
           a2,
           a1,
           v8,
           v9,
           v10);
}
