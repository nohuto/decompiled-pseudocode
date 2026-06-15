/*
 * XREFs of sub_1800BEB60 @ 0x1800BEB60
 * Callers:
 *     sub_1800BE690 @ 0x1800BE690 (sub_1800BE690.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800BEB60(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &unk_18016DA10, 12LL, (__int64 *)va);
}
