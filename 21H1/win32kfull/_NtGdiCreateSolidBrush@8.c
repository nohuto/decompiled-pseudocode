/*
 * XREFs of _NtGdiCreateSolidBrush@8 @ 0xAB9B6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtGdiCreateSolidBrush(int a1, int a2)
{
  return hCreateSolidBrushInternal(a1, 0, a2, 1);
}
