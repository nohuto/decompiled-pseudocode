/*
 * XREFs of IsToplevelWindowDesktopComposed @ 0x1C004ACA8
 * Callers:
 *     xxxGetTitleBarInfoEx @ 0x1C0014CC0 (xxxGetTitleBarInfoEx.c)
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     EditionUpdateCursorOnMouseMove @ 0x1C00404E0 (EditionUpdateCursorOnMouseMove.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C0078134 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxDWP_DoNCActivate @ 0x1C00792C4 (xxxDWP_DoNCActivate.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C007C5D4 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     SetRedirectedWindow @ 0x1C009100C (SetRedirectedWindow.c)
 *     ComposeWindowIfNeeded @ 0x1C00918CC (ComposeWindowIfNeeded.c)
 *     DecomposeWindowIfNeeded @ 0x1C00C2A48 (DecomposeWindowIfNeeded.c)
 *     xxxSetLayeredWindow @ 0x1C00C6608 (xxxSetLayeredWindow.c)
 *     xxxSnapWindow @ 0x1C015527C (xxxSnapWindow.c)
 *     ?xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C015B52C (-xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW.c)
 *     xxxMoveSize @ 0x1C0212444 (xxxMoveSize.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C0215A70 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C023D830 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxDrawAnimatedRects @ 0x1C023EBA4 (xxxDrawAnimatedRects.c)
 *     xxxRecreateSmallIcons @ 0x1C0242F5C (xxxRecreateSmallIcons.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall IsToplevelWindowDesktopComposed(__int64 a1)
{
  __int64 v1; // r9
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned int)IsTopLevelWindow(a1) )
    return (unsigned int)IsWindowDesktopComposed(v1) != 0;
  return v2;
}
