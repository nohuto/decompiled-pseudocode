/*
 * XREFs of sub_1800C23AC @ 0x1800C23AC
 * Callers:
 *     sub_1800C1E20 @ 0x1800C1E20 (sub_1800C1E20.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800C23AC(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &unk_18016DDC0, 38LL, (__int64 *)va);
}
