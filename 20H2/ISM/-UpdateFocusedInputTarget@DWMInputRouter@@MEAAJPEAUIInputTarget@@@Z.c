/*
 * XREFs of ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x1800187B0
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180019DB0 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUWindowId@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180003BDC (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManageme.c)
 *     ?GetWindowForViewId@ViewHelper@@SA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@K@Z @ 0x180003D0C (-GetWindowForViewId@ViewHelper@@SA-AUWindow@WindowManagement@ApplicationModel@Internal@Windows@w.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B29C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001B654 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180029640 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180037234 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18003BFDC (atexit.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1800F61D8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall DWMInputRouter::UpdateFocusedInputTarget(DWMInputRouter *this, struct IInputTarget *a2)
{
  int v4; // r15d
  __int64 v5; // rbx
  struct IInputTarget *v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // esi
  __int64 v16; // rsi
  LPVOID v17; // rcx
  __int64 v19; // r12
  __int64 (__fastcall *v20)(struct IInputTarget *, GUID *, LPVOID *); // rsi
  __int64 (__fastcall *v21)(struct IInputTarget *, GUID *, __int64 *); // rsi
  int v22; // eax
  int v23; // eax
  int v24; // esi
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int (__fastcall *v28)(struct IInputTarget *, GUID *, WINBOOL *); // rsi
  int v29; // eax
  int v30; // eax
  int v31; // eax
  __int64 v32; // rax
  int v33; // r8d
  int v34; // r9d
  int v35; // [rsp+20h] [rbp-89h]
  unsigned int v36; // [rsp+40h] [rbp-69h] BYREF
  WINBOOL fPending[2]; // [rsp+48h] [rbp-61h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-59h] BYREF
  __int64 v39; // [rsp+58h] [rbp-51h] BYREF
  __int64 v40; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v41[2]; // [rsp+68h] [rbp-41h] BYREF
  __int128 v42; // [rsp+78h] [rbp-31h] BYREF
  __int128 v43; // [rsp+88h] [rbp-21h]
  __int64 v44; // [rsp+98h] [rbp-11h]
  _BYTE v45[40]; // [rsp+A0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v4 = 0;
  v5 = *((_QWORD *)this + 34);
  v41[1] = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = (struct IInputTarget *)*((_QWORD *)this + 34);
  if ( v6 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
      v6 = (struct IInputTarget *)*((_QWORD *)this + 34);
    }
    *((_QWORD *)this + 34) = a2;
    if ( v6 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
    __fastfail(7u);
  if ( ((1LL << gdwDeviceFamily) & 0x3DDA1) != 0 )
  {
    v19 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    if ( a2 )
    {
      Context = 0LL;
      v20 = **(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, LPVOID *))a2;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&Context);
      v4 = v20(a2, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &Context);
      if ( v4 >= 0 )
      {
        v39 = 0LL;
        v21 = **(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2;
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v39);
        v22 = v21(a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v39);
        if ( v22 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x776,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v22,
            v35);
          __debugbreak();
        }
        v36 = 0;
        v23 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v39 + 48LL))(v39, &v36);
        if ( v23 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x779,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v23,
            v35);
          __debugbreak();
        }
        v24 = v36;
        if ( v36 )
        {
          ViewHierarchy = ISMStatics::GetViewHierarchy();
          ViewHelper::GetWindowForViewId(&v40, ViewHierarchy, v24);
          v26 = v40;
          if ( v40 )
          {
            v19 = *(int *)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::Id(
                            &v40,
                            (__int64)fPending);
            v27 = (*(__int64 (__fastcall **)(LPVOID, _BYTE *))(*(_QWORD *)Context + 72LL))(Context, v45);
            v42 = *(_OWORD *)v27;
            v43 = *(_OWORD *)(v27 + 16);
            v44 = *(_QWORD *)(v27 + 32);
            v26 = v40;
          }
          if ( v26 )
            winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v40);
        }
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v39);
      }
      else
      {
        v4 = 0;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&Context);
    }
    MITSetForegroundRoutingInfo(v19, &v42);
  }
  if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
    __fastfail(7u);
  if ( ((1LL << gdwDeviceFamily) & 0xA) != 0 )
  {
    LODWORD(v39) = 0;
    v36 = 0;
    if ( a2 )
    {
      *(_QWORD *)fPending = 0LL;
      v7 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, WINBOOL *))a2)(
             a2,
             &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
             fPending);
      if ( v7 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x7AC,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v7,
          v35);
        __debugbreak();
      }
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)fPending + 72LL))(*(_QWORD *)fPending, &v39);
      if ( v8 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x7AD,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v8,
          v35);
        __debugbreak();
      }
      v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)fPending + 80LL))(*(_QWORD *)fPending, &v36);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x7AE,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v9,
          v35);
LABEL_58:
        Context = qword_180208AD0;
        qword_180208AD0[0] = &RawInputProvidersContinuousTracing::`vftable';
        qword_180208AE8 = (struct _tlgProvider_t *)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180208AD0, qword_180208AE8, 0LL);
        InitOnceComplete(&`InputETW::Instance'::`2'::wrapper, 0, qword_180208AD0);
        goto LABEL_21;
      }
      v10 = *(_QWORD *)fPending;
      if ( *(_QWORD *)fPending )
      {
        *(_QWORD *)fPending = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
    MITSetInputDelegationMode((unsigned int)v39, v36);
  }
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`InputETW::Instance'::`2'::wrapper, 0, fPending, &Context) && fPending[0] )
    goto LABEL_58;
LABEL_21:
  v11 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v11 > 5u && (unsigned __int8)tlgKeywordOn(v11, 1LL) )
  {
    LODWORD(v40) = 0;
    v36 = 0;
    LODWORD(v39) = 0;
    if ( a2 )
    {
      *(_QWORD *)fPending = 0LL;
      v28 = **(int (__fastcall ***)(struct IInputTarget *, GUID *, WINBOOL *))a2;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)fPending);
      if ( v28(a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, fPending) >= 0 )
      {
        v29 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)fPending + 32LL))(*(_QWORD *)fPending, &v40);
        if ( v29 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x92,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inc\\InputETW.tlh",
            (const char *)(unsigned int)v29,
            v35);
          __debugbreak();
        }
        v30 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)fPending + 40LL))(
                *(_QWORD *)fPending,
                &v36);
        if ( v30 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x93,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inc\\InputETW.tlh",
            (const char *)(unsigned int)v30,
            v35);
          __debugbreak();
        }
        v31 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)fPending + 48LL))(*(_QWORD *)fPending, &v39);
        if ( v31 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x94,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inc\\InputETW.tlh",
            (const char *)(unsigned int)v31,
            v35);
      }
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)fPending);
    }
    v32 = wil::details::static_lazy<InputETW>::get(
            v12,
            _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    if ( **(_DWORD **)(v32 + 8) > 5u && (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v32 + 8), 1LL) )
    {
      Context = (LPVOID)(unsigned int)v39;
      *(_QWORD *)fPending = v36;
      v41[0] = (unsigned int)v40;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v33,
        (unsigned int)&unk_1801CE396,
        v33,
        v34,
        (__int64)v41,
        (__int64)fPending,
        (__int64)&Context);
    }
  }
  v13 = *((_QWORD *)this + 35);
  if ( v13
    && (v14 = (*(__int64 (__fastcall **)(__int64, __int64, struct IInputTarget *))(*(_QWORD *)v13 + 24LL))(v13, v5, a2),
        v15 = v14,
        v14 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v14,
      v35);
  }
  else
  {
    v16 = *((_QWORD *)this + 42);
    LODWORD(v40) = 0;
    v41[0] = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
    Context = 0LL;
    if ( a2
      && (**(int (__fastcall ***)(struct IInputTarget *, GUID *, LPVOID *))a2)(
           a2,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &Context) >= 0 )
    {
      (*(void (__fastcall **)(LPVOID, __int64 *))(*(_QWORD *)Context + 48LL))(Context, &v40);
    }
    *(_DWORD *)(v16 + 72) = v40;
    v17 = Context;
    if ( Context )
    {
      Context = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v17 + 16LL))(v17);
    }
    if ( a2 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 16LL))(a2);
    v15 = v4;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v15;
}
