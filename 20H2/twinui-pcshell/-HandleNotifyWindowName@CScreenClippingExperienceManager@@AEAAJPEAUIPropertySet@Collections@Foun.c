/*
 * XREFs of ?HandleNotifyWindowName@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801E83A8
 * Callers:
 *     ?OnEventQueued@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801E8BD0 (-OnEventQueued@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRIN.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800189F8 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x180023DB0 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002753C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AB5C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800784BC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA @ 0x1800F3260 (--_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CScreenClippingExperienceManager::HandleNotifyWindowName(
        CScreenClippingExperienceManager *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v5; // rcx
  int v6; // edi
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v8; // rcx
  unsigned int v10; // r8d
  HSTRING Reserved1; // rdx
  int PropVal; // ebx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v16; // rdx
  ExperienceManagerUtils *v17; // rcx
  HWND v18; // rbx
  void (*v19)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v20; // rcx
  const WCHAR *StringRawBuffer; // rax
  WINBOOL fPending[2]; // [rsp+30h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  HSTRING string; // [rsp+40h] [rbp-40h]
  struct Windows::Foundation::Collections::IPropertySet *v25; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER v26; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    Context = &qword_1805CC2E8;
    qword_1805CC2E8 = &ShellScreenClippingLogging::`vftable';
    qword_1805CC300 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CC2E8, qword_1805CC300, v4);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &qword_1805CC2E8);
  }
  v5 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v5 > 5u )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v5,
      (unsigned __int8 *)dword_180503EB8,
      0LL,
      0LL,
      2u,
      (PEVENT_DATA_DESCRIPTOR)&v26);
  v6 = -2147024809;
  if ( a2 )
  {
    v25 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v25);
    string = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                           &v26,
                           (const WCHAR **)off_1804CF218,
                           v10)[1].Reserved.Reserved1;
    string = 0LL;
    *(_QWORD *)fPending = 0LL;
    PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v25,
                Reserved1,
                (struct Windows::Foundation::IPropertyValue **)fPending);
    if ( PropVal >= 0 )
    {
      v13 =  Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::`vcall'{152,{flat}}(*(__int64 *)fPending);
      PropVal = v13;
      if ( v13 >= 0 )
      {
        v14 = *(_QWORD *)fPending;
        if ( *(_QWORD *)fPending )
        {
          *(_QWORD *)fPending = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        PropVal = 0;
LABEL_20:
        if ( PropVal < 0 )
        {
          v15 = 690LL;
LABEL_29:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v15,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
            (const char *)(unsigned int)PropVal);
LABEL_37:
          WindowsDeleteString(string);
          string = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
          return (unsigned int)PropVal;
        }
        if ( string && WindowsGetStringLen(string) )
        {
          v17 = (ExperienceManagerUtils *)*((_QWORD *)this + 10);
          if ( !v17 )
          {
            PropVal = -2147418113;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2C7,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
              (const char *)0x8000FFFFLL);
LABEL_28:
            v15 = 695LL;
            goto LABEL_29;
          }
          v18 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(v17, v16);
          if ( !v18 )
          {
            PropVal = -2147467259;
            goto LABEL_28;
          }
          Context = 0LL;
          if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
            && fPending[0] )
          {
            Context = &qword_1805CC2E8;
            qword_1805CC2E8 = &ShellScreenClippingLogging::`vftable';
            qword_1805CC300 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CC2E8, qword_1805CC300, v19);
            InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &qword_1805CC2E8);
          }
          v20 = (_DWORD *)*((_QWORD *)Context + 1);
          if ( *v20 > 5u )
            tlgWriteTransfer_EventWriteTransfer(
              (__int64)v20,
              (unsigned __int8 *)dword_180503F6D,
              0LL,
              0LL,
              2u,
              (PEVENT_DATA_DESCRIPTOR)&v26);
          StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
          SetWindowTextW(v18, StringRawBuffer);
          v6 = 0;
        }
        PropVal = v6;
        goto LABEL_37;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
        (const char *)(unsigned int)v13);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)fPending);
    goto LABEL_20;
  }
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    Context = &qword_1805CC2E8;
    qword_1805CC2E8 = &ShellScreenClippingLogging::`vftable';
    qword_1805CC300 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CC2E8, qword_1805CC300, v7);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &qword_1805CC2E8);
  }
  v8 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v8 > 5u )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v8,
      (unsigned __int8 *)dword_180503F08,
      0LL,
      0LL,
      2u,
      (PEVENT_DATA_DESCRIPTOR)&v26);
  return 2147942487LL;
}
