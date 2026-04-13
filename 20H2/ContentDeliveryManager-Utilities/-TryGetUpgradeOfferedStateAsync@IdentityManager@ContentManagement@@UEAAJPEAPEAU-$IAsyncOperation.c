/*
 * XREFs of ?TryGetUpgradeOfferedStateAsync@IdentityManager@ContentManagement@@UEAAJPEAPEAU?$IAsyncOperation@W4SVUpgradeOfferedState@ContentManagement@@@Foundation@Windows@@@Z @ 0x1800116C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$AsyncOperation@U?$IAsyncOperation@W4SVUpgradeOfferedState@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@W4SVUpgradeOfferedState@ContentManagement@@@23@V?$CBasicResult@W4SVUpgradeOfferedState@ContentManagement@@$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x180022B9C (--0-$AsyncOperation@U-$IAsyncOperation@W4SVUpgradeOfferedState@ContentManagement@@@Foundation@Wi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CD574 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800CD7C8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::IdentityManager::TryGetUpgradeOfferedStateAsync(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  int v6; // edi
  void *v7; // rax
  __int64 v8; // rbx
  _DWORD v10[8]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a2 = 0LL;
  v3 = a1 - 48;
  v10[0] = 3;
  v10[1] = 130;
  v10[2] = 0;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v4[1] = v3;
    *v4 = &Windows::Internal::COperationLambdaVar<0,_lambda_760a63f25e541b58840fe190f8bb149e_,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeOfferedState,0>,>::`vftable';
    *((_DWORD *)v4 + 4) = 0;
    `eh vector constructor iterator'(
      v4 + 3,
      8uLL,
      1uLL,
      (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
      (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
    *((_DWORD *)v5 + 4) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  *a2 = 0LL;
  if ( !v5 )
    goto LABEL_5;
  v7 = operator new(0x148uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  if ( v7 )
    v8 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<enum ContentManagement::SVUpgradeOfferedState>,Windows::Foundation::IAsyncOperationCompletedHandler<enum ContentManagement::SVUpgradeOfferedState>,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeOfferedState,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncOperation<enum ContentManagement::SVUpgradeOfferedState>,Windows::Foundation::IAsyncOperationCompletedHandler<enum ContentManagement::SVUpgradeOfferedState>,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeOfferedState,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
           v7,
           v10,
           L"Windows.Foundation.IAsyncOperation`1<ContentManagement.SVUpgradeOfferedState>",
           0LL);
  if ( !v8 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v5)(v5, 1LL);
LABEL_5:
    v6 = -2147024882;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  *(_QWORD *)(v8 + 256) = v5;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 104LL))(v8 + 8);
  if ( v6 >= 0 )
  {
    *a2 = v8 + 176;
    v8 = 0LL;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 16LL))(v8 + 8);
  if ( v6 < 0 )
    goto LABEL_15;
  return 0LL;
}
