/*
 * XREFs of sub_1800307D0 @ 0x1800307D0
 * Callers:
 *     sub_18003CAAB @ 0x18003CAAB (sub_18003CAAB.c)
 * Callees:
 *     sub_180019AE8 @ 0x180019AE8 (sub_180019AE8.c)
 */

BOOL __fastcall sub_1800307D0(__int64 a1, void *a2)
{
  **((_QWORD **)a2 + 1) = *(_QWORD *)a2;
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *((_QWORD *)a2 + 1);
  --*(_QWORD *)(a1 + 16);
  sub_180019AE8((void **)a2 + 3);
  return sub_180039D98(a2);
}
