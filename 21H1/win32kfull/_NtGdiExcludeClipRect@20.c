/*
 * XREFs of _NtGdiExcludeClipRect@20 @ 0x7893A
 * Callers:
 *     <none>
 * Callees:
 *     _GreExcludeClipRect@20 @ 0x79558 (_GreExcludeClipRect@20.c)
 */

int __stdcall NtGdiExcludeClipRect(HDC a1, int a2, int a3, int a4, int a5)
{
  return GreExcludeClipRect(a1, a3, a4, a5);
}
