/*
 * XREFs of _NtGdiRectVisible@8 @ 0x5369E
 * Callers:
 *     <none>
 * Callees:
 *     _GreRectVisible@8 @ 0x53700 (_GreRectVisible@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtGdiRectVisible(HDC a1, int a2)
{
  return GreRectVisible(a1);
}
