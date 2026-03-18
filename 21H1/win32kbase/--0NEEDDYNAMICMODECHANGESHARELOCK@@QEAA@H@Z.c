/*
 * XREFs of ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C0019388
 * Callers:
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C006D360 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     GreGetDeviceCaps @ 0x1C00AA530 (GreGetDeviceCaps.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C2860 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C014C170 (NtGdiGetDeviceCapsAll.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0016870 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

NEEDDYNAMICMODECHANGESHARELOCK *__fastcall NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
        NEEDDYNAMICMODECHANGESHARELOCK *this,
        int a2,
        int a3)
{
  *(_DWORD *)this = a2;
  if ( a2 )
  {
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared();
    EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, a3);
  }
  return this;
}
