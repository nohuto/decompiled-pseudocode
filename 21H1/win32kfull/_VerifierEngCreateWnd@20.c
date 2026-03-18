/*
 * XREFs of _VerifierEngCreateWnd@20 @ 0x1FC9DB
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YIHK@Z @ 0x1FC707 (-VerifierRandomFailure@@YIHK@Z.c)
 */

WNDOBJ *__stdcall VerifierEngCreateWnd(SURFOBJ *pso, HWND hwnd, WNDOBJCHANGEPROC pfn, FLONG fl, INT iPixelFormat)
{
  if ( VerifierRandomFailure() )
    return 0;
  else
    return EngCreateWnd(pso, hwnd, pfn, fl, iPixelFormat);
}
