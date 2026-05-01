/*
 * XREFs of ??1CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180020488
 * Callers:
 *     ?OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18002F280 (-OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collecti.c)
 *     ?_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180030A84 (-_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Found.c)
 *     _SearchAppDesktopExperienceView::OnViewEventQueued_::_1_::dtor$0 @ 0x1800DC8EE (_SearchAppDesktopExperienceView--OnViewEventQueued_--_1_--dtor$0.c)
 *     _SearchAppExperienceManager::_OnViewEvent_::_1_::dtor$0 @ 0x1800DC9F1 (_SearchAppExperienceManager--_OnViewEvent_--_1_--dtor$0.c)
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801996AC (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 *     _CortanaSharedExperienceManager::_OnViewEvent_::_1_::dtor$0 @ 0x180199AB8 (_CortanaSharedExperienceManager--_OnViewEvent_--_1_--dtor$0.c)
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801EBAF8 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 *     _CortanaDesktopExperienceView::OnViewEventQueued_::_1_::dtor$0 @ 0x1801EC068 (_CortanaDesktopExperienceView--OnViewEventQueued_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180020500 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x1800727A0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18008479C (-reset@-$shared_object@V-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1801217A4 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::~CortanaExperienceManager_OnEventQueued(
        CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *this)
{
  void *v2; // rbx
  HANDLE ProcessHeap; // rax
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::details::shared_object<wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((char *)this + 304);
  wil::details::shared_buffer::reset((CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)((char *)this + 280));
  if ( *((_BYTE *)this + 120) )
  {
    v2 = (void *)*((_QWORD *)this + 14);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v2);
    *((_BYTE *)this + 120) = 0;
  }
  *((_QWORD *)this + 14) = 0LL;
  if ( *((_DWORD *)this + 14) == 1 )
  {
    Context = 0LL;
    *((_DWORD *)this + 14) = 2;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_18059FFE0;
      qword_18059FFE0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18059FFF8 = (struct _tlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFE0, qword_18059FFF8, v4);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_18059FFE0);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), (char *)this + 64);
  }
  *((_DWORD *)this + 14) = 3;
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)((char *)this + 8));
}
