/*
 * XREFs of WPP_SF_i @ 0x18000A85C
 * Callers:
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x18000B610 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_i(TRACEHANDLE a1, USHORT a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return TraceMessage(a1, 0x2Bu, &WPP_5deeced5c0273ddc6a386dd17acdfa68_Traceguids, a2, va, 8LL, 0LL);
}
