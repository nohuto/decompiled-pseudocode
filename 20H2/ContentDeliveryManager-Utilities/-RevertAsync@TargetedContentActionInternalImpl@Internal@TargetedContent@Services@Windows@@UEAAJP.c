/*
 * XREFs of ?RevertAsync@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x1800537C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?RevertOperationName@?A0xa4ce9b83@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x180057840 (--0-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler_ea_180057840.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CD574 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800CD7C8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::RevertAsync(
        Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *this,
        struct Windows::Foundation::IAsyncAction **a2)
{
  char *v2; // rdi
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  void *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // ebx
  struct Windows::Foundation::IAsyncAction *v10; // rax
  _DWORD v12[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  v2 = (char *)this - 48;
  v12[2] = 0;
  v12[0] = 3;
  v12[1] = 130;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v4[4] = 0;
    *((_QWORD *)v4 + 1) = v2;
    *(_QWORD *)v4 = off_1800E07E0;
    `eh vector constructor iterator'(
      v4 + 6,
      8uLL,
      1uLL,
      (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
      (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
    v5[4] = 0;
  }
  else
  {
    v5 = 0LL;
  }
  *a2 = 0LL;
  if ( !v5 )
    goto LABEL_14;
  v6 = operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6
    || (v7 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::RevertOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::RevertOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
               v6,
               v12,
               L"Windows.Foundation.IAsyncAction",
               1LL),
        (v8 = v7) == 0) )
  {
    (**(void (__fastcall ***)(_DWORD *, __int64))v5)(v5, 1LL);
LABEL_14:
    v9 = -2147024882;
    goto LABEL_15;
  }
  *(_QWORD *)(v7 + 256) = v5;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v7 + 8) + 104LL))(v7 + 8);
  if ( v9 >= 0 )
  {
    v10 = (struct Windows::Foundation::IAsyncAction *)(v8 + 176);
    v8 = 0LL;
    *a2 = v10;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 16LL))(v8 + 8);
  if ( v9 >= 0 )
    return 0LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x85,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
    (const char *)(unsigned int)v9);
  return (unsigned int)v9;
}
