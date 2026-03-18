/*
 * XREFs of ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0004808
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003D1C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FC4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PostShellHookMessages @ 0x1C00BF140 (PostShellHookMessages.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BF1B0 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

void __fastcall xxxNotifyShellOfWindowSwap(struct tagWND *a1, struct tagWND *a2)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx

  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)a2;
  _PostShellHookMsgWorker(*(unsigned __int16 *)(gpsi + 1378LL), *(_QWORD *)a1, *(_QWORD *)a2, 0LL);
  PostShellHookMessages(14LL, v3);
  PostShellHookMessages(13LL, v2);
  xxxCallHook(13, v2, v3, 10);
}
