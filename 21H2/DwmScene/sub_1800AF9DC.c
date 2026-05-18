/*
 * XREFs of sub_1800AF9DC @ 0x1800AF9DC
 * Callers:
 *     sub_18001FA88 @ 0x18001FA88 (sub_18001FA88.c)
 *     sub_1800AFA1C @ 0x1800AFA1C (sub_1800AFA1C.c)
 *     sub_1800AFAC8 @ 0x1800AFAC8 (sub_1800AFAC8.c)
 *     sub_1800B1804 @ 0x1800B1804 (sub_1800B1804.c)
 *     sub_180100170 @ 0x180100170 (sub_180100170.c)
 * Callees:
 *     sub_1800B2A3C @ 0x1800B2A3C (sub_1800B2A3C.c)
 */

__int64 __fastcall sub_1800AF9DC(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx

  v3 = a3;
  v5 = a2;
  sub_1800B2A3C();
  return ((v3 + 4 * v5) << 6) + a1 + 548;
}
