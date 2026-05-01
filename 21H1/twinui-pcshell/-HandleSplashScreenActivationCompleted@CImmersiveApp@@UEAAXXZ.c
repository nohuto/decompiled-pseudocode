/*
 * XREFs of ?HandleSplashScreenActivationCompleted@CImmersiveApp@@UEAAXXZ @ 0x180159F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::HandleSplashScreenActivationCompleted(CImmersiveApp *this)
{
  CImmersiveApp::_UpdatePresentedWindow((CImmersiveApp *)((char *)this - 112));
}
