/*
 * XREFs of _RtlFormatMessage@36 @ 0x4B3625E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFormatMessageEx@40 @ 0x4B2E0E20 (_RtlFormatMessageEx@40.c)
 */

int __stdcall RtlFormatMessage(
        __int16 *a1,
        unsigned int a2,
        char a3,
        char a4,
        char a5,
        unsigned int *a6,
        wchar_t *Buffer,
        unsigned int a8,
        unsigned int *a9)
{
  return RtlFormatMessageEx(a1, a2, a3, a4, a5, a6, Buffer, a8, a9, 0);
}
