/*
 * XREFs of sub_18000A85C @ 0x18000A85C
 * Callers:
 *     sub_18000B610 @ 0x18000B610 (sub_18000B610.c)
 * Callees:
 *     <none>
 */

ULONG sub_18000A85C(TRACEHANDLE a1, USHORT a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return TraceMessage(a1, 0x2Bu, &MessageGuid, a2, va, 8LL, 0LL);
}
