/*
 * XREFs of sub_1800C2808 @ 0x1800C2808
 * Callers:
 *     sub_1800C1760 @ 0x1800C1760 (sub_1800C1760.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800C2808(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+98h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &unk_18016DDC0, 25LL, (__int64 *)va);
}
