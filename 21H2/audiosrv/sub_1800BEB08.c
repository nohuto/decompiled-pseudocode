/*
 * XREFs of sub_1800BEB08 @ 0x1800BEB08
 * Callers:
 *     sub_1800BE130 @ 0x1800BE130 (sub_1800BE130.c)
 *     sub_1800C9420 @ 0x1800C9420 (sub_1800C9420.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800BEB08(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va);
}
