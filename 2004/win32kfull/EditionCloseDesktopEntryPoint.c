/*
 * XREFs of EditionCloseDesktopEntryPoint @ 0x1C00BD400
 * Callers:
 *     <none>
 * Callees:
 *     _CloseDesktop @ 0x1C00BD448 (_CloseDesktop.c)
 */

__int64 __fastcall EditionCloseDesktopEntryPoint(HANDLE Handle)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  EnterCrit(0LL, 1LL);
  LODWORD(Handle) = (int)CloseDesktop(Handle) >= 0;
  UserSessionSwitchLeaveCrit(v3, v2, v4);
  return (unsigned int)Handle;
}
