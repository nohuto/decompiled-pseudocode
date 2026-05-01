/*
 * XREFs of sub_180034D68 @ 0x180034D68
 * Callers:
 *     sub_180034B80 @ 0x180034B80 (sub_180034B80.c)
 *     sub_180034C50 @ 0x180034C50 (sub_180034C50.c)
 *     sub_180034CD8 @ 0x180034CD8 (sub_180034CD8.c)
 *     sub_18003C5E0 @ 0x18003C5E0 (sub_18003C5E0.c)
 * Callees:
 *     sub_180034D90 @ 0x180034D90 (sub_180034D90.c)
 */

signed __int64 __fastcall sub_180034D68(__int64 a1)
{
  unsigned __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
  sub_180034D90(a1);
  return sub_1800274E0((_QWORD *)(v1 - 40));
}
