/*
 * XREFs of QueueNotifyMessage @ 0x1C021DE60
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C001B338 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 */

void __fastcall QueueNotifyMessage(struct tagWND *a1, int a2, int a3, int a4, int a5)
{
  QueueNotifyTransformableMessage(a1, a2, a3, a4, a5, 0);
}
