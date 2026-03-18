/*
 * XREFs of ?GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K@Z @ 0x1800F6E6C
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x1800F6E00 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x180177FD0 (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 */

void __fastcall wil::details::ThreadFailureCallbackHolder::GetContextAndNotifyFailure(
        unsigned __int64 a1,
        char *a2,
        unsigned __int64 a3)
{
  char v3; // bp
  __int64 v4; // rbx
  struct wil::FailureInfo *v7; // rsi
  DWORD CurrentThreadId; // r10d
  __int64 i; // rbx
  struct wil::details::ThreadFailureCallbackHolder *v10; // rbx
  char v11; // al

  *a2 = 0;
  v3 = 0;
  v4 = wil::details::g_pThreadFailureCallbacks;
  v7 = (struct wil::FailureInfo *)a1;
  if ( wil::details::g_pThreadFailureCallbacks )
  {
    CurrentThreadId = GetCurrentThreadId();
    a1 = 10 * (CurrentThreadId / 0xAuLL);
    for ( i = *(_QWORD *)(v4 + 8 * (CurrentThreadId % 0xAuLL)); i; i = *(_QWORD *)(i + 8) )
    {
      if ( *(_DWORD *)i == CurrentThreadId )
      {
        i += 16LL;
        break;
      }
    }
    if ( i && *(_QWORD *)i )
    {
      *a2 = 0;
      if ( wil::details::ThreadFailureCallbackHolder::GetThreadContext(
             v7,
             *(struct wil::details::ThreadFailureCallbackHolder **)i,
             a2,
             a3) )
      {
        *((_QWORD *)v7 + 9) = a2;
      }
      v10 = *(struct wil::details::ThreadFailureCallbackHolder **)i;
      do
      {
        v11 = (***((__int64 (__fastcall ****)(_QWORD, struct wil::FailureInfo *))v10 + 1))(*((_QWORD *)v10 + 1), v7);
        v10 = (struct wil::details::ThreadFailureCallbackHolder *)*((_QWORD *)v10 + 2);
        v3 |= v11;
      }
      while ( v10 );
    }
  }
  if ( wil::details::g_pfnTelemetryCallback )
  {
    LOBYTE(a1) = v3;
    wil::details::g_pfnTelemetryCallback(a1, v7);
  }
}
