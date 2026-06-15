/*
 * XREFs of sub_1800216CC @ 0x1800216CC
 * Callers:
 *     sub_180021988 @ 0x180021988 (sub_180021988.c)
 *     sub_18002633C @ 0x18002633C (sub_18002633C.c)
 * Callees:
 *     <none>
 */

ULONG sub_1800216CC(TRACEHANDLE a1, USHORT a2, const GUID *a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return TraceMessage(a1, 0x2Bu, a3, a2, va, 8LL, 0LL);
}
