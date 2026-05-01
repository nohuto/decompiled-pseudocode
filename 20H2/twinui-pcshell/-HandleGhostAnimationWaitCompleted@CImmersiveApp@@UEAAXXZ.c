/*
 * XREFs of ?HandleGhostAnimationWaitCompleted@CImmersiveApp@@UEAAXXZ @ 0x18017DD10
 * Callers:
 *     <none>
 * Callees:
 *     ?GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18017D8DC (-GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 */

void __fastcall CImmersiveApp::HandleGhostAnimationWaitCompleted(CImmersiveApp *this)
{
  CImmersiveApp::CImmersiveWindowCollection::GhostAnimationWaitCompleted((CImmersiveApp *)((char *)this + 184));
  CImmersiveApp::_UpdatePresentedWindow((CImmersiveApp *)((char *)this - 112));
}
