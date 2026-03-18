/*
 * XREFs of ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C00C4298
 * Callers:
 *     GreDwmStartup @ 0x1C000D5DC (GreDwmStartup.c)
 *     GreDwmShutdown @ 0x1C000E080 (GreDwmShutdown.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C001C1B4 (GreTransferDwmStateToSpriteState.c)
 *     GreDesktopSwitch @ 0x1C002A9D0 (GreDesktopSwitch.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0080B34 (GreTransferSpriteStateToDwmState.c)
 *     GreSfmCloseCompositorRef @ 0x1C00C3CD4 (GreSfmCloseCompositorRef.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LEAVE_GRE_DWM_CRIT(__int64 a1, int a2)
{
  __int64 result; // rax

  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *(_QWORD *)(a1 + 48));
  GreReleaseSemaphoreInternal(*(_QWORD *)(a1 + 48));
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
  GreReleaseSemaphoreInternal(ghsemSprite);
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()", *(_QWORD *)(a1 + 64));
  GreReleaseSemaphoreInternal(*(_QWORD *)(a1 + 64));
  EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
  GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
  result = GreReleaseSemaphoreInternal(ghsemGreLock);
  if ( a2 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    return GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return result;
}
