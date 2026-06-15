/*
 * XREFs of sub_18000A7FC @ 0x18000A7FC
 * Callers:
 *     sub_18000B460 @ 0x18000B460 (sub_18000B460.c)
 * Callees:
 *     <none>
 */

ULONG sub_18000A7FC(TRACEHANDLE a1, __int64 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return TraceMessage(a1, 0x2Bu, &MessageGuid, 0xEu, &v5, 4LL, va, 8LL, 0LL);
}
