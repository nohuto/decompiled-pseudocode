/*
 * XREFs of IsChildWindowDpiBoundaryDesktopComposed @ 0x1C0020C48
 * Callers:
 *     ComposeWindowIfNeeded @ 0x1C0020B9C (ComposeWindowIfNeeded.c)
 *     DecomposeWindowIfNeeded @ 0x1C004E868 (DecomposeWindowIfNeeded.c)
 * Callees:
 *     IsChildWindowDpiBoundary @ 0x1C006F7CC (IsChildWindowDpiBoundary.c)
 */

__int64 __fastcall IsChildWindowDpiBoundaryDesktopComposed(struct tagWND *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned int)IsChildWindowDpiBoundary(a1) )
    return (unsigned int)IsWindowDesktopComposed(a1) != 0;
  return v2;
}
