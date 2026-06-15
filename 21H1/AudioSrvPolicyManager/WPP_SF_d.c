/*
 * XREFs of WPP_SF_D @ 0x18002AF90
 * Callers:
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18002BC3C (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x180030848 (-TS_ServiceStart@@YAXXZ.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_D(TRACEHANDLE a1, USHORT a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return TraceMessage(a1, 0x2Bu, &WPP_e1a7a5e290533704050c869bb9bcb4b5_Traceguids, a2, &v5, 4LL, 0LL);
}
