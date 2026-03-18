/*
 * XREFs of DpiFdoDestroyRelatedObjects @ 0x1C02C42F4
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0171310 (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1C02C7554 (DpiFdoStopAdapter.c)
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C01271F0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C012746C (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C0164B3C (-DmmResetModeState@@YAJQEAXK@Z.c)
 *     DpiPdoRemovePdoObjects @ 0x1C02D5018 (DpiPdoRemovePdoObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C02D5500 (DpiGdoDestroyGdiObjects.c)
 */

__int64 __fastcall DpiFdoDestroyRelatedObjects(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a1 + 64);
  DpiGdoDestroyGdiObjects(a1);
  KeWaitForSingleObject((PVOID)(v2 + 3584), Executive, 0, 0, 0LL);
  KeReleaseMutex((PRKMUTEX)(v2 + 3584), 0);
  if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 1) >= 0 )
  {
    DmmResetModeState(*(PERESOURCE **)(v2 + 3896), 0xFFFFFFFFLL);
    DpiReleaseCoreSyncAccessSafe(a1, 1);
  }
  return DpiPdoRemovePdoObjects(a1, 0LL, a2);
}
