/*
 * XREFs of EtwTraceProcessTerminate @ 0x14035974C
 * Callers:
 *     PspTerminateProcess @ 0x140709B44 (PspTerminateProcess.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

void __fastcall EtwTraceProcessTerminate(__int64 a1)
{
  int v1; // eax
  int v2; // [rsp+30h] [rbp-28h] BYREF
  int *v3; // [rsp+38h] [rbp-20h] BYREF
  int v4; // [rsp+40h] [rbp-18h]
  int v5; // [rsp+44h] [rbp-14h]

  v1 = *(_DWORD *)(a1 + 1088);
  v5 = 0;
  v2 = v1;
  v4 = 4;
  v3 = &v2;
  EtwTraceKernelEvent((__int64)&v3, 1u, 1u, 0x30Bu, 0x501902u);
}
