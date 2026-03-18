/*
 * XREFs of _NtGdiSelectPen@8 @ 0x21410B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtGdiSelectPen(int a1, int a2)
{
  return GreSelectPenInternal(a1, a2, 0);
}
