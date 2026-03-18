/*
 * XREFs of ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C008D09C
 * Callers:
 *     FinishStockFontInit @ 0x1C00234B0 (FinishStockFontInit.c)
 *     GreTextInitialized @ 0x1C0024D48 (GreTextInitialized.c)
 *     GreGetTextFaceW @ 0x1C005AF50 (GreGetTextFaceW.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C008CB60 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     DereferenceW32Thread @ 0x1C008CC70 (DereferenceW32Thread.c)
 *     W32pProcessCallout @ 0x1C008CD20 (W32pProcessCallout.c)
 *     W32pThreadCallout @ 0x1C008CFA0 (W32pThreadCallout.c)
 *     NtGdiExtEscape @ 0x1C008D480 (NtGdiExtEscape.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00A9250 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     <none>
 */

bool UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  bool v3; // bl

  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  v3 = UmfdHostLifeTimeManager::s_UmfdHostProcess == (PVOID)PsGetCurrentProcess(v1, v0, v2);
  GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  KeLeaveCriticalRegion();
  return v3;
}
