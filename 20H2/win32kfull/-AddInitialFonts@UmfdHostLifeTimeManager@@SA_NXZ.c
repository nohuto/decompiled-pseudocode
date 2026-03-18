/*
 * XREFs of ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C012AFF0
 * Callers:
 *     NtGdiAddInitialFonts @ 0x1C012AF90 (NtGdiAddInitialFonts.c)
 * Callees:
 *     ?bInitializeEUDCInternal@@YAHXZ @ 0x1C00221F8 (-bInitializeEUDCInternal@@YAHXZ.c)
 *     UserOnGreTextReady @ 0x1C0022DC8 (UserOnGreTextReady.c)
 *     FinishStockFontInit @ 0x1C00234B0 (FinishStockFontInit.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008513C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00C3338 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 */

char UmfdHostLifeTimeManager::AddInitialFonts(void)
{
  NTSTATUS v0; // eax
  bool v1; // di
  __int64 HDEV; // rbx
  bool v3; // bl
  char v5; // [rsp+60h] [rbp+8h] BYREF

  if ( KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) )
    return 1;
  v0 = KeWaitForSingleObject(UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent, Executive, 1, 0, 0LL);
  if ( v0 < 0 || v0 == 192 )
  {
    KeSetEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, 0, 0);
    return 0;
  }
  else
  {
    v1 = (unsigned int)bInitializeEUDCInternal() != 0;
    HDEV = UserGetHDEV();
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v5, ghsemDynamicModeChange);
    LODWORD(HDEV) = *(_DWORD *)(HDEV + 2180);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v5);
    FinishStockFontInit(HDEV);
    if ( !gppfeMapperDefault )
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 13LL);
    UmfdHostLifeTimeManager::s_SessionRasterizerInitialized = 1;
    KeSetEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, 0, 0);
    v3 = UserOnGreTextReady() && v1;
    KeSetEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, 0, 0);
    return v3;
  }
}
