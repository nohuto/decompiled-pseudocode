/*
 * XREFs of _NtGdiMaskBlt@52 @ 0x7B7A8
 * Callers:
 *     <none>
 * Callees:
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 */

int __stdcall NtGdiMaskBlt(
        HDC a1,
        int a2,
        LONG a3,
        int a4,
        int a5,
        HDC a6,
        LONG a7,
        struct XDCOBJ *a8,
        int a9,
        int a10,
        int a11,
        unsigned int a12,
        int a13)
{
  return GreMaskBlt(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}
