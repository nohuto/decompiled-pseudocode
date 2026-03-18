/*
 * XREFs of _NtGdiIntersectClipRect@20 @ 0x98C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtGdiIntersectClipRect(int a1, int a2, int a3, int a4, int a5)
{
  return GreIntersectClipRect(a1, a2, a3, a4, a5);
}
