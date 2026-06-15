/*
 * XREFs of sub_1800C24EC @ 0x1800C24EC
 * Callers:
 *     sub_180013360 @ 0x180013360 (sub_180013360.c)
 *     sub_1800C0E5C @ 0x1800C0E5C (sub_1800C0E5C.c)
 *     sub_1800C1D20 @ 0x1800C1D20 (sub_1800C1D20.c)
 *     sub_1800C8AF8 @ 0x1800C8AF8 (sub_1800C8AF8.c)
 *     sub_1800CAE90 @ 0x1800CAE90 (sub_1800CAE90.c)
 *     sub_180100ADC @ 0x180100ADC (sub_180100ADC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800C24EC(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, a3, a2, &v5);
}
