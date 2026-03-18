/*
 * XREFs of ?ENTER_GRE_DWM_CRIT@@YGXVPDEVOBJ@@PAH@Z @ 0x21BFE
 * Callers:
 *     _GreSfmCloseCompositorRef@8 @ 0x21E0A (_GreSfmCloseCompositorRef@8.c)
 *     _GreDesktopSwitch@20 @ 0xB23DE (_GreDesktopSwitch@20.c)
 *     _GreTransferDwmStateToSpriteState@8 @ 0xCF1B4 (_GreTransferDwmStateToSpriteState@8.c)
 *     _GreDwmShutdown@4 @ 0xCF60A (_GreDwmShutdown@4.c)
 *     _GreTransferSpriteStateToDwmState@8 @ 0xE11CA (_GreTransferSpriteStateToDwmState@8.c)
 *     _GreDwmStartup@4 @ 0xE1BEA (_GreDwmStartup@4.c)
 * Callees:
 *     <none>
 */

int __thiscall ENTER_GRE_DWM_CRIT(_DWORD *this, int a2)
{
  *this = 0;
  if ( !ExIsResourceAcquiredExclusiveLite(_ghsemDynamicModeChange)
    && !ExIsResourceAcquiredSharedLite(_ghsemDynamicModeChange) )
  {
    GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
    *this = 1;
  }
  GreAcquireSemaphore(_ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", _ghsemGreLock, 2);
  GreAcquireSemaphore(_ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", _ghsemDCVisRgn, 3);
  GreAcquireSemaphore(*(_DWORD *)(a2 + 40));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", *(_DWORD *)(a2 + 40), 4);
  GreAcquireSemaphore(_ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", _ghsemSprite, 5);
  GreAcquireSemaphore(_ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
  GreAcquireSemaphore(*(_DWORD *)(a2 + 32));
  return EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_DWORD *)(a2 + 32), 11);
}
