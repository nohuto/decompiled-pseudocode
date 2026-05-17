/*
 * XREFs of _EtwEventWriteEx@40 @ 0x4B2ABAF0
 * Callers:
 *     <none>
 * Callees:
 *     _EtwpEventWriteFull@44 @ 0x4B2E3CCF (_EtwpEventWriteFull@44.c)
 */

int __stdcall EtwEventWriteEx(
        int a1,
        __int16 a2,
        int a3,
        __int16 a4,
        __int16 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  return EtwpEventWriteFull(a1, a2, a4, a5, 0, a7, a8, a9, a10);
}
