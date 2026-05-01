/*
 * XREFs of ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x1800054CC
 * Callers:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x1800056D0 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 * Callees:
 *     ?RecordReturn@details@wil@@YAHJ@Z @ 0x1800017C0 (-RecordReturn@details@wil@@YAHJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180002920 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x1800051FC (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180006B70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::LogFailure(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        wil *lpOutputString,
        __int64 a12,
        char *a13,
        __int64 a14,
        unsigned __int64 a15)
{
  int v16; // ebx
  int v17; // ecx
  signed __int32 v18; // ecx
  DWORD CurrentThreadId; // eax
  unsigned __int16 *v20; // rdx
  wil::details::in1diag3 *v21; // rcx
  const struct wil::FailureInfo *v22; // r9
  __int64 (*v23)(void); // rax
  __int64 v24; // rax
  BOOL IsDebuggerPresent; // ecx

  *(_WORD *)lpOutputString = 0;
  *a13 = 0;
  v16 = wil::details::RecordReturn((wil::details *)a8);
  *(_DWORD *)(a15 + 4) = v17;
  *(_DWORD *)a15 = 1;
  v18 = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  *(_QWORD *)(a15 + 16) = 0LL;
  *(_DWORD *)(a15 + 8) = v18;
  CurrentThreadId = GetCurrentThreadId();
  *(_DWORD *)(a15 + 56) = 14;
  *(_DWORD *)(a15 + 24) = CurrentThreadId;
  *(_QWORD *)(a15 + 48) = "onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp";
  *(_QWORD *)(a15 + 128) = a6;
  v23 = (__int64 (*)(void))wil::details::g_pfnGetModuleName;
  *(_DWORD *)(a15 + 60) = v16;
  *(_QWORD *)(a15 + 32) = 0LL;
  *(_QWORD *)(a15 + 40) = 0LL;
  *(_QWORD *)(a15 + 136) = a1;
  *(_QWORD *)(a15 + 64) = 0LL;
  *(_OWORD *)(a15 + 72) = 0LL;
  *(_OWORD *)(a15 + 88) = 0LL;
  *(_OWORD *)(a15 + 104) = 0LL;
  if ( v23 )
    v24 = v23();
  else
    v24 = 0LL;
  *(_QWORD *)(a15 + 120) = v24;
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure((struct wil::FailureInfo *)a15, a13, 0x400uLL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback((const struct wil::FailureInfo *)a15);
  if ( wil::details::g_pfnOriginateCallback )
    wil::details::g_pfnOriginateCallback((const struct wil::FailureInfo *)a15);
  if ( *(int *)(a15 + 4) >= 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(v21);
  if ( wil::g_fIsDebuggerPresent
    || (!wil::g_pfnIsDebuggerPresent
      ? (IsDebuggerPresent = ::IsDebuggerPresent())
      : (IsDebuggerPresent = wil::g_pfnIsDebuggerPresent()),
        IsDebuggerPresent) )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(a15, lpOutputString, 2048LL);
    if ( !*(_WORD *)lpOutputString )
      wil::GetFailureLogString(lpOutputString, v20, a15, v22);
    OutputDebugStringW((LPCWSTR)lpOutputString);
  }
  else if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
  {
    g_pfnResultLoggingCallback(a15, 0LL, 0LL);
  }
  if ( wil::g_fBreakOnFailure )
  {
    if ( wil::details::g_pfnDebugBreak )
      wil::details::g_pfnDebugBreak();
  }
}
