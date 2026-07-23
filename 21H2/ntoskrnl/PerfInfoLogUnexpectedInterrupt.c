/*
 * XREFs of PerfInfoLogUnexpectedInterrupt @ 0x1405AA670
 * Callers:
 *     KxIsrLinkage @ 0x140401D20 (KxIsrLinkage.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall PerfInfoLogUnexpectedInterrupt(int a1)
{
  int *v2; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+38h] [rbp-20h]
  int v4; // [rsp+3Ch] [rbp-1Ch]
  int v5; // [rsp+60h] [rbp+8h] BYREF

  v5 = a1;
  v4 = 0;
  v2 = &v5;
  v3 = 2;
  return EtwTraceKernelEvent((int)&v2, 1, 0x20004000u, 3932, 4196866);
}
