/*
 * XREFs of NtUserGetOpenClipboardWindow @ 0x1C0057210
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C005A628 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 NtUserGetOpenClipboardWindow()
{
  struct tagWINDOWSTATION *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 *v5; // rax

  EnterSharedCrit(0LL, 1LL);
  v0 = CheckClipboardAccess();
  v4 = 0LL;
  if ( v0 )
  {
    v5 = (__int64 *)*((_QWORD *)v0 + 12);
    if ( v5 )
      v4 = *v5;
  }
  UserSessionSwitchLeaveCrit(v2, v1, v3);
  return v4;
}
