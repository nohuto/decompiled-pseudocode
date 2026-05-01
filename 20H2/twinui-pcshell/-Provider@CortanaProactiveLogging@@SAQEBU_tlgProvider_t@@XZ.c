/*
 * XREFs of ?Provider@CortanaProactiveLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1801BA2F8
 * Callers:
 *     ?CortanaStoreAppExperienceManager_WNFReentrancyGuard@CortanaProactiveTelemetry@@SAXXZ @ 0x180098B74 (-CortanaStoreAppExperienceManager_WNFReentrancyGuard@CortanaProactiveTelemetry@@SAXXZ.c)
 *     ??$SearchApp_Dismiss@AEAY0L@$$CBG@CortanaProactiveTelemetry@@SAXAEAY0L@$$CBG@Z @ 0x180098E84 (--$SearchApp_Dismiss@AEAY0L@$$CBG@CortanaProactiveTelemetry@@SAXAEAY0L@$$CBG@Z.c)
 *     ??$Cortana_AppInstalled@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXAEAE@Z @ 0x1800A421C (--$Cortana_AppInstalled@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXAE.c)
 *     ?HookKeyboard@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1800A49DC (-HookKeyboard@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?LowLevelKeyboardHookProc@SearchAppDesktopExperienceView@@CA_JH_K_J@Z @ 0x1800A4A90 (-LowLevelKeyboardHookProc@SearchAppDesktopExperienceView@@CA_JH_K_J@Z.c)
 *     ?UnhookKeyboard@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1800A4E44 (-UnhookKeyboard@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D254 (atexit.c)
 */

const struct _tlgProvider_t *CortanaProactiveLogging::Provider(void)
{
  void (*v0)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805CC310;
    qword_1805CC310[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CC328 = (struct _tlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC310, qword_1805CC328, v0);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1805CC310);
  }
  return (const struct _tlgProvider_t *)*((_QWORD *)Context + 1);
}
