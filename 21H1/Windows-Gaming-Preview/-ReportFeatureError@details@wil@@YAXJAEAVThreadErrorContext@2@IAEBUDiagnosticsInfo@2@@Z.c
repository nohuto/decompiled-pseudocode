/*
 * XREFs of ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1800112FC
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18000A1C0 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x1800038C8 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180003BA8 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?GetLastError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@J@Z @ 0x180010FF0 (-GetLastError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@J@Z.c)
 *     ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x180011108 (-RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     memset_0 @ 0x1800454FC (memset_0.c)
 */

void __fastcall wil::details::ReportFeatureError(
        unsigned __int64 this,
        wil::ThreadErrorContext *a2,
        struct wil::ThreadErrorContext *a3,
        const struct wil::FailureInfo *a4)
{
  int v6; // esi
  char LastError; // al
  DWORD CurrentThreadId; // eax
  __int64 v9; // rdx
  wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  unsigned int v11[12]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v12; // [rsp+50h] [rbp-68h]
  int v13; // [rsp+58h] [rbp-60h]
  __int64 v14; // [rsp+A0h] [rbp-18h]

  v6 = this;
  if ( *(_QWORD *)a2 )
    LastError = wil::ThreadErrorContext::GetLastError(a2, (struct wil::FailureInfo *)v11, this);
  else
    LastError = 0;
  if ( !LastError )
  {
    memset_0(v11, 0, 0x90uLL);
    v13 = *((unsigned __int16 *)a4 + 12);
    v12 = *((_QWORD *)a4 + 1);
    v14 = *(_QWORD *)a4;
    v11[1] = v6;
    CurrentThreadId = GetCurrentThreadId();
    this = (unsigned int)`wil::SetLastError'::`2'::lastThread;
    if ( `wil::SetLastError'::`2'::lastThread != CurrentThreadId )
    {
      this = (unsigned int)_InterlockedIncrement(&`wil::SetLastError'::`5'::depth);
      if ( (int)this < 4 )
      {
        `wil::SetLastError'::`2'::lastThread = CurrentThreadId;
        ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(0LL, v9);
        if ( ThreadLocalDataCache )
          wil::details_abi::ThreadLocalData::SetLastError(ThreadLocalDataCache, (const struct wil::FailureInfo *)v11);
        `wil::SetLastError'::`2'::lastThread = 0;
      }
      _InterlockedDecrement(&`wil::SetLastError'::`5'::depth);
    }
    if ( *(_QWORD *)a2 )
      wil::ThreadErrorContext::GetLastError(a2, (struct wil::FailureInfo *)v11, v6);
  }
  wil::details::RecordFeatureError((wil::details *)this, (__int64)v11, a4, (const struct DiagnosticsInfo *)a4);
}
