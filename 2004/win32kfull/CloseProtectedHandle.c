/*
 * XREFs of CloseProtectedHandle @ 0x1C00BD568
 * Callers:
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00BD330 (xxxRestoreCsrssThreadDesktop.c)
 *     _CloseDesktop @ 0x1C00BD448 (_CloseDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00BD5C0 (xxxSetCsrssThreadDesktop.c)
 *     EditionOpenInputDesktopEntryPoint @ 0x1C00C3C00 (EditionOpenInputDesktopEntryPoint.c)
 *     _OpenDesktop @ 0x1C00C4408 (_OpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C00C45C0 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00C52A4 (xxxCreateDesktopEx.c)
 *     _OpenThreadDesktop @ 0x1C01E9E08 (_OpenThreadDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01EA074 (xxxResolveDesktopForWOW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CloseProtectedHandle(HANDLE Handle, KPROCESSOR_MODE a2)
{
  if ( !Handle )
    return 0;
  SetHandleFlag(Handle, 1LL, 0LL);
  return ObCloseHandle(Handle, a2);
}
