/*
 * XREFs of _EditionCloseDesktopEntryPoint@4 @ 0xF2154
 * Callers:
 *     <none>
 * Callees:
 *     __CloseDesktop@8 @ 0x812A8 (__CloseDesktop@8.c)
 */

BOOL __stdcall EditionCloseDesktopEntryPoint(void *a1)
{
  BOOL v1; // ebx

  EnterCrit(0, 1);
  v1 = (int)_CloseDesktop(a1, 1) >= 0;
  UserSessionSwitchLeaveCrit();
  return v1;
}
