/*
 * XREFs of _NtUserCountClipboardFormats@0 @ 0x121E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CountNumClipFormatForIL@@YGKUtagUIPI_INFO@@PBUtagWINDOWSTATION@@@Z @ 0x12220 (-CountNumClipFormatForIL@@YGKUtagUIPI_INFO@@PBUtagWINDOWSTATION@@@Z.c)
 *     ?CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ @ 0x91C96 (-CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ.c)
 */

int __stdcall NtUserCountClipboardFormats()
{
  int v0; // esi
  struct tagWINDOWSTATION *v1; // edi
  int CurrentProcessWin32Process; // eax

  v0 = 0;
  EnterSharedCrit(0, 1);
  v1 = CheckClipboardAccess();
  if ( v1 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    v0 = CountNumClipFormatForIL(
           v1,
           *(_DWORD *)(CurrentProcessWin32Process + 496),
           *(_DWORD *)(CurrentProcessWin32Process + 500));
  }
  UserSessionSwitchLeaveCrit();
  return v0;
}
