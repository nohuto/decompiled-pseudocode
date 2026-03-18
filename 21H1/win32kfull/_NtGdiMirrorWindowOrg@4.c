/*
 * XREFs of _NtGdiMirrorWindowOrg@4 @ 0x213A39
 * Callers:
 *     <none>
 * Callees:
 *     _GreMirrorWindowOrg@4 @ 0x21D659 (_GreMirrorWindowOrg@4.c)
 */

int __stdcall NtGdiMirrorWindowOrg(HDC a1)
{
  return GreMirrorWindowOrg(a1);
}
