/*
 * XREFs of sub_1800C2734 @ 0x1800C2734
 * Callers:
 *     sub_1800C14A0 @ 0x1800C14A0 (sub_1800C14A0.c)
 *     sub_1800C1760 @ 0x1800C1760 (sub_1800C1760.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800C2734(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &unk_18016DDC0, a2, (__int64 *)va);
}
