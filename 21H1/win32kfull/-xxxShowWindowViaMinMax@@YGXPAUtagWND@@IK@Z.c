/*
 * XREFs of ?xxxShowWindowViaMinMax@@YGXPAUtagWND@@IK@Z @ 0xB3A8C
 * Callers:
 *     ?xxxShowWindowEx@@YGHPAUtagWND@@EK@Z @ 0xF511E (-xxxShowWindowEx@@YGHPAUtagWND@@EK@Z.c)
 * Callees:
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YGXPAUtagWND@@_N@Z @ 0x19C335 (-TrackedWindowPosChanged@NotifyShell@@YGXPAUtagWND@@_N@Z.c)
 */

void __userpurge xxxShowWindowViaMinMax(
        struct tagWND *a1@<edx>,
        struct tagQ *a2@<ecx>,
        struct tagWND *a3,
        unsigned int a4,
        unsigned int a5)
{
  NotifyShell *v5; // [esp+0h] [ebp-8h]
  struct tagWND *v6; // [esp+4h] [ebp-4h]
  bool savedregs; // [esp+8h] [ebp+0h]

  xxxMinMaximizeEx(a2, a1, (int)a3, 0, 0, 0);
  if ( (char)a3 < 0 )
    NotifyShell::TrackedWindowPosChanged(v5, v6, savedregs);
}
