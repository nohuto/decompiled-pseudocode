/*
 * XREFs of _NtGdiGetNearestColor@8 @ 0xC46F4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtGdiGetNearestColor(int a1, int a2)
{
  return GreGetNearestColor(a1, a2);
}
