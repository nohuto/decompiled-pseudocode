/*
 * XREFs of EtwpPmcInterrupt @ 0x1405A9330
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpPmcInterrupt(__int64 a1, __int16 a2)
{
  unsigned __int64 v2; // r8
  int v3; // eax
  unsigned __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  unsigned int CurrentRunTime; // [rsp+38h] [rbp-30h]
  __int16 v7; // [rsp+3Ch] [rbp-2Ch]
  __int16 v8; // [rsp+3Eh] [rbp-2Ah]
  _QWORD v9[2]; // [rsp+40h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 360);
  v9[1] = 16LL;
  CurrentRunTime = KeGetCurrentThread()[1].CurrentRunTime;
  v5 = v2;
  v8 = 0;
  v7 = a2;
  v9[0] = &v5;
  v3 = 34640386;
  if ( v2 > 0x7FFFFFFEFFFFLL )
    v3 = 34642434;
  return EtwTraceKernelEvent((int)v9, 1, 0x20000400u, 3887, v3);
}
