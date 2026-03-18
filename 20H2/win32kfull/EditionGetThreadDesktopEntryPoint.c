/*
 * XREFs of EditionGetThreadDesktopEntryPoint @ 0x1C00FC370
 * Callers:
 *     <none>
 * Callees:
 *     _GetThreadDesktop @ 0x1C00FC3B4 (_GetThreadDesktop.c)
 */

__int64 __fastcall EditionGetThreadDesktopEntryPoint(unsigned int a1)
{
  __int64 ThreadDesktop; // rbx
  __int64 v3; // rcx

  EnterSharedCrit(0LL, 1LL);
  ThreadDesktop = GetThreadDesktop(a1);
  UserSessionSwitchLeaveCrit(v3);
  return ThreadDesktop;
}
