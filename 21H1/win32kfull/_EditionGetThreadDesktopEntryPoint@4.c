/*
 * XREFs of _EditionGetThreadDesktopEntryPoint@4 @ 0xF27F6
 * Callers:
 *     <none>
 * Callees:
 *     __GetThreadDesktop@4 @ 0x9ACDC (__GetThreadDesktop@4.c)
 */

HANDLE __stdcall EditionGetThreadDesktopEntryPoint(void **a1)
{
  HANDLE ThreadDesktop; // esi

  EnterSharedCrit(0, 1);
  ThreadDesktop = _GetThreadDesktop(a1);
  UserSessionSwitchLeaveCrit();
  return ThreadDesktop;
}
