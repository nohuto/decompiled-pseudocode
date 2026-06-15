/*
 * XREFs of sub_1800EE22C @ 0x1800EE22C
 * Callers:
 *     sub_180013120 @ 0x180013120 (sub_180013120.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800EE22C(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &unk_18015E5F0, 10LL, (__int64 *)va);
}
