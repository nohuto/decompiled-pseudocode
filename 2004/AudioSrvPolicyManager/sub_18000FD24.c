/*
 * XREFs of sub_18000FD24 @ 0x18000FD24
 * Callers:
 *     sub_180012D98 @ 0x180012D98 (sub_180012D98.c)
 *     sub_180012EA0 @ 0x180012EA0 (sub_180012EA0.c)
 *     sub_180012FA8 @ 0x180012FA8 (sub_180012FA8.c)
 *     sub_18002633C @ 0x18002633C (sub_18002633C.c)
 *     sub_180027958 @ 0x180027958 (sub_180027958.c)
 * Callees:
 *     <none>
 */

ULONG sub_18000FD24(TRACEHANDLE a1, USHORT a2, const GUID *a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return TraceMessage(a1, 0x2Bu, a3, a2, &v5, 4LL, va, 4LL, 0LL);
}
