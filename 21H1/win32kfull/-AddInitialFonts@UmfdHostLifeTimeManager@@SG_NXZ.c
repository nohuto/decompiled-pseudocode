/*
 * XREFs of ?AddInitialFonts@UmfdHostLifeTimeManager@@SG_NXZ @ 0xD6894
 * Callers:
 *     _NtGdiAddInitialFonts@0 @ 0xD661E (_NtGdiAddInitialFonts@0.c)
 * Callees:
 *     ?bInitializeEUDCInternal@@YGHXZ @ 0xD6668 (-bInitializeEUDCInternal@@YGHXZ.c)
 *     _UserOnGreTextReady@0 @ 0xD74BA (_UserOnGreTextReady@0.c)
 *     _FinishStockFontInit@4 @ 0xDBAB4 (_FinishStockFontInit@4.c)
 */

char __stdcall UmfdHostLifeTimeManager::AddInitialFonts()
{
  NTSTATUS v0; // eax
  int HDEV; // esi
  int v2; // esi
  bool v3; // bl
  bool v5; // [esp+1h] [ebp-1h]

  if ( KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) )
    return 1;
  v0 = KeWaitForSingleObject(UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent, Executive, 1, 0, 0);
  if ( v0 < 0 || v0 == 192 )
  {
    KeSetEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, 0, 0);
    return 0;
  }
  else
  {
    v5 = bInitializeEUDCInternal() != 0;
    HDEV = UserGetHDEV();
    GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"hsem", _ghsemDynamicModeChange);
    v2 = *(_DWORD *)(HDEV + 1464);
    EtwTraceGreLockReleaseSemaphore(L"hsem", _ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
    FinishStockFontInit(v2);
    if ( !gppfeMapperDefault )
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356, 13, 0, 0, 0, 0, 0, 1);
    UmfdHostLifeTimeManager::s_SessionRasterizerInitialized = 1;
    KeSetEvent((PRKEVENT)UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, 0, 0);
    v3 = UserOnGreTextReady() != 0 && v5;
    KeSetEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, 0, 0);
    return v3;
  }
}
