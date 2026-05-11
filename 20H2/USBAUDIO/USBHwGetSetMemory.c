/*
 * XREFs of USBHwGetSetMemory @ 0x1C002CE30
 * Callers:
 *     USBParseGetMicArrayDescriptor @ 0x1C002EE74 (USBParseGetMicArrayDescriptor.c)
 *     USBCntrlGetSetMem @ 0x1C00321D0 (USBCntrlGetSetMem.c)
 * Callees:
 *     USBHwGetSetProperty @ 0x1C002CB68 (USBHwGetSetProperty.c)
 */

__int64 __fastcall USBHwGetSetMemory(
        __int64 a1,
        UCHAR a2,
        char a3,
        __int16 a4,
        __int16 a5,
        __int16 a6,
        ULONG a7,
        void *a8)
{
  return USBHwGetSetProperty(a1, (a3 != 0) + 27, a2 >> 7, a2, 0, a6, a4, a5, a8, a7);
}
