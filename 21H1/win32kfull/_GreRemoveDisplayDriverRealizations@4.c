/*
 * XREFs of _GreRemoveDisplayDriverRealizations@4 @ 0xCF2AE
 * Callers:
 *     _zzzDecomposeDesktop@8 @ 0xCF042 (_zzzDecomposeDesktop@8.c)
 *     _zzzComposeDesktop@4 @ 0xE0A14 (_zzzComposeDesktop@4.c)
 * Callees:
 *     <none>
 */

int __thiscall GreRemoveDisplayDriverRealizations(_DWORD *this)
{
  int result; // eax

  if ( this )
  {
    GreAcquireSemaphore(ghsemEnableEUDC);
    GreAcquireSemaphore(_ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", _ghsemDynamicModeChange, 1);
    GreAcquireSemaphore(_ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", _ghsemGreLock, 2);
    GreAcquireSemaphore(_ghsemDCVisRgn);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", _ghsemDCVisRgn, 3);
    GreAcquireSemaphore(this[10]);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", this[10], 4);
    GreAcquireSemaphore(_ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", _ghsemSprite, 5);
    GreAcquireSemaphore(_ghsemHT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemHT", _ghsemHT, 6);
    GreAcquireSemaphore(this[8]);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", this[8], 11);
    GreAcquireSemaphore(_ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
    GreAcquireSemaphore(_ghsemPalette);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPalette", _ghsemPalette, 14);
    GreAcquireSemaphore(_ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", _ghsemPublicPFT, 15);
    GreAcquireSemaphore(_ghsemRFONTList);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemRFONTList", _ghsemRFONTList, 16);
    GreAcquireHmgrSemaphore();
    bDynamicProcessAllDriverRealizations(this, 0, 1);
    GreReleaseHmgrSemaphore();
    EtwTraceGreLockReleaseSemaphore(L"ghsemRFONTList", _ghsemRFONTList);
    GreReleaseSemaphoreInternal(_ghsemRFONTList);
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", _ghsemPublicPFT);
    GreReleaseSemaphoreInternal(_ghsemPublicPFT);
    EtwTraceGreLockReleaseSemaphore(L"ghsemPalette", _ghsemPalette);
    GreReleaseSemaphoreInternal(_ghsemPalette);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
    GreReleaseSemaphoreInternal(_ghsemDwmState);
    EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", this[8]);
    GreReleaseSemaphoreInternal(this[8]);
    EtwTraceGreLockReleaseSemaphore(L"ghsemHT", _ghsemHT);
    GreReleaseSemaphoreInternal(_ghsemHT);
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", _ghsemSprite);
    GreReleaseSemaphoreInternal(_ghsemSprite);
    EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()", this[10]);
    GreReleaseSemaphoreInternal(this[10]);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", _ghsemDCVisRgn);
    GreReleaseSemaphoreInternal(_ghsemDCVisRgn);
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", _ghsemGreLock);
    GreReleaseSemaphoreInternal(_ghsemGreLock);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
    EtwTraceGreLockReleaseSemaphore(L"ghsemEnableEUDC", ghsemEnableEUDC);
    return GreReleaseSemaphoreInternal(ghsemEnableEUDC);
  }
  return result;
}
