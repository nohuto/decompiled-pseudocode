/*
 * XREFs of IopPerfLogCallReturnEvent @ 0x14050846C
 * Callers:
 *     IopPerfCallDriver @ 0x140507F40 (IopPerfCallDriver.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall IopPerfLogCallReturnEvent(__int64 a1, int a2)
{
  __int64 v3; // [rsp+30h] [rbp-38h] BYREF
  int v4; // [rsp+38h] [rbp-30h]
  __int64 *v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  v3 = a1;
  v5 = &v3;
  v7 = 0;
  v4 = a2;
  v6 = 12;
  return EtwTraceKernelEvent((int)&v5, 1, 0x20000010u, 291, 4200450);
}
