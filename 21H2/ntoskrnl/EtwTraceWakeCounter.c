/*
 * XREFs of EtwTraceWakeCounter @ 0x140936A78
 * Callers:
 *     PspChargeJobWakeCounter @ 0x140681A78 (PspChargeJobWakeCounter.c)
 *     PspChargeProcessWakeCounter @ 0x1406D6270 (PspChargeProcessWakeCounter.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceWakeCounter(__int64 a1, __int16 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // r10d
  __int16 v6; // ax
  unsigned int v7; // r8d
  __int16 v8; // dx
  _QWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+40h] [rbp-28h]
  int v12; // [rsp+44h] [rbp-24h]
  _QWORD *v13; // [rsp+48h] [rbp-20h] BYREF
  int v14; // [rsp+50h] [rbp-18h]
  int v15; // [rsp+54h] [rbp-14h]

  v5 = a3;
  if ( a3 <= 0 )
  {
    if ( !a3 )
    {
      v6 = 848;
      v7 = -2147483136;
      goto LABEL_7;
    }
    v6 = 832;
  }
  else
  {
    v6 = 816;
  }
  v7 = -2147475456;
LABEL_7:
  v8 = v6 + a2;
  v10[0] = a1;
  v10[1] = a5;
  v12 = v5;
  if ( a4 )
    v11 = *(_DWORD *)(a4 + 1088);
  else
    v11 = -1;
  v15 = 0;
  v13 = v10;
  v14 = 24;
  return EtwTraceKernelEvent((int)&v13, 1, v7, v8, 5249282);
}
