/*
 * XREFs of MiLogCombinedPteDelete @ 0x14055D314
 * Callers:
 *     MiDecrementCombinedPte @ 0x140367074 (MiDecrementCombinedPte.c)
 *     MiDemoteCombinedPte @ 0x14036B410 (MiDemoteCombinedPte.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogCombinedPteDelete(__int64 a1)
{
  _QWORD v2[2]; // [rsp+30h] [rbp-38h] BYREF
  int v3; // [rsp+40h] [rbp-28h]
  int v4; // [rsp+44h] [rbp-24h]
  _QWORD *v5; // [rsp+48h] [rbp-20h] BYREF
  int v6; // [rsp+50h] [rbp-18h]
  int v7; // [rsp+54h] [rbp-14h]

  v4 = 0;
  v5 = v2;
  v7 = 0;
  v2[0] = a1;
  v2[1] = a1;
  v3 = -1;
  v6 = 24;
  return EtwTraceKernelEvent((int)&v5, 1, 0x28000001u, 591, 289413890);
}
