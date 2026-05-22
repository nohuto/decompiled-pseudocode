/*
 * XREFs of ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x1800212C4
 * Callers:
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x180021350 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x1800774F0 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 *     ?On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z @ 0x18008D8F0 (-On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800B84B0 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x1800B9100 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800B9728 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z @ 0x18019D070 (-Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z.c)
 * Callees:
 *     <none>
 */

struct IMPCInputPostProcessor *__fastcall MPC3DStateHelper::GetPostProcessor(PSRWLOCK SRWLock)
{
  PVOID Ptr; // rbx

  AcquireSRWLockShared(SRWLock);
  Ptr = SRWLock[3].Ptr;
  ReleaseSRWLockShared(SRWLock);
  return (struct IMPCInputPostProcessor *)Ptr;
}
