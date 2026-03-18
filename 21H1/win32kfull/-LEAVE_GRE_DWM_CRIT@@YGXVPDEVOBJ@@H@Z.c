/*
 * XREFs of ?LEAVE_GRE_DWM_CRIT@@YGXVPDEVOBJ@@H@Z @ 0x21D46
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

int __thiscall LEAVE_GRE_DWM_CRIT(void *this, int a2)
{
  int result; // eax

  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *(_DWORD *)(a2 + 32));
  GreReleaseSemaphoreInternal(*(_DWORD *)(a2 + 32));
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
  GreReleaseSemaphoreInternal(_ghsemDwmState);
  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", _ghsemSprite);
  GreReleaseSemaphoreInternal(_ghsemSprite);
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()", *(_DWORD *)(a2 + 40));
  GreReleaseSemaphoreInternal(*(_DWORD *)(a2 + 40));
  EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", _ghsemDCVisRgn);
  GreReleaseSemaphoreInternal(_ghsemDCVisRgn);
  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", _ghsemGreLock);
  result = GreReleaseSemaphoreInternal(_ghsemGreLock);
  if ( this )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
    return GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  }
  return result;
}
