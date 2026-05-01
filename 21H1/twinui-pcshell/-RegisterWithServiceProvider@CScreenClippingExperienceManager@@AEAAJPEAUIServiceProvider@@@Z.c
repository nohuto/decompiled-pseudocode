/*
 * XREFs of ?RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801C6EA8
 * Callers:
 *     ?RuntimeClassInitialize@CScreenClippingExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801C72A4 (-RuntimeClassInitialize@CScreenClippingExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000FAAC (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1801C3658 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801C5870 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RegisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801C68A4 (-RegisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?RegisterForPackageUpdatesWNF@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801C6A48 (-RegisterForPackageUpdatesWNF@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801C6C48 (-RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?RegisterForViewPresentationMediator@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801C6D44 (-RegisterForViewPresentationMediator@CScreenClippingExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::RegisterWithServiceProvider(
        CScreenClippingExperienceManager *this,
        struct IServiceProvider *a2)
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v5; // rcx
  int v6; // edi
  __int64 v7; // rdx
  int v9; // eax
  WINBOOL v10; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v11; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v11 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v10, (LPVOID *)&v11) && v10 )
  {
    v11 = qword_18059FFB8;
    qword_18059FFB8[0] = &ShellScreenClippingLogging::`vftable';
    qword_18059FFD0 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFB8, qword_18059FFD0, v4);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18059FFB8);
  }
  v5 = (_DWORD *)v11[1];
  if ( *v5 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v5, (unsigned __int8 *)dword_1804DD300, 0LL, 0LL, 2u, &v12);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 33, (__int64)a2);
  if ( !*((_QWORD *)this + 38) )
  {
    Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)this + 38);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((CreationThreadDispatcher **)this + 38);
    if ( v6 < 0 )
    {
      v7 = 533LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
  }
  v6 = CScreenClippingExperienceManager::RegisterForViewExperience(this);
  if ( v6 < 0 )
  {
    v7 = 536LL;
    goto LABEL_9;
  }
  v6 = CScreenClippingExperienceManager::RegisterForViewPresentationMediator(this);
  if ( v6 < 0 )
  {
    v7 = 537LL;
    goto LABEL_9;
  }
  v6 = CScreenClippingExperienceManager::RegisterForPackageUpdatesWNF((Concurrency::details::_RefCounter **)this);
  if ( v6 < 0 )
  {
    v7 = 538LL;
    goto LABEL_9;
  }
  v9 = CScreenClippingExperienceManager::RegisterForHotKeyHandling((wil::details **)this);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x21B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
  return 0LL;
}
