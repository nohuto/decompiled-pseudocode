/*
 * XREFs of ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C000CBFC
 * Callers:
 *     GreTextInitialized @ 0x1C000C248 (GreTextInitialized.c)
 *     DereferenceW32Thread @ 0x1C000C7D0 (DereferenceW32Thread.c)
 *     W32pProcessCallout @ 0x1C000C880 (W32pProcessCallout.c)
 *     W32pThreadCallout @ 0x1C000CB00 (W32pThreadCallout.c)
 *     FinishStockFontInit @ 0x1C000DD20 (FinishStockFontInit.c)
 *     NtGdiExtEscape @ 0x1C0015550 (NtGdiExtEscape.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C007DD90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreGetTextFaceW @ 0x1C009F270 (GreGetTextFaceW.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C00A1D70 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 * Callees:
 *     <none>
 */

bool UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost(void)
{
  bool v0; // bl

  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  v0 = UmfdHostLifeTimeManager::s_UmfdHostProcess == (PVOID)PsGetCurrentProcess();
  GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  KeLeaveCriticalRegion();
  return v0;
}
