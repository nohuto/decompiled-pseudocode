/*
 * XREFs of EditionCallAccessibilityHook @ 0x1C01D7D00
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0099E30 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 EditionCallAccessibilityHook()
{
  if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0 )
    return xxxCallHook(11, 2uLL, 0LL, 10);
  else
    return 0LL;
}
