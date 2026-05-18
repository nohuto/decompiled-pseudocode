/*
 * XREFs of sub_1800F5898 @ 0x1800F5898
 * Callers:
 *     sub_1800A6C00 @ 0x1800A6C00 (sub_1800A6C00.c)
 *     sub_1800EBC80 @ 0x1800EBC80 (sub_1800EBC80.c)
 *     sub_180110800 @ 0x180110800 (sub_180110800.c)
 * Callees:
 *     sub_1800F2990 @ 0x1800F2990 (sub_1800F2990.c)
 */

int __fastcall sub_1800F5898(__int64 a1, _QWORD *a2, _OWORD *a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800F2990(*(_QWORD *)(a1 + 16), a2);
  return sub_1800F3DC0(a1, v5, a3);
}
