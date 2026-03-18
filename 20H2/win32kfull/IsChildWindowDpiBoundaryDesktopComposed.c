/*
 * XREFs of IsChildWindowDpiBoundaryDesktopComposed @ 0x1C0091978
 * Callers:
 *     ComposeWindowIfNeeded @ 0x1C00918CC (ComposeWindowIfNeeded.c)
 *     DecomposeWindowIfNeeded @ 0x1C00C2A48 (DecomposeWindowIfNeeded.c)
 * Callees:
 *     IsChildWindowDpiBoundary @ 0x1C0046590 (IsChildWindowDpiBoundary.c)
 */

__int64 __fastcall IsChildWindowDpiBoundaryDesktopComposed(struct tagWND *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned int)IsChildWindowDpiBoundary(a1) )
    return (unsigned int)IsWindowDesktopComposed(a1) != 0;
  return v2;
}
