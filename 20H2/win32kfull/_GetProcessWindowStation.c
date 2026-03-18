/*
 * XREFs of _GetProcessWindowStation @ 0x1C000FF00
 * Callers:
 *     NtUserSetImeInfoEx @ 0x1C000E310 (NtUserSetImeInfoEx.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C000F13C (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     DesktopFromDesktopWindow @ 0x1C000F50C (DesktopFromDesktopWindow.c)
 *     EditionOpenInputDesktopEntryPoint @ 0x1C000FA30 (EditionOpenInputDesktopEntryPoint.c)
 *     NtUserGetImeInfoEx @ 0x1C000FBC0 (NtUserGetImeInfoEx.c)
 *     EditionGetProcessWindowStationEntryPoint @ 0x1C000FEC0 (EditionGetProcessWindowStationEntryPoint.c)
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     zzzDwmStartRedirection @ 0x1C007FCE0 (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C0081030 (xxxDwmStopRedirection.c)
 *     xxxApplyGlobalInputSettings @ 0x1C00C20AC (xxxApplyGlobalInputSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProcessWindowStation(_QWORD *a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( a1 )
    *a1 = *(_QWORD *)(CurrentProcessWin32Process + 672);
  return *(_QWORD *)(CurrentProcessWin32Process + 664);
}
