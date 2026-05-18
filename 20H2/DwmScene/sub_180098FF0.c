/*
 * XREFs of sub_180098FF0 @ 0x180098FF0
 * Callers:
 *     sub_180014E00 @ 0x180014E00 (sub_180014E00.c)
 *     sub_180095F78 @ 0x180095F78 (sub_180095F78.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180098FF0(__int64 a1, __int64 a2)
{
  *(_OWORD *)(a1 + 88) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 16);
}
