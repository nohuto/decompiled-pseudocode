/*
 * XREFs of _NtGdiBitBlt@44 @ 0x579D2
 * Callers:
 *     <none>
 * Callees:
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 */

int __stdcall NtGdiBitBlt(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  return NtGdiBitBltInternal(a1, a3, a4, a5, a6, a7, a8, a9, a10, a11 & 0xFFFFFFFD);
}
