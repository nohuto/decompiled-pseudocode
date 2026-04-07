/*
 * XREFs of ?GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z @ 0x180094380
 * Callers:
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z @ 0x18009A8F0 (-Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

struct CBitmapSource *__fastcall CTopLevelWindow::GetWindowFramePart(
        struct CTopLevelWindow::WindowFrame *a1,
        unsigned int a2)
{
  struct CBitmapSource *result; // rax

  result = (struct CBitmapSource *)*((_QWORD *)a1 + 2 * a2 + 187);
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17) )
  {
    if ( *((_QWORD *)a1 + 2 * a2 + 188) )
      return (struct CBitmapSource *)*((_QWORD *)a1 + 2 * a2 + 188);
  }
  return result;
}
