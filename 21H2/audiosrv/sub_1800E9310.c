/*
 * XREFs of sub_1800E9310 @ 0x1800E9310
 * Callers:
 *     sub_1800E7678 @ 0x1800E7678 (sub_1800E7678.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800E9310(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &unk_180171578, 10LL, (__int64 *)va);
}
