/*
 * XREFs of _NtUserGetClipboardSequenceNumber@0 @ 0x12242
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ @ 0x91C96 (-CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ.c)
 */

int __stdcall NtUserGetClipboardSequenceNumber()
{
  int v0; // esi
  struct tagWINDOWSTATION *v1; // eax

  v0 = 0;
  EnterSharedCrit(0, 1);
  v1 = CheckClipboardAccess();
  if ( v1 )
    v0 = *((_DWORD *)v1 + 19);
  UserSessionSwitchLeaveCrit();
  return v0;
}
