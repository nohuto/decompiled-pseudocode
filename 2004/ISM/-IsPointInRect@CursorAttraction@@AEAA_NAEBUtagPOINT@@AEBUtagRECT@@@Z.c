/*
 * XREFs of ?IsPointInRect@CursorAttraction@@AEAA_NAEBUtagPOINT@@AEBUtagRECT@@@Z @ 0x180170774
 * Callers:
 *     ?ApplyCursorAttraction@CursorAttraction@@QEAA?AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z @ 0x1801703DC (-ApplyCursorAttraction@CursorAttraction@@QEAA-AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CursorAttraction::IsPointInRect(
        CursorAttraction *this,
        const struct tagPOINT *a2,
        const struct tagRECT *a3)
{
  LONG y; // eax
  bool result; // al

  result = 0;
  if ( a2->x >= a3->left && a2->x <= a3->right )
  {
    y = a2->y;
    if ( y >= a3->top && y <= a3->bottom )
      return 1;
  }
  return result;
}
