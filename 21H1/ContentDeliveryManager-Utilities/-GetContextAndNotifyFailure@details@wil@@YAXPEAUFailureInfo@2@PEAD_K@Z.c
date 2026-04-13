/*
 * XREFs of ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180006ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180006760 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180006CE0 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x180006DC8 (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::GetContextAndNotifyFailure(wil::details *this, struct wil::FailureInfo *a2, char *a3)
{
  char v3; // bp
  __int64 v4; // rbx
  DWORD CurrentThreadId; // r10d
  __int64 i; // rbx
  struct wil::details::ThreadFailureCallbackHolder ***v10; // rbx
  struct wil::details::ThreadFailureCallbackHolder **v11; // rbx
  char v12; // al
  DWORD v13; // eax
  __int64 v14; // rdx
  wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax

  *(_BYTE *)a2 = 0;
  v3 = 0;
  v4 = wil::details::g_pThreadFailureCallbacks;
  if ( wil::details::g_pThreadFailureCallbacks )
  {
    CurrentThreadId = GetCurrentThreadId();
    for ( i = *(_QWORD *)(v4 + 8 * (CurrentThreadId % 0xAuLL)); i; i = *(_QWORD *)(i + 8) )
    {
      if ( *(_DWORD *)i == CurrentThreadId )
      {
        v10 = (struct wil::details::ThreadFailureCallbackHolder ***)(i + 16);
        goto LABEL_7;
      }
    }
  }
  v10 = 0LL;
LABEL_7:
  if ( v10 && *v10 )
  {
    *(_BYTE *)a2 = 0;
    if ( wil::details::ThreadFailureCallbackHolder::GetThreadContext(this, *v10, (char *)a2, (unsigned __int64)a3) )
      *((_QWORD *)this + 8) = a2;
    v11 = *v10;
    do
    {
      v12 = (**(__int64 (__fastcall ***)(struct wil::details::ThreadFailureCallbackHolder *, wil::details *))v11[1])(
              v11[1],
              this);
      v11 = (struct wil::details::ThreadFailureCallbackHolder **)v11[2];
      v3 |= v12;
    }
    while ( v11 );
  }
  if ( wil::details::g_pfnTelemetryCallback )
    wil::details::g_pfnTelemetryCallback(v3, this);
  v13 = GetCurrentThreadId();
  if ( `wil::SetLastError'::`2'::lastThread != v13 )
  {
    if ( _InterlockedIncrement(&`wil::SetLastError'::`5'::depth) < 4 )
    {
      `wil::SetLastError'::`2'::lastThread = v13;
      ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(0LL, v14);
      if ( ThreadLocalDataCache )
        wil::details_abi::ThreadLocalData::SetLastError(ThreadLocalDataCache, this);
      `wil::SetLastError'::`2'::lastThread = 0;
    }
    _InterlockedDecrement(&`wil::SetLastError'::`5'::depth);
  }
}
