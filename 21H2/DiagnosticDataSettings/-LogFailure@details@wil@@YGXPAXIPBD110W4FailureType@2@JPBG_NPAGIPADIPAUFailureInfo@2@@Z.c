/*
 * XREFs of ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBG_NPAGIPADIPAUFailureInfo@2@@Z @ 0x10003AA3
 * Callers:
 *     ?ReportFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBGW4ReportFailureOptions@12@@Z @ 0x10003D78 (-ReportFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBGW4ReportFailureOptions@12@@Z.c)
 * Callees:
 *     ?RecordFailFast@details@wil@@YGHJ@Z @ 0x10002070 (-RecordFailFast@details@wil@@YGHJ@Z.c)
 *     ?RecordException@details@wil@@YGHJ@Z @ 0x100037EE (-RecordException@details@wil@@YGHJ@Z.c)
 *     ?RecordReturn@details@wil@@YGHJ@Z @ 0x10003801 (-RecordReturn@details@wil@@YGHJ@Z.c)
 *     ?RecordLog@details@wil@@YGHJ@Z @ 0x10003814 (-RecordLog@details@wil@@YGHJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YGXXZ @ 0x10003827 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YGXXZ.c)
 *     ?GetFailureLogString@wil@@YGJPAGIABUFailureInfo@1@@Z @ 0x10003898 (-GetFailureLogString@wil@@YGJPAGIABUFailureInfo@1@@Z.c)
 *     ?ReportFailure_Hr@details@wil@@YGXPAXIPBD110W4FailureType@2@J@Z @ 0x10003E4A (-ReportFailure_Hr@details@wil@@YGXPAXIPBD110W4FailureType@2@J@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x10004890 (@_guard_check_icall_nop@4.c)
 */

void __fastcall wil::details::LogFailure(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        wil::details *a8,
        _WORD *a9,
        int a10,
        WCHAR *lpOutputString,
        int a12,
        _BYTE *a13,
        int a14,
        wil *a15)
{
  int v15; // edi
  int v16; // eax
  _WORD *v17; // eax
  const char *ModuleName; // eax
  void (__stdcall *v19)(struct wil::FailureInfo *, char *, unsigned int); // edi
  BOOL IsDebuggerPresent; // eax
  const unsigned __int16 *v21; // edi
  wil::details::in1diag3 *v22; // [esp+0h] [ebp-18h]
  unsigned int v23; // [esp+4h] [ebp-14h]
  const struct wil::FailureInfo *v24; // [esp+8h] [ebp-10h]
  int v27; // [esp+14h] [ebp-4h]

  v15 = (int)a8;
  *lpOutputString = 0;
  *a13 = 0;
  v27 = 0;
  switch ( a7 )
  {
    case 0:
      v16 = wil::details::RecordException(a8);
      goto LABEL_11;
    case 1:
      v16 = wil::details::RecordReturn(a8);
      goto LABEL_11;
    case 2:
      if ( (int)a8 >= 0 )
      {
        v15 = -2147024228;
        wil::details::ReportFailure_Hr(a3, a4, a5, a6, 2, -2147024228);
      }
      v16 = wil::details::RecordLog((void *)v15);
      goto LABEL_11;
    case 3:
      v16 = wil::details::RecordFailFast(a8, (int)v22);
LABEL_11:
      v27 = v16;
      break;
  }
  *(_DWORD *)a15 = a7;
  *((_DWORD *)a15 + 1) = v15;
  *((_DWORD *)a15 + 2) = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  v17 = a9;
  if ( !a9 || !*a9 )
    v17 = 0;
  *((_DWORD *)a15 + 3) = v17;
  *((_DWORD *)a15 + 4) = GetCurrentThreadId();
  *((_DWORD *)a15 + 7) = a3;
  *((_DWORD *)a15 + 8) = a2;
  *((_DWORD *)a15 + 9) = v27;
  *((_DWORD *)a15 + 5) = a5;
  *((_DWORD *)a15 + 6) = a4;
  *((_DWORD *)a15 + 18) = a6;
  *((_DWORD *)a15 + 19) = a1;
  ModuleName = 0;
  *((_DWORD *)a15 + 10) = 0;
  memset((char *)a15 + 44, 0, 0x18u);
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName();
  v19 = wil::details::g_pfnGetContextAndNotifyFailure;
  *((_DWORD *)a15 + 17) = ModuleName;
  if ( v19 )
    ((void (__thiscall *)(void (__stdcall *)(struct wil::FailureInfo *, char *, unsigned int), wil *, _BYTE *, int))v19)(
      v19,
      a15,
      a13,
      1024);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(a15);
  if ( wil::details::g_pfnOriginateCallback )
    wil::details::g_pfnOriginateCallback(a15);
  if ( *((int *)a15 + 1) >= 0 )
  {
    if ( a7 != 3 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v22);
    *((_DWORD *)a15 + 1) = -2147418113;
  }
  if ( wil::g_fIsDebuggerPresent
    || (!wil::g_pfnIsDebuggerPresent
      ? (IsDebuggerPresent = ::IsDebuggerPresent())
      : (IsDebuggerPresent = wil::g_pfnIsDebuggerPresent()),
        IsDebuggerPresent) )
  {
    v21 = (const unsigned __int16 *)g_pfnResultLoggingCallback;
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(g_pfnResultLoggingCallback, a15, lpOutputString, 2048);
    if ( !*lpOutputString )
      wil::GetFailureLogString(2048, lpOutputString, v21, a15, (unsigned __int16 *)v22, v23, v24);
    OutputDebugStringW(lpOutputString);
  }
  else if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
  {
    g_pfnResultLoggingCallback(g_pfnResultLoggingCallback, a15, 0, 0);
  }
  if ( wil::g_fBreakOnFailure )
  {
    if ( wil::details::g_pfnDebugBreak )
      wil::details::g_pfnDebugBreak();
  }
}
