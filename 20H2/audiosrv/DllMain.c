/*
 * XREFs of DllMain @ 0x18006D5AC
 * Callers:
 *     dllmain_dispatch @ 0x180069A90 (dllmain_dispatch.c)
 * Callees:
 *     ?AeWmiInitialize@@YAHPEBU_GUID@@@Z @ 0x180054110 (-AeWmiInitialize@@YAHPEBU_GUID@@@Z.c)
 *     ?AERTMemoryInitialize@@YAJ_K00@Z @ 0x180054208 (-AERTMemoryInitialize@@YAJ_K00@Z.c)
 *     ?Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x180054398 (-Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z @ 0x18005442C (-SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z.c)
 *     ?AeWmiShutdown@@YAXXZ @ 0x180104A34 (-AeWmiShutdown@@YAXXZ.c)
 *     WppCleanupUm @ 0x180115334 (WppCleanupUm.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x180132074 (-AERTMemoryShutdown@@YAJXZ.c)
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
      dword_18019E3DC = 1;
      *(_QWORD *)&g_SysFxUtilTlp = v11;
      v3 = !ATL::CAtlBaseModule::m_bInitFailed;
      dword_18019E3D8 = v3;
      if ( ATL::CAtlBaseModule::m_bInitFailed )
        dword_18019E3DC &= v3;
    }
    else
    {
      return 0;
    }
  }
  else if ( !fdwReason && !lpvReserved )
  {
    dword_18019E3DC = 0;
    dword_18019E3D8 = 0;
    AERTMemoryShutdown();
    AeWmiShutdown();
    *(_QWORD *)&g_SysFxUtilTlp = 0LL;
    WppCleanupUm();
  }
  return v3;
}
