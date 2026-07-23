/*
 * XREFs of EtwTraceJobRemoveProcess @ 0x1409360A8
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x14067FFF8 (PspRemoveProcessFromJobChain.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceJobRemoveProcess(__int64 a1, int a2, int a3)
{
  int v3; // r9d
  __int64 v4; // rax
  _QWORD v6[2]; // [rsp+30h] [rbp-40h] BYREF
  int v7; // [rsp+40h] [rbp-30h]
  int v8; // [rsp+44h] [rbp-2Ch]
  int v9; // [rsp+48h] [rbp-28h]
  int v10; // [rsp+4Ch] [rbp-24h]
  _QWORD v11[2]; // [rsp+50h] [rbp-20h] BYREF

  v6[0] = 0LL;
  v3 = 0;
  v6[1] = 0LL;
  if ( a1 && (v4 = *(_QWORD *)(a1 + 1296), v3 = *(_DWORD *)(a1 + 1088), v4) )
    v7 = *(_DWORD *)(v4 + 1236);
  else
    v7 = 0;
  v8 = v3;
  v9 = a2;
  v10 = a3;
  v11[0] = v6;
  v11[1] = 32LL;
  return EtwTraceKernelEvent((int)v11, 1, 0x80000u, 1828, 5249284);
}
