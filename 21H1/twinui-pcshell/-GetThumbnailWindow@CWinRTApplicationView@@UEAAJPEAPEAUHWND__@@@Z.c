/*
 * XREFs of ?GetThumbnailWindow@CWinRTApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x180172B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CWinRTApplicationView::GetThumbnailWindow(CWinRTApplicationView *this, HWND *a2)
{
  return CWinRTApplicationView::v_GetNativeWindow(this, a2);
}
