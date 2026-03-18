/*
 * XREFs of _IsChildWindowDpiBoundaryDesktopComposed@4 @ 0x1CDC8
 * Callers:
 *     _DecomposeWindowIfNeeded@4 @ 0x1B7B8 (_DecomposeWindowIfNeeded@4.c)
 *     _ComposeWindowIfNeeded@8 @ 0x1CD56 (_ComposeWindowIfNeeded@8.c)
 * Callees:
 *     _IsChildWindowDpiBoundary@4 @ 0x38846 (_IsChildWindowDpiBoundary@4.c)
 */

BOOL __thiscall IsChildWindowDpiBoundaryDesktopComposed(void *this)
{
  return IsChildWindowDpiBoundary() && IsWindowDesktopComposed(this);
}
