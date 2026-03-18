/*
 * XREFs of _xxxRedrawFrameAndHook@4 @ 0x1A13C6
 * Callers:
 *     _NtUserCallHwndLock@8 @ 0x7D35A (_NtUserCallHwndLock@8.c)
 * Callees:
 *     _PostShellHookMessagesEx@12 @ 0x17156 (_PostShellHookMessagesEx@12.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _IsTrayWindow@4 @ 0x40204 (_IsTrayWindow@4.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 */

int __stdcall xxxRedrawFrameAndHook(struct tagHOOK **a1)
{
  struct tagHOOK *v1; // esi
  int v3; // [esp+0h] [ebp-8h]
  int v4; // [esp+4h] [ebp-4h]

  xxxSetWindowPos((int)a1, 0, 0, 0, 0, 0, 55);
  if ( IsTrayWindow(a1) )
  {
    v1 = *a1;
    xxxCallHook(*a1, 6, 0, 0xAu, v3, v4);
    PostShellHookMessagesEx(6, (unsigned int)v1, 0);
  }
  return 1;
}
