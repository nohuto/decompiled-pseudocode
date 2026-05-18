/*
 * XREFs of sub_1800B1E50 @ 0x1800B1E50
 * Callers:
 *     sub_1800B1154 @ 0x1800B1154 (sub_1800B1154.c)
 * Callees:
 *     sub_1800B05DC @ 0x1800B05DC (sub_1800B05DC.c)
 *     sub_1800B06CC @ 0x1800B06CC (sub_1800B06CC.c)
 *     sub_1800B07BC @ 0x1800B07BC (sub_1800B07BC.c)
 *     sub_1800B08AC @ 0x1800B08AC (sub_1800B08AC.c)
 *     sub_1800B099C @ 0x1800B099C (sub_1800B099C.c)
 *     sub_1800B0A8C @ 0x1800B0A8C (sub_1800B0A8C.c)
 *     sub_1800B0B7C @ 0x1800B0B7C (sub_1800B0B7C.c)
 */

int __fastcall sub_1800B1E50(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 496;
  sub_1800B08AC(a1 + 496);
  sub_1800B05DC(v1);
  sub_1800B07BC(v1);
  sub_1800B0B7C(v1);
  sub_1800B06CC(v1);
  sub_1800B0A8C(v1);
  sub_1800B099C(v1);
  return sub_1800B0C6C(v1);
}
