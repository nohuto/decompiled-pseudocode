/*
 * XREFs of _xxxMNDismiss@4 @ 0x1984A3
 * Callers:
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _xxxMNCancel@16 @ 0x197B72 (_xxxMNCancel@16.c)
 */

_DWORD *__thiscall xxxMNDismiss(int *this)
{
  return xxxMNCancel(this, 0, 0, 0);
}
