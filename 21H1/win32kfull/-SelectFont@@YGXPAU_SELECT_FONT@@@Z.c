/*
 * XREFs of ?SelectFont@@YGXPAU_SELECT_FONT@@@Z @ 0x1ACF9B
 * Callers:
 *     <none>
 * Callees:
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 */

void __stdcall SelectFont(struct _SELECT_FONT *a1)
{
  GreSelectFont(*(HDC *)a1, *((_DWORD *)a1 + 1));
}
