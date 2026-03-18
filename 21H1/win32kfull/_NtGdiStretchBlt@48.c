/*
 * XREFs of _NtGdiStretchBlt@48 @ 0xA88AC
 * Callers:
 *     <none>
 * Callees:
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 */

int __stdcall NtGdiStretchBlt(
        HDC a1,
        int a2,
        struct XDCOBJ *a3,
        int a4,
        int a5,
        HDC a6,
        LONG a7,
        struct XDCOBJ *a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return GreStretchBltInternal(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, 0);
}
