/*
 * XREFs of NtUserCountClipboardFormats @ 0x1C0016880
 * Callers:
 *     <none>
 * Callees:
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C00168EC (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0016C78 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 NtUserCountClipboardFormats()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx
  struct tagWINDOWSTATION *v2; // rdi
  __int64 CurrentProcessWin32Process; // rax

  EnterSharedCrit(0LL, 1LL);
  v0 = 0;
  v2 = CheckClipboardAccess();
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    v0 = CountNumClipFormatForIL(*(_QWORD *)(CurrentProcessWin32Process + 880), v2);
  }
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
