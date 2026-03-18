/*
 * XREFs of NtGdiGetDeviceCaps @ 0x1C00AA510
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDeviceCaps @ 0x1C00AA530 (GreGetDeviceCaps.c)
 */

__int64 __fastcall NtGdiGetDeviceCaps(HDC a1, int a2)
{
  return GreGetDeviceCaps(a1, a2);
}
