/*
 * XREFs of sub_180082368 @ 0x180082368
 * Callers:
 *     sub_180082200 @ 0x180082200 (sub_180082200.c)
 * Callees:
 *     sub_1800097FC @ 0x1800097FC (sub_1800097FC.c)
 *     sub_180009854 @ 0x180009854 (sub_180009854.c)
 */

__int64 __fastcall sub_180082368(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  sub_180009854(*(_QWORD *)a1);
  RtlQueryUnbiasedInterruptTime(&v4);
  v2 = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 84) = v4 / 0x2710;
  TpPostWork(v2);
  sub_1800097FC(*(_QWORD *)a1);
  return sub_180082424(a1, 1LL);
}
