/*
 * XREFs of DllMain @ 0x18006E06C
 * Callers:
 *     dllmain_dispatch @ 0x18006A3F0 (dllmain_dispatch.c)
 * Callees:
 *     ?AeWmiInitialize@@YAHPEBU_GUID@@@Z @ 0x1800548B0 (-AeWmiInitialize@@YAHPEBU_GUID@@@Z.c)
 *     ?AERTMemoryInitialize@@YAJ_K00@Z @ 0x1800549A8 (-AERTMemoryInitialize@@YAJ_K00@Z.c)
 *     ?Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x180054B38 (-Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z @ 0x180054BCC (-SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z.c)
 *     ?AeWmiShutdown@@YAXXZ @ 0x1801056C4 (-AeWmiShutdown@@YAXXZ.c)
 *     WppCleanupUm @ 0x180115FC4 (WppCleanupUm.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x180132D04 (-AERTMemoryShutdown@@YAJXZ.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  BOOL v3; // edi
  const struct _GUID *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v7; // r8
  void (*v8)(bool, const struct wil::FailureInfo *); // rdx
  wil *v9; // rcx
  __int64 v10; // rcx
  const struct _tlgProvider_t *v11; // rax

  v3 = 1;
  if ( fdwReason == 1 )
  {
    DisableThreadLibraryCalls(hinstDLL);
    hHeap = GetProcessHeap();
    AeWmiInitialize(v4);
    if ( (int)AERTMemoryInitialize(v6, v5, v7) >= 0 )
    {
      wil::SetResultTelemetryFallback(v9, v8);
      v11 = AudioSrvTelemetryProvider::Provider(v10);
      dword_18019F40C = 1;
      *(_QWORD *)&g_SysFxUtilTlp = v11;
      v3 = !ATL::CAtlBaseModule::m_bInitFailed;
      dword_18019F408 = v3;
      if ( ATL::CAtlBaseModule::m_bInitFailed )
        dword_18019F40C &= v3;
    }
    else
    {
      return 0;
    }
  }
  else if ( !fdwReason && !lpvReserved )
  {
    dword_18019F40C = 0;
    dword_18019F408 = 0;
    AERTMemoryShutdown();
    AeWmiShutdown();
    *(_QWORD *)&g_SysFxUtilTlp = 0LL;
    WppCleanupUm();
  }
  return v3;
}
