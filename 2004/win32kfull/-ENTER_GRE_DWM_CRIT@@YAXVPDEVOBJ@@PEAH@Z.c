/*
 * XREFs of ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C002B1B8
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1C000F13C (GreTransferDwmStateToSpriteState.c)
 *     GreSfmCloseCompositorRef @ 0x1C002BA6C (GreSfmCloseCompositorRef.c)
 *     GreDesktopSwitch @ 0x1C004C3F0 (GreDesktopSwitch.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0053B00 (GreTransferSpriteStateToDwmState.c)
 *     GreDwmStartup @ 0x1C00C22CC (GreDwmStartup.c)
 *     GreDwmShutdown @ 0x1C0128CB0 (GreDwmShutdown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ENTER_GRE_DWM_CRIT(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  *a2 = 0;
  if ( !ExIsResourceAcquiredExclusiveLite(ghsemDynamicModeChange)
    && !ExIsResourceAcquiredSharedLite(ghsemDynamicModeChange) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange, v4, v5, v6);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    *a2 = 1;
  }
  GreAcquireSemaphore(ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  GreAcquireSemaphore(ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
  GreAcquireSemaphore(*(_QWORD *)(a1 + 64));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", *(_QWORD *)(a1 + 64), 4LL);
  GreAcquireSemaphore(ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  GreAcquireSemaphore(*(_QWORD *)(a1 + 48));
  return EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(a1 + 48), 11LL);
}
