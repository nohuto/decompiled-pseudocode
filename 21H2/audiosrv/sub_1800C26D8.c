/*
 * XREFs of sub_1800C26D8 @ 0x1800C26D8
 * Callers:
 *     sub_1800BFDE0 @ 0x1800BFDE0 (sub_1800BFDE0.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800C26D8(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &unk_18016DDC0, 51LL, (__int64 *)va);
}
