/*
 * XREFs of _NtGdiGetDeviceWidth@4 @ 0x212CDF
 * Callers:
 *     <none>
 * Callees:
 *     _GreGetDeviceWidth@4 @ 0x21D522 (_GreGetDeviceWidth@4.c)
 */

int __stdcall NtGdiGetDeviceWidth(HDC a1)
{
  return GreGetDeviceWidth(a1);
}
