/*
 * XREFs of EtwTraceXSchedulerPriorityKickSend @ 0x14062E848
 * Callers:
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1403457BC (KiHvEnlightenedGuestPriorityKick.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall EtwTraceXSchedulerPriorityKickSend(int a1, int a2)
{
  _DWORD v2[2]; // [rsp+30h] [rbp-28h] BYREF
  _DWORD *v3; // [rsp+38h] [rbp-20h] BYREF
  int v4; // [rsp+40h] [rbp-18h]
  int v5; // [rsp+44h] [rbp-14h]

  v5 = 0;
  v2[0] = a1;
  v2[1] = a2;
  v3 = v2;
  v4 = 8;
  EtwTraceKernelEvent((__int64)&v3, 1u, 0xA0000020, 0xF75u, 0x400A02u);
}
