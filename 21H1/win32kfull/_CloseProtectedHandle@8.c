/*
 * XREFs of _CloseProtectedHandle@8 @ 0xC931A
 * Callers:
 *     __OpenDesktop@20 @ 0x7DD0E (__OpenDesktop@20.c)
 *     _xxxResolveDesktop@20 @ 0x7DE28 (_xxxResolveDesktop@20.c)
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 *     __CloseDesktop@8 @ 0x812A8 (__CloseDesktop@8.c)
 *     _xxxRestoreCsrssThreadDesktop@8 @ 0xC9290 (_xxxRestoreCsrssThreadDesktop@8.c)
 *     _xxxSetCsrssThreadDesktop@8 @ 0xC9346 (_xxxSetCsrssThreadDesktop@8.c)
 *     _EditionOpenInputDesktopEntryPoint@12 @ 0xF2960 (_EditionOpenInputDesktopEntryPoint@12.c)
 *     __OpenThreadDesktop@20 @ 0x154A0F (__OpenThreadDesktop@20.c)
 *     _xxxResolveDesktopForWOW@4 @ 0x154BAD (_xxxResolveDesktopForWOW@4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CloseProtectedHandle(HANDLE Handle, KPROCESSOR_MODE PreviousMode)
{
  if ( !Handle )
    return 0;
  SetHandleFlag(Handle, 1, 0);
  return ObCloseHandle(Handle, PreviousMode);
}
