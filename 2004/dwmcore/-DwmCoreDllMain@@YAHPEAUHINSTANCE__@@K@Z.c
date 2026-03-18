/*
 * XREFs of ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x180030F80
 * Callers:
 *     DllMain @ 0x1800E4D04 (DllMain.c)
 * Callees:
 *     ?FreeCurrent@CThreadContext@@SAXXZ @ 0x1800310C8 (-FreeCurrent@CThreadContext@@SAXXZ.c)
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x1800310FC (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     ?Startup@@YAJXZ @ 0x180031354 (-Startup@@YAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McGenEventUnregister_EventUnregister @ 0x1800E2380 (McGenEventUnregister_EventUnregister.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18015004C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

__int64 __fastcall DwmCoreDllMain(HINSTANCE a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // edx
  unsigned int v5; // ecx
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // ebx
  REGHANDLE v9; // rcx
  REGHANDLE v10; // rcx
  REGHANDLE v11; // rcx
  REGHANDLE v12; // rcx
  const struct wil::FailureInfo *v13; // rdx
  _BYTE v14[152]; // [rsp+30h] [rbp-98h] BYREF

  v2 = 1;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( v3 == 2 )
        CThreadContext::FreeCurrent();
    }
    else
    {
      if ( wil::details::g_pfnLoggingCallback
        && (char *)wil::details::g_pfnLoggingCallback != (char *)lambda_b5f577a36749d08817efa9d9ab2e0790_::_lambda_invoker_cdecl_ )
      {
        memset_0(v14, 0, 0x90uLL);
        wil::details::WilFailFast((wil::details *)v14, v13);
      }
      wil::details::g_pfnLoggingCallback = (void (*)(const struct wil::FailureInfo *))lambda_b5f577a36749d08817efa9d9ab2e0790_::_lambda_invoker_cdecl_;
      CThreadContext::s_dwTlsIndex = TlsAlloc();
      if ( CThreadContext::s_dwTlsIndex == -1 )
      {
        v8 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x49u, 0LL);
      }
      else
      {
        v6 = Startup();
        v8 = v6;
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x4Bu, 0LL);
        else
          RegisterDwmGuidWithEtw();
      }
      return v8 >= 0;
    }
  }
  else
  {
    McGenEventUnregister_EventUnregister(a1);
    v9 = RegHandle;
    RegHandle = 0LL;
    dword_180342EF0 = 0;
    EventUnregister(v9);
    v10 = qword_180342ED8;
    qword_180342ED8 = 0LL;
    dword_180342EB8 = 0;
    EventUnregister(v10);
    v11 = qword_180342EA0;
    qword_180342EA0 = 0LL;
    dword_180342E80 = 0;
    EventUnregister(v11);
    v12 = qword_180342E68;
    qword_180342E68 = 0LL;
    dword_180342E48 = 0;
    EventUnregister(v12);
    if ( CThreadContext::s_dwTlsIndex != -1 )
    {
      CThreadContext::FreeCurrent();
      TlsFree(CThreadContext::s_dwTlsIndex);
      CThreadContext::s_dwTlsIndex = -1;
    }
  }
  return v2;
}
