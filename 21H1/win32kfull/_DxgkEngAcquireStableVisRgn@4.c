/*
 * XREFs of _DxgkEngAcquireStableVisRgn@4 @ 0xBA404
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

void __stdcall DxgkEngAcquireStableVisRgn(HDC a1)
{
  int v1; // eax
  _DWORD v2[3]; // [esp+8h] [ebp-Ch] BYREF

  UserEnterUserCritSecShared();
  GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  memset(v2, 0, sizeof(v2));
  XDCOBJ::vLock((XDCOBJ *)v2, a1);
  if ( v2[0]
    && ((a1 = *(HDC *)(v2[0] + 36), (**(_BYTE **)(v2[0] + 1020) & 1) != 0)
     || (v1 = *(_DWORD *)(v2[0] + 24), (v1 & 0x200) != 0) && (v1 & 0x8000) != 0)
    && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&a1) )
  {
    GreAcquireSemaphoreSharedInternal(_ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", _ghsemGreLock);
  }
  else
  {
    GreAcquireSemaphore(_ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", _ghsemGreLock, 2);
  }
  GreAcquireSemaphoreSharedInternal(_ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", _ghsemDCVisRgn);
  if ( v2[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v2);
}
