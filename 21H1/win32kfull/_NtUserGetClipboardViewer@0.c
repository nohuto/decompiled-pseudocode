/*
 * XREFs of _NtUserGetClipboardViewer@0 @ 0x162587
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ @ 0x91C96 (-CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ.c)
 */

int __stdcall NtUserGetClipboardViewer()
{
  int v0; // esi
  struct tagWINDOWSTATION *v1; // eax
  int *v2; // eax

  v0 = 0;
  EnterSharedCrit(0, 1);
  v1 = CheckClipboardAccess();
  if ( v1 )
  {
    v2 = (int *)*((_DWORD *)v1 + 13);
    if ( v2 )
      v0 = *v2;
  }
  UserSessionSwitchLeaveCrit();
  return v0;
}
