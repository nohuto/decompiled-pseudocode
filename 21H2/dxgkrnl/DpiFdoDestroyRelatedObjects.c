/*
 * XREFs of DpiFdoDestroyRelatedObjects @ 0x1C0389018
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1C038B430 (DpiFdoStopAdapter.c)
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C01B40A0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C01B445C (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C01F2B3C (-DmmResetModeState@@YAJQEAXK@Z.c)
 *     DpiPdoRemovePdoObjects @ 0x1C0397E38 (DpiPdoRemovePdoObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C039834C (DpiGdoDestroyGdiObjects.c)
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
    DmmResetModeState(*(PERESOURCE **)(v2 + 3896), -1);
    DpiReleaseCoreSyncAccessSafe(a1, 1);
  }
  return DpiPdoRemovePdoObjects(a1, 0LL, a2);
}
