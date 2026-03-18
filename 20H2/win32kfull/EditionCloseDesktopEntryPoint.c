/*
 * XREFs of EditionCloseDesktopEntryPoint @ 0x1C007DCB0
 * Callers:
 *     <none>
 * Callees:
 *     _CloseDesktop @ 0x1C007DCF8 (_CloseDesktop.c)
 */

__int64 __fastcall EditionCloseDesktopEntryPoint(HANDLE Handle)
{
  __int64 v2; // rcx

  EnterCrit(0LL, 1LL);
  LODWORD(Handle) = (int)CloseDesktop(Handle) >= 0;
  UserSessionSwitchLeaveCrit(v2);
  return (unsigned int)Handle;
}
