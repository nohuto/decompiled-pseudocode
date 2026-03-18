/*
 * XREFs of _EditionInternalSetCursorPos@12 @ 0xF0112
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z @ 0x7B8F8 (-zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z.c)
 */

int __stdcall EditionInternalSetCursorPos(struct tagPOINT *a1, LONG a2, int a3)
{
  return zzzInternalSetCursorPos(a1, a2, a3, 0);
}
