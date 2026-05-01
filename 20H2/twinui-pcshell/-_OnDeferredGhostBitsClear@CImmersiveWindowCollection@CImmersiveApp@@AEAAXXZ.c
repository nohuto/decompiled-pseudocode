/*
 * XREFs of ?_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180182F90
 * Callers:
 *     ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x18017DE10 (-HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z.c)
 * Callees:
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18001A618 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18001AB60 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18001B074 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::_OnDeferredGhostBitsClear(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  int v2; // edx
  int v3; // r8d

  CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows((__int64)this);
  if ( CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(this, v2, v3) )
    CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(this);
}
