/*
 * XREFs of sub_1800E13F4 @ 0x1800E13F4
 * Callers:
 *     sub_1800E0A00 @ 0x1800E0A00 (sub_1800E0A00.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800E13F4(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &unk_18015E3E8, 58LL, (__int64 *)va);
}
