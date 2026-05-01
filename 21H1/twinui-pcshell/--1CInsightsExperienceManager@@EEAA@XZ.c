/*
 * XREFs of ??1CInsightsExperienceManager@@EEAA@XZ @ 0x1801CBDDC
 * Callers:
 *     ??_GCInsightsExperienceManager@@EEAAPEAXI@Z @ 0x1801CBFA0 (--_GCInsightsExperienceManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@UIApplicationFrameEventHandler@@UIScaleChangeSink@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801BEE48 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualTouchpadExperie.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x180450274 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 */

void __fastcall CInsightsExperienceManager::~CInsightsExperienceManager(CInsightsExperienceManager *this)
{
  void (*v2)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v3; // rcx
  HWND v4; // rcx
  __int64 v5; // rcx
  volatile int *v6; // rdx
  WINBOOL v7; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v8; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-38h] BYREF

  *(_QWORD *)this = &CInsightsExperienceManager::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Foundation::IClosable,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>'};
  *((_QWORD *)this + 1) = &CInsightsExperienceManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &CInsightsExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>'};
  *((_QWORD *)this + 3) = &CInsightsExperienceManager::`vftable'{for `IImmersiveMonitorNotification'};
  *((_QWORD *)this + 4) = &CInsightsExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Experience::IInsightsExperienceManager>'};
  *((_QWORD *)this + 7) = &CInsightsExperienceManager::`vftable'{for `SingleViewShellExperienceEventHandler'};
  v8 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v7, (LPVOID *)&v8) && v7 )
  {
    v8 = qword_18059FFB8;
    qword_18059FFB8[0] = &ShellScreenClippingLogging::`vftable';
    qword_18059FFD0 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFB8, qword_18059FFD0, v2);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18059FFB8);
  }
  v3 = (_DWORD *)v8[1];
  if ( *v3 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v3, (unsigned __int8 *)dword_1804DDFF8, 0LL, 0LL, 2u, &v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 41);
  v4 = (HWND)*((_QWORD *)this + 40);
  if ( v4 )
    DestroyWindow(v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 38);
  v5 = *((_QWORD *)this + 35);
  if ( v5 )
  {
    *((_QWORD *)this + 35) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 34);
  CSingleViewShellExperience::~CSingleViewShellExperience((CInsightsExperienceManager *)((char *)this + 64));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>(
    (__int64)this,
    v6);
}
