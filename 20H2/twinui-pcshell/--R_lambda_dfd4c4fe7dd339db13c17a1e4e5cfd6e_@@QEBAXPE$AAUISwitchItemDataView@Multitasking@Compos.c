/*
 * XREFs of ??R_lambda_dfd4c4fe7dd339db13c17a1e4e5cfd6e_@@QEBAXPE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@Z @ 0x1802FD400
 * Callers:
 *     ?Invoke@?$__abi_FunctorCapture@V_lambda_dfd4c4fe7dd339db13c17a1e4e5cfd6e_@@XPE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@3456@@Details@Platform@@UEAAXPE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@5678@@Z @ 0x180303640 (-Invoke@-$__abi_FunctorCapture@V_lambda_dfd4c4fe7dd339db13c17a1e4e5cfd6e_@@XPE$AAUISwitchItemDat.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EBB30 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EBCEC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1802ED508 (-GetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$ComPtr@UIApplicationView@@@WRL@Micro.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x1802EE60C (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall _lambda_dfd4c4fe7dd339db13c17a1e4e5cfd6e_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rbx
  int (__fastcall *v9)(__int64, __int64 *); // rdi
  int v10; // eax
  int v11; // eax
  __int64 result; // rax
  const char *v13; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v15 = a2;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a3 + 64LL))(a3, 0LL);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  try
  {
    v6 = Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(a3);
    v15 = v6;
    v7 = __abi_winrt_ptr_ctor(v6);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    AppViewDataSourceHelpers::GetApplicationViewForItem((struct _GUID *)&v17, v7);
    v8 = v17;
    if ( !v17 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        170LL,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\MonitorFrame.h",
        (const char *)0x8000FFFFLL);
    v16 = 0LL;
    v9 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 80LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    if ( v9(v8, &v16) >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)*a1 + 96LL))(*a1, v16, &v15);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          178LL,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\MonitorFrame.h",
          (const char *)(unsigned int)v10);
      if ( !(_DWORD)v15 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 64LL))(a3, 1LL);
        if ( v11 < 0 )
          __abi_WinRTraiseException(v11);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    if ( v7 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0xB9,
             (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\MonitorFrame.h",
             v13);
  }
  return result;
}
