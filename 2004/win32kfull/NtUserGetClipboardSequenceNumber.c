/*
 * XREFs of NtUserGetClipboardSequenceNumber @ 0x1C005A1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C005A628 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 NtUserGetClipboardSequenceNumber()
{
  struct tagWINDOWSTATION *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned int v4; // ebx

  EnterSharedCrit(0LL, 1LL);
  v0 = CheckClipboardAccess();
  v4 = 0;
  if ( v0 )
    v4 = *((_DWORD *)v0 + 36);
  UserSessionSwitchLeaveCrit(v2, v1, v3);
  return v4;
}
