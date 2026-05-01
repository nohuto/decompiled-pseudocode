/*
 * XREFs of ?SizeViewOnCreation@CInsightsExperienceManager@@AEAAJXZ @ 0x1801CE16C
 * Callers:
 *     ?OnViewCreated@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801CD590 (-OnViewCreated@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18001AB3C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     _anonymous_namespace_::ComputeInsightsPanelRect @ 0x1801CC194 (_anonymous_namespace_--ComputeInsightsPanelRect.c)
 *     ?SetViewSizeAndPosition@CInsightsExperienceManager@@AEAAJUtagRECT@@@Z @ 0x1801CE01C (-SetViewSizeAndPosition@CInsightsExperienceManager@@AEAAJUtagRECT@@@Z.c)
 */

__int64 __fastcall CInsightsExperienceManager::SizeViewOnCreation(CInsightsExperienceManager *this)
{
  void (*v2)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v3; // rcx
  HMONITOR v4; // rbx
  HMONITOR v5; // r8
  int v6; // esi
  HMONITOR v7; // r8
  int v8; // eax
  int v9; // r14d
  int v10; // ebx
  __int64 v11; // rdx
  LPVOID Context[2]; // [rsp+30h] [rbp-29h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-19h] BYREF
  struct tagMONITORINFO mi; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, Context)
    && fPending )
  {
    Context[0] = qword_18059FFB8;
    qword_18059FFB8[0] = &ShellScreenClippingLogging::`vftable';
    qword_18059FFD0 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFB8, qword_18059FFD0, v2);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18059FFB8);
  }
  v3 = (_DWORD *)*((_QWORD *)Context[0] + 1);
  if ( *v3 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v3, (unsigned __int8 *)dword_1804DDCD4, 0LL, 0LL, 2u, &v16);
  Context[0] = 0LL;
  v4 = MonitorFromPoint(0LL, 1u);
  v6 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x148, (__int64)v4, v5);
  v8 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x22C, (__int64)v4, v7);
  mi.cbSize = 40;
  v9 = v8;
  memset(&mi.rcMonitor, 0, 36);
  if ( !GetMonitorInfoW(v4, &mi) )
  {
    v10 = -2147418113;
    v11 = 411LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  *(RECT *)Context = mi.rcWork;
  *(_OWORD *)Context = *(_OWORD *)anonymous_namespace_::ComputeInsightsPanelRect(&v16, v6, v9, (int *)Context);
  v10 = CInsightsExperienceManager::SetViewSizeAndPosition(this, (struct tagRECT *)Context);
  if ( v10 < 0 )
  {
    v11 = 413LL;
    goto LABEL_8;
  }
  return 0LL;
}
