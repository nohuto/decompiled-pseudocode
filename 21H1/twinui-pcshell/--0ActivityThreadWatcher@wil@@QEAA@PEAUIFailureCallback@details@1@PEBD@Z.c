/*
 * XREFs of ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@PEBD@Z @ 0x18020C62C
 * Callers:
 *     ?WatchCurrentThread@TaskFlowDataEngineTelemetry@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x180213E7C (-WatchCurrentThread@TaskFlowDataEngineTelemetry@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x18025F1D4 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 *     ?WatchCurrentThread@TouchKeyboardExperienceTelemetryLogger@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x180344E18 (-WatchCurrentThread@TouchKeyboardExperienceTelemetryLogger@@SA-AVActivityThreadWatcher@wil@@PEBD.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x180025474 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 */

wil::ActivityThreadWatcher *__fastcall wil::ActivityThreadWatcher::ActivityThreadWatcher(
        wil::ActivityThreadWatcher *this,
        struct wil::details::IFailureCallback *a2,
        const char *a3)
{
  *((_QWORD *)this + 1) = a3;
  *((_BYTE *)this + 24) = 0;
  *(_DWORD *)this = 0;
  *((_QWORD *)this + 2) = 0LL;
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::ActivityThreadWatcher *)((char *)this + 32),
    a2,
    this,
    1);
  return this;
}
