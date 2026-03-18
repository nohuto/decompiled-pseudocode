/*
 * XREFs of EtwTraceWakeEvent @ 0x1409E2E08
 * Callers:
 *     PspSendWakeNotification @ 0x1406792F4 (PspSendWakeNotification.c)
 *     PspChargeProcessWakeCounter @ 0x1407AC250 (PspChargeProcessWakeCounter.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall EtwTraceWakeEvent(__int64 a1, __int16 a2)
{
  __int64 *v2; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+38h] [rbp-20h]
  int v4; // [rsp+3Ch] [rbp-1Ch]
  __int64 v5; // [rsp+60h] [rbp+8h] BYREF

  v5 = a1;
  v2 = &v5;
  v4 = 0;
  v3 = 8;
  EtwTraceKernelEvent((__int64)&v2, 1u, 0x80000400, a2 + 864, 0x501902u);
}
