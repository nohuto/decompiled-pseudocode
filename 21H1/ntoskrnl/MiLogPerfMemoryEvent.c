/*
 * XREFs of MiLogPerfMemoryEvent @ 0x14052AAE0
 * Callers:
 *     MiLogMapFileEvent @ 0x1408BFDF8 (MiLogMapFileEvent.c)
 *     MiLogMemResetInfo @ 0x1408C229C (MiLogMemResetInfo.c)
 *     MiLogSectionObjectEvent @ 0x1408C3040 (MiLogSectionObjectEvent.c)
 *     MiLogVirtualRotateEvent @ 0x1408C3CE4 (MiLogVirtualRotateEvent.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

void __fastcall MiLogPerfMemoryEvent(unsigned __int16 a1, unsigned int a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]

  v7 = 0;
  v5 = a3;
  v6 = a4;
  EtwTraceKernelEvent((__int64)&v5, 1u, a2, a1, a5 | 0x11000200);
}
