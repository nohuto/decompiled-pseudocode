/*
 * XREFs of ?GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18015991C
 * Callers:
 *     ?HandleGhostAnimationWaitCompleted@CImmersiveApp@@UEAAXXZ @ 0x180159D50 (-HandleGhostAnimationWaitCompleted@CImmersiveApp@@UEAAXXZ.c)
 *     ?IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z @ 0x18015A270 (-IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z.c)
 * Callees:
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180023610 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::GhostAnimationWaitCompleted(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  if ( (*((_BYTE *)this + 212) & 4) != 0 )
    CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus((__int64)this, 4);
}
