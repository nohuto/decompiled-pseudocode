/*
 * XREFs of ?xxxNotifyShellOfWindowSwap@@YGXPAUtagWND@@0@Z @ 0xC26E2
 * Callers:
 *     ?xxxShowGhostWindow@@YGXPAUtagWND@@0@Z @ 0xC22F2 (-xxxShowGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YGXPAUtagWND@@0@Z @ 0x16FE15 (-xxxHideGhostWindow@@YGXPAUtagWND@@0@Z.c)
 * Callees:
 *     _PostShellHookMessages@8 @ 0x17142 (_PostShellHookMessages@8.c)
 *     ?_PostShellHookMsgWorker@@YGXIIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1718E (-_PostShellHookMsgWorker@@YGXIIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 */

void __fastcall xxxNotifyShellOfWindowSwap(struct tagWND **a1, unsigned int *a2)
{
  unsigned int *v2; // esi
  struct tagHOOK *v3; // edi
  int v4; // [esp+0h] [ebp-8h]
  int v5; // [esp+0h] [ebp-8h]
  struct tagINPUT_MESSAGE_SOURCE *v6; // [esp+4h] [ebp-4h]
  int v7; // [esp+4h] [ebp-4h]

  v2 = (unsigned int *)*a2;
  v3 = *a1;
  _PostShellHookMsgWorker(*a1, *(unsigned __int16 *)(_gpsi + 978), *a2, 0, v4, v6);
  PostShellHookMessages();
  PostShellHookMessages();
  xxxCallHook(v3, 13, v2, 0xAu, v5, v7);
}
