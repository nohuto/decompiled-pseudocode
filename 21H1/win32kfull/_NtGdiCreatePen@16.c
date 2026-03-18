/*
 * XREFs of _NtGdiCreatePen@16 @ 0xA906A
 * Callers:
 *     <none>
 * Callees:
 *     _GreCreatePen@16 @ 0xA9084 (_GreCreatePen@16.c)
 */

int __stdcall NtGdiCreatePen(int a1, int a2, int a3, int a4)
{
  return GreCreatePen(a3, a4);
}
