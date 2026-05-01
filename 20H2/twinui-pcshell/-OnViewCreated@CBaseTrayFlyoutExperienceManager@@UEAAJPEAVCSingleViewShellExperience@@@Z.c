/*
 * XREFs of ?OnViewCreated@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A23E0
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800189F8 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180045FA4 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800784BC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CMarshaledInterface@@QEAA@AEBV0@@Z @ 0x18007DAEC (--0CMarshaledInterface@@QEAA@AEBV0@@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180083800 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800873B0 (-Provider@SingleViewExperienceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@VShellFeedsExperienceManagerImpl@@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@6783@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@01@PEAVShellFeedsExperienceManagerImpl@@P83@EAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@5678@@Z@Z @ 0x180099A18 (--$Callback@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windo.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_f6fd16dc6abf918068135dd93a107128___ @ 0x18009FBA8 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal--Shell--ViewM.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$?0U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@CMarshaledInterface@@QEAA@PEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@W4MARSHAL_KIND@@@Z @ 0x1801DA504 (--$-0U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEA.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnViewCreated(
        CBaseTrayFlyoutExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  const struct _tlgProvider_t *v4; // rax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v5; // rdx
  void (__fastcall ***v6)(_QWORD, ExperienceManagerUtils **); // rcx
  __int64 v7; // rcx
  int v8; // eax
  HWND v9; // rax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  __int128 v14; // [rsp+20h] [rbp-20h] BYREF
  __int128 v15; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v17; // [rsp+60h] [rbp+20h] BYREF
  __int64 v18; // [rsp+68h] [rbp+28h] BYREF
  __int64 v19; // [rsp+70h] [rbp+30h] BYREF
  __int64 v20; // [rsp+78h] [rbp+38h] BYREF

  v4 = SingleViewExperienceLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v4,
      byte_180505E2A,
      0LL);
  v6 = (void (__fastcall ***)(_QWORD, ExperienceManagerUtils **))*((_QWORD *)this + 42);
  if ( v6 )
    (**v6)(v6, a2);
  if ( *((_BYTE *)this + 417) )
  {
    v7 = *((_QWORD *)this + 2);
    if ( v7 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v7 + 24LL))(
             v7,
             ((unsigned __int64)this - 24) & -(__int64)(this != (CBaseTrayFlyoutExperienceManager *)48),
             (char *)this + 420);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x80,
          (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
          (const char *)(unsigned int)v8);
    }
  }
  v9 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v5);
  if ( !v9 || SetPropW(v9, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
  {
    v17 = 0LL;
    v11 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))a2 + 3,
            (__int64)&v17);
    v10 = v11;
    if ( v11 >= 0 )
    {
      *(_QWORD *)&v14 = CBaseTrayFlyoutExperienceManager::OnClientWindowReadyForPresentationChanged;
      DWORD2(v14) = 0;
      v15 = v14;
      Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,ShellFeedsExperienceManagerImpl,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>(
        &v14,
        (__int64)this - 48,
        &v15);
      CMarshaledInterface::CMarshaledInterface(&v20, v14);
      CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)&v18, (const struct CMarshaledInterface *)&v20);
      Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_f6fd16dc6abf918068135dd93a107128___(
        &v19,
        &v18);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v18);
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v17 + 80LL))(v17, v19, (char *)this + 432);
      v10 = v12;
      if ( v12 >= 0 )
        v10 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAB,
          (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
          (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v20);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x90,
        (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
        (const char *)(unsigned int)v11);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  }
  else
  {
    v10 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8C,
      (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
      (const char *)0x80004005LL);
  }
  return v10;
}
