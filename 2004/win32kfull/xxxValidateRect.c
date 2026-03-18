/*
 * XREFs of xxxValidateRect @ 0x1C0119E38
 * Callers:
 *     xxxMoveWindow @ 0x1C0104A5C (xxxMoveWindow.c)
 *     NtUserValidateRect @ 0x1C0119D00 (NtUserValidateRect.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C0071544 (xxxRedrawWindow.c)
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
