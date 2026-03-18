/*
 * XREFs of _NtGdiDeleteClientObj@4 @ 0x1FD874
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtGdiDeleteClientObj(int a1)
{
  return GreDeleteClientObj(a1);
}
