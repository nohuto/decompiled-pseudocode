/*
 * XREFs of xxxValidateRect @ 0x1C011AFC8
 * Callers:
 *     xxxMoveWindow @ 0x1C01056BC (xxxMoveWindow.c)
 *     NtUserValidateRect @ 0x1C011AE90 (NtUserValidateRect.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C00429A4 (xxxRedrawWindow.c)
 */

__int64 __fastcall xxxValidateRect(struct tagWND *a1, int *a2)
{
  int v2; // r9d

  if ( a1 )
  {
    v2 = 8;
  }
  else
  {
    a2 = 0LL;
    v2 = 645;
    a1 = 0LL;
  }
  return xxxRedrawWindow(a1, a2, 0LL, v2);
}
