/*
 * XREFs of _NtGdiSelectBrush@8 @ 0x2140EF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtGdiSelectBrush(int a1, int a2)
{
  return GreSelectBrushInternal(a1, a2, 0);
}
