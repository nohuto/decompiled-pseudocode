/*
 * XREFs of EtwpSystemTraceWdf @ 0x1405A9900
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpSystemTraceWdf(__int64 a1, int a2, unsigned int a3, __int16 a4, unsigned __int8 a5)
{
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+3Ch] [rbp-1Ch]

  v8 = 0;
  v6 = a1;
  v7 = a2;
  return EtwTraceKernelEvent((int)&v6, 1, a3, a4, a5 | 0x401903u);
}
