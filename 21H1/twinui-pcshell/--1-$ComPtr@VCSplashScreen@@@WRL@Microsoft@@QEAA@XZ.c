/*
 * XREFs of ??1?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@QEAA@XZ @ 0x1801559D8
 * Callers:
 *     _CSplashScreen::OnSystemVisualChanged_::_1_::dtor$0 @ 0x1800DBBC2 (_CSplashScreen--OnSystemVisualChanged_--_1_--dtor$0.c)
 *     _CSplashScreen::OnSystemVisualChanged_::_1_::dtor$1 @ 0x1800DBBD4 (_CSplashScreen--OnSystemVisualChanged_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CSplashScreen>::~ComPtr<CSplashScreen>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(a1);
}
