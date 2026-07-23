/*
 * XREFs of MiLogPerfMemoryEvent @ 0x140530840
 * Callers:
 *     MiLogMapFileEvent @ 0x1408C48A8 (MiLogMapFileEvent.c)
 *     MiLogMemResetInfo @ 0x1408C6D4C (MiLogMemResetInfo.c)
 *     MiLogSectionObjectEvent @ 0x1408C7AF0 (MiLogSectionObjectEvent.c)
 *     MiLogVirtualRotateEvent @ 0x1408C8794 (MiLogVirtualRotateEvent.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogPerfMemoryEvent(__int16 a1, unsigned int a2, __int64 a3, int a4, int a5)
{
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+3Ch] [rbp-1Ch]

  v8 = 0;
  v6 = a3;
  v7 = a4;
  return EtwTraceKernelEvent((int)&v6, 1, a2, a1, a5 | 0x11000200u);
}
