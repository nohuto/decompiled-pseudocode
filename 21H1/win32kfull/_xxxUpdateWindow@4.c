/*
 * XREFs of _xxxUpdateWindow@4 @ 0x7D41C
 * Callers:
 *     _NtUserCallHwndLock@8 @ 0x7D35A (_NtUserCallHwndLock@8.c)
 * Callees:
 *     ?xxxInternalUpdateWindow@@YGXPAUtagWND@@K@Z @ 0x7D436 (-xxxInternalUpdateWindow@@YGXPAUtagWND@@K@Z.c)
 */

int __thiscall xxxUpdateWindow(struct tagWND *this, int a2)
{
  unsigned int savedregs; // [esp+0h] [ebp+0h]

  xxxInternalUpdateWindow(this, savedregs);
  return 1;
}
