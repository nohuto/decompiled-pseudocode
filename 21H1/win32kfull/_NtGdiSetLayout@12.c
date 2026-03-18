/*
 * XREFs of _NtGdiSetLayout@12 @ 0xAB060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtGdiSetLayout(int a1, int a2, int a3)
{
  return GreSetLayout(a1, a2, a3);
}
