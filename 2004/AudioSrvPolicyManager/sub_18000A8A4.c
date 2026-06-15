/*
 * XREFs of sub_18000A8A4 @ 0x18000A8A4
 * Callers:
 *     sub_18000B610 @ 0x18000B610 (sub_18000B610.c)
 * Callees:
 *     <none>
 */

ULONG sub_18000A8A4(TRACEHANDLE a1, USHORT a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return TraceMessage(a1, 0x2Bu, &MessageGuid, a2, va, 8LL, va1, 4LL, 0LL);
}
