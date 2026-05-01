/*
 * XREFs of ?RequestCloseAsync@WindowWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x1802DED00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18003C7E4 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180076EB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VAppRequestOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppRequestOperation@@@Z @ 0x1802CB8D8 (--$MakeAndInitialize@VAppRequestOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppRequestOpe.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802D0104 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop@@@.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_02ce1f8ff8204bd7e6b75a42803bdefb___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus___lambda_02ce1f8ff8204bd7e6b75a42803bdefb___ @ 0x1802DBF14 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1802DBF14.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8d0fb77c452b9bcaee92e3ab82296a11___ @ 0x1802DC6C4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_8d0fb77c452b9bcaee92e3ab82296a11.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowWrapperBase::RequestCloseAsync(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v5; // eax
  AppRequestOperation *v6; // rbx
  __int64 *v7; // rax
  volatile int *v8; // rdx
  __int64 v9; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v11; // ecx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  const char *v15; // r9
  __int64 result; // rax
  __int64 v17; // [rsp+20h] [rbp-68h] BYREF
  PSRWLOCK SRWLock; // [rsp+28h] [rbp-60h] BYREF
  __int128 v19; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+40h] [rbp-48h]
  char v21; // [rsp+48h] [rbp-40h]
  __int64 v22; // [rsp+50h] [rbp-38h] BYREF
  __int64 v23; // [rsp+58h] [rbp-30h] BYREF
  AppRequestOperation *v24; // [rsp+60h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  AppRequestOperation *v26; // [rsp+98h] [rbp+10h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+20h] BYREF

  *a2 = 0LL;
  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_CloseRequested_Desktop>::GetImpl'::`2'::impl,
      1u,
      a3);
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 280) + 200LL))(*(_QWORD *)(a1 + 280), &SRWLock);
    v26 = 0LL;
    v5 = Microsoft::WRL::Details::MakeAndInitialize<AppRequestOperation,AppRequestOperation,>(&v26);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        980LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v5);
    if ( *(_BYTE *)(a1 + 573) )
    {
      _InterlockedExchange((volatile __int32 *)v26 + 42, 1);
      v6 = v26;
      (*(void (__fastcall **)(char *))(*((_QWORD *)v26 + 2) + 128LL))((char *)v26 + 16);
    }
    else
    {
      v20 = a1 - 8;
      v21 = 1;
      *(_BYTE *)(a1 + 573) = 1;
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v17,
        a1 - 8);
      v22 = a1 - 8;
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v23,
        v17);
      v6 = v26;
      v24 = v26;
      if ( v26 )
        (*(void (__fastcall **)(AppRequestOperation *))(*(_QWORD *)v26 + 8LL))(v26);
      v7 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::___Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_02ce1f8ff8204bd7e6b75a42803bdefb___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus___lambda_02ce1f8ff8204bd7e6b75a42803bdefb___(
             &v28,
             &v22);
      v27 = *v7;
      *v7 = 0LL;
      v9 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(
          v9,
          v8);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
      *(_QWORD *)&v19 = a1 - 8;
      *((_QWORD *)&v19 + 1) = &v27;
      CurrentThreadId = GetCurrentThreadId();
      v12 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8d0fb77c452b9bcaee92e3ab82296a11___(
              v11,
              CurrentThreadId,
              &v19);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1034LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v12);
      v21 = 0;
      v13 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
    }
    if ( v6 )
    {
      v14 = (**(__int64 (__fastcall ***)(AppRequestOperation *, GUID *, _QWORD *))v6)(
              v6,
              &GUID_3843809c_1f21_5d40_a51f_f6963ca8d259,
              a2);
      if ( v14 >= 0 )
      {
LABEL_19:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v26);
        if ( SRWLock )
          ReleaseSRWLockExclusive(SRWLock);
        return 0LL;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5495LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v14);
    }
    *a2 = 0LL;
    goto LABEL_19;
  }
  catch ( ... )
  {
    LODWORD(v26) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x414,
                     (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                     v15);
    return (unsigned int)v26;
  }
  return result;
}
