/*
 * XREFs of _GetProcessWindowStation @ 0x1C00C40D0
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C000DF88 (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C000E180 (xxxDwmStopRedirection.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0034C3C (xxxApplyGlobalInputSettings.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     NtUserSetImeInfoEx @ 0x1C00C2D70 (NtUserSetImeInfoEx.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00C3A0C (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     DesktopFromDesktopWindow @ 0x1C00C3B8C (DesktopFromDesktopWindow.c)
 *     EditionOpenInputDesktopEntryPoint @ 0x1C00C3C00 (EditionOpenInputDesktopEntryPoint.c)
 *     NtUserGetImeInfoEx @ 0x1C00C3D90 (NtUserGetImeInfoEx.c)
 *     EditionGetProcessWindowStationEntryPoint @ 0x1C00C4090 (EditionGetProcessWindowStationEntryPoint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProcessWindowStation(_QWORD *a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( a1 )
    *a1 = *(_QWORD *)(CurrentProcessWin32Process + 672);
  return *(_QWORD *)(CurrentProcessWin32Process + 664);
}
