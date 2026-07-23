/*
 * XREFs of EtwpTraceFltIo @ 0x1405A9BC0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceFltIo(__int64 a1, int a2, unsigned int a3, __int16 a4)
{
  __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]

  v7 = 0;
  v5 = a1;
  v6 = a2;
  return EtwTraceKernelEvent((int)&v5, 1, a3, a4, 5249283);
}
