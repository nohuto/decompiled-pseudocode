/*
 * XREFs of ?OnBackButtonUpdated@CImmersiveApp@@UEAAXXZ @ 0x18017F620
 * Callers:
 *     <none>
 * Callees:
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x1800382A4 (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 */

void __fastcall CImmersiveApp::OnBackButtonUpdated(CImmersiveApp *this)
{
  char *v1; // rbx

  v1 = (char *)this - 112;
  CImmersiveApp::_UpdateWindowTitleAndButtons((CImmersiveApp *)((char *)this - 112));
  CImmersiveApp::_QueuePresentationChangeNotification((__int64)v1, 1);
}
