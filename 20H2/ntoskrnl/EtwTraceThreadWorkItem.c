/*
 * XREFs of EtwTraceThreadWorkItem @ 0x1405A6990
 * Callers:
 *     IopProcessWorkItem @ 0x140243E50 (IopProcessWorkItem.c)
 *     ExpWorkerThread @ 0x14028E4C0 (ExpWorkerThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140313A28 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ExIsSafeWorkItem @ 0x1403DB3B0 (ExIsSafeWorkItem.c)
 */

void __fastcall EtwTraceThreadWorkItem(struct _KTHREAD *(__fastcall *a1)(__int64 a1), unsigned __int16 a2)
{
  struct _KTHREAD *(__fastcall *v3)(__int64); // [rsp+30h] [rbp-28h] BYREF
  struct _KTHREAD *(__fastcall **v4)(__int64); // [rsp+38h] [rbp-20h] BYREF
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]

  v3 = a1;
  if ( a1 != IopProcessWorkItem && !ExIsSafeWorkItem((__int64 (__fastcall *)())a1) )
  {
    v6 = 0;
    v4 = &v3;
    v5 = 8;
    EtwTraceKernelEvent((__int64)&v4, 1u, 0x48000000u, a2, 0x11501902u);
  }
}
