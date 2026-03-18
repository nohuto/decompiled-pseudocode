/*
 * XREFs of NtGdiGetDeviceCaps @ 0x1C001EC20
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDeviceCaps @ 0x1C001EC40 (GreGetDeviceCaps.c)
 */

__int64 __fastcall NtGdiGetDeviceCaps(HDC a1, int a2)
{
  return GreGetDeviceCaps(a1, a2);
}
