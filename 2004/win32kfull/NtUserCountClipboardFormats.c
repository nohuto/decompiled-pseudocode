/*
 * XREFs of NtUserCountClipboardFormats @ 0x1C005A230
 * Callers:
 *     <none>
 * Callees:
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C005A29C (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C005A628 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 NtUserCountClipboardFormats()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  struct tagWINDOWSTATION *v3; // rdi
  __int64 v4; // r8
  __int64 CurrentProcessWin32Process; // rax

  EnterSharedCrit(0LL, 1LL);
  v0 = 0;
  v3 = CheckClipboardAccess();
  if ( v3 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
    v0 = CountNumClipFormatForIL(*(_QWORD *)(CurrentProcessWin32Process + 880), v3);
  }
  UserSessionSwitchLeaveCrit(v2, v1, v4);
  return v0;
}
