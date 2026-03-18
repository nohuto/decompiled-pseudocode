/*
 * XREFs of ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C00158F4
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0013B70 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void DrvAcquireChangeDisplaySettingLocks(void)
{
  HSEMAPHORE v0; // rax

  v0 = 0LL;
  if ( qword_1C024F2F8 )
    v0 = (HSEMAPHORE)qword_1C024F2F8();
  EngAcquireSemaphore(v0);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  EngAcquireSemaphore(ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  EngAcquireSemaphore(ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
}
