/*
 * XREFs of _xxxMinMaximize@12 @ 0xB3AB6
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 */

int __fastcall xxxMinMaximize(struct tagQ *a1, struct tagWND *a2, int a3)
{
  return xxxMinMaximizeEx(a1, a2, a3, 0, 0, 0);
}
