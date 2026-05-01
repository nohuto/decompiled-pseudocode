/*
 * XREFs of ?GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18017D8DC
 * Callers:
 *     ?HandleGhostAnimationWaitCompleted@CImmersiveApp@@UEAAXXZ @ 0x18017DD10 (-HandleGhostAnimationWaitCompleted@CImmersiveApp@@UEAAXXZ.c)
 *     ?IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z @ 0x18017E230 (-IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z.c)
 * Callees:
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18001ABE0 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::GhostAnimationWaitCompleted(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  if ( (*((_BYTE *)this + 212) & 4) != 0 )
    CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus((__int64)this, 4);
}
