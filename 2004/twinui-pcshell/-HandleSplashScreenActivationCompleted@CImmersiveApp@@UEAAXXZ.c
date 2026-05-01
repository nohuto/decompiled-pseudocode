/*
 * XREFs of ?HandleSplashScreenActivationCompleted@CImmersiveApp@@UEAAXXZ @ 0x18017E320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::HandleSplashScreenActivationCompleted(CImmersiveApp *this)
{
  CImmersiveApp::_UpdatePresentedWindow((CImmersiveApp *)((char *)this - 112));
}
