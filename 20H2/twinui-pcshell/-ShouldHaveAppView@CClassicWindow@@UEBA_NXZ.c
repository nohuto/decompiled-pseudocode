/*
 * XREFs of ?ShouldHaveAppView@CClassicWindow@@UEBA_NXZ @ 0x180077140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CClassicWindow::ShouldHaveAppView(CClassicWindow *this)
{
  return CClassicWindow::s_ShouldHaveAppView(*((unsigned int *)this + 18));
}
