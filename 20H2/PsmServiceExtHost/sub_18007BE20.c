/*
 * XREFs of sub_18007BE20 @ 0x18007BE20
 * Callers:
 *     sub_1800433B0 @ 0x1800433B0 (sub_1800433B0.c)
 *     sub_180044070 @ 0x180044070 (sub_180044070.c)
 *     sub_180044770 @ 0x180044770 (sub_180044770.c)
 *     sub_18007BF28 @ 0x18007BF28 (sub_18007BF28.c)
 *     sub_180082424 @ 0x180082424 (sub_180082424.c)
 *     sub_1800824A8 @ 0x1800824A8 (sub_1800824A8.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18007BE20(_QWORD *a1)
{
  return sub_18003CF94(
           (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(a1[97] + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 120)
                      + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
         - 40,
           0,
           a1);
}
