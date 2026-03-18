/*
 * XREFs of xxxRedrawFrameAndHook @ 0x1C0153940
 * Callers:
 *     <none>
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0033A88 (PostShellHookMessagesEx.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0099E30 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     IsTrayWindow @ 0x1C009D060 (IsTrayWindow.c)
 */

__int64 __fastcall xxxRedrawFrameAndHook(struct tagWND *a1)
{
  unsigned __int64 v2; // rbx

  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  if ( (unsigned int)IsTrayWindow(a1) )
  {
    v2 = *(_QWORD *)a1;
    xxxCallHook(6, v2, 0LL, 10);
    PostShellHookMessagesEx(6u, v2, 0LL);
  }
  return 1LL;
}
