/*
 * XREFs of sub_1800F58CC @ 0x1800F58CC
 * Callers:
 *     sub_1800EB690 @ 0x1800EB690 (sub_1800EB690.c)
 *     sub_1800EF3B0 @ 0x1800EF3B0 (sub_1800EF3B0.c)
 * Callees:
 *     sub_1800F2990 @ 0x1800F2990 (sub_1800F2990.c)
 */

int __fastcall sub_1800F58CC(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800F2990(*(_QWORD *)(a1 + 16), a2);
  return sub_1800F3E78(a1, v5, *(const void **)a3, (__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 6);
}
