/*
 * XREFs of _GreOnCURSINFODestroy@4 @ 0x78876
 * Callers:
 *     ?CleanupCursorObject@@YGXPAUtagCURSOR@@@Z @ 0x787CC (-CleanupCursorObject@@YGXPAUtagCURSOR@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     _lambda_6c4cf59062ee11be64fa445dfc5ba57a_::operator() @ 0x1D10D1 (_lambda_6c4cf59062ee11be64fa445dfc5ba57a_--operator().c)
 */

void __thiscall GreOnCURSINFODestroy(void *this)
{
  int HDEV; // eax
  int v3; // ebx
  int v4; // [esp+10h] [ebp-8h] BYREF
  int v5; // [esp+14h] [ebp-4h] BYREF

  if ( (void *)gCachedSetPointerState == this )
  {
    GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"hsem", _ghsemDynamicModeChange);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      v5 = HDEV;
      v3 = *(_DWORD *)(HDEV + 40);
      if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v5) )
      {
        lambda_6c4cf59062ee11be64fa445dfc5ba57a_::operator()(v3, this);
      }
      else
      {
        v4 = _ghsemGreLock;
        GreAcquireSemaphore(_ghsemGreLock);
        lambda_6c4cf59062ee11be64fa445dfc5ba57a_::operator()(v3, this);
        SEMOBJ::vUnlock((SEMOBJ *)&v4);
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"hsem", _ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  }
}
