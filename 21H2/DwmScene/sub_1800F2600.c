/*
 * XREFs of sub_1800F2600 @ 0x1800F2600
 * Callers:
 *     sub_1800F1B44 @ 0x1800F1B44 (sub_1800F1B44.c)
 *     sub_1800F2044 @ 0x1800F2044 (sub_1800F2044.c)
 *     sub_1800F27BC @ 0x1800F27BC (sub_1800F27BC.c)
 * Callees:
 *     sub_1800F1374 @ 0x1800F1374 (sub_1800F1374.c)
 */

unsigned __int64 __fastcall sub_1800F2600(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 2;
  if ( *(_DWORD *)(a1 + 1172) )
    v1 = ~(*(unsigned int *)(a1 + 1172) - 1LL) & (v1 + *(unsigned int *)(a1 + 1172) - 1LL);
  return sub_1800F1374((__int64 *)(a1 + 80), v1);
}
