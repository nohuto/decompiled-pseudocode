/*
 * XREFs of _EditionUpdateCursorOnMouseMove@12 @ 0x26B00
 * Callers:
 *     <none>
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _IsToplevelWindowDesktopComposed@4 @ 0x35ADA (_IsToplevelWindowDesktopComposed@4.c)
 *     _DwmAsyncTopLevelMouseLeave@8 @ 0xC2916 (_DwmAsyncTopLevelMouseLeave@8.c)
 */

int __stdcall EditionUpdateCursorOnMouseMove(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  void *v8; // eax

  if ( gspwndCursorNC && IsToplevelWindowDesktopComposed(gspwndCursorNC) && (a1 != gspwndCursorNC || PtInRect(a2, a3)) )
  {
    v8 = (void *)ReferenceDwmApiPort();
    DwmAsyncTopLevelMouseLeave(v8);
  }
  if ( PtInRect(a2, a3) )
    HMAssignmentUnlock(&gspwndCursorNC);
  else
    HMAssignmentLock(v4, v3);
  return HMAssignmentLock(v6, v5);
}
