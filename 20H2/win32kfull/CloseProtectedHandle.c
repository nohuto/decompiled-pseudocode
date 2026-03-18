/*
 * XREFs of CloseProtectedHandle @ 0x1C007DE18
 * Callers:
 *     EditionOpenInputDesktopEntryPoint @ 0x1C000FA30 (EditionOpenInputDesktopEntryPoint.c)
 *     _OpenDesktop @ 0x1C0010238 (_OpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C00103F0 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00110D4 (xxxCreateDesktopEx.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C007DBE0 (xxxRestoreCsrssThreadDesktop.c)
 *     _CloseDesktop @ 0x1C007DCF8 (_CloseDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C007DE70 (xxxSetCsrssThreadDesktop.c)
 *     _OpenThreadDesktop @ 0x1C01E9198 (_OpenThreadDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01E9404 (xxxResolveDesktopForWOW.c)
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
