/*
 * XREFs of sub_1800823D0 @ 0x1800823D0
 * Callers:
 *     sub_18007BF28 @ 0x18007BF28 (sub_18007BF28.c)
 *     sub_1800820A0 @ 0x1800820A0 (sub_1800820A0.c)
 *     sub_180082200 @ 0x180082200 (sub_180082200.c)
 * Callees:
 *     sub_180008CE8 @ 0x180008CE8 (sub_180008CE8.c)
 *     sub_1800097FC @ 0x1800097FC (sub_1800097FC.c)
 *     sub_180009854 @ 0x180009854 (sub_180009854.c)
 */

__int64 __fastcall sub_1800823D0(__int64 a1)
{
  __int64 v2; // rcx

  sub_180009854(*(_QWORD *)a1);
  v2 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 84) = 0;
  sub_1800097FC(v2);
  sub_180008CE8((_QWORD *)a1, 1);
  TpWaitForWork(*(_QWORD *)(a1 + 64), 0LL);
  return sub_180082424(a1, 0LL);
}
