/*
 * XREFs of sub_1800CB5A0 @ 0x1800CB5A0
 * Callers:
 *     sub_18002B390 @ 0x18002B390 (sub_18002B390.c)
 *     sub_18002CA40 @ 0x18002CA40 (sub_18002CA40.c)
 *     sub_18002CD00 @ 0x18002CD00 (sub_18002CD00.c)
 *     sub_18002DD60 @ 0x18002DD60 (sub_18002DD60.c)
 *     sub_180037AE8 @ 0x180037AE8 (sub_180037AE8.c)
 *     sub_180043BD0 @ 0x180043BD0 (sub_180043BD0.c)
 *     sub_18004F930 @ 0x18004F930 (sub_18004F930.c)
 *     sub_18004FEF0 @ 0x18004FEF0 (sub_18004FEF0.c)
 *     sub_1800615D4 @ 0x1800615D4 (sub_1800615D4.c)
 *     sub_18007E531 @ 0x18007E531 (sub_18007E531.c)
 *     sub_1800C6B60 @ 0x1800C6B60 (sub_1800C6B60.c)
 *     sub_1800FC8A0 @ 0x1800FC8A0 (sub_1800FC8A0.c)
 *     sub_1800FD4C0 @ 0x1800FD4C0 (sub_1800FD4C0.c)
 *     sub_1801001B8 @ 0x1801001B8 (sub_1801001B8.c)
 *     sub_180100ADC @ 0x180100ADC (sub_180100ADC.c)
 *     sub_180101EA4 @ 0x180101EA4 (sub_180101EA4.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800CB5A0(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va);
}
