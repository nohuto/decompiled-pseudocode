/*
 * XREFs of sub_18011A25C @ 0x18011A25C
 * Callers:
 *     sub_180116EE8 @ 0x180116EE8 (sub_180116EE8.c)
 *     sub_1801174D4 @ 0x1801174D4 (sub_1801174D4.c)
 *     sub_18011D2C0 @ 0x18011D2C0 (sub_18011D2C0.c)
 * Callees:
 *     sub_1800210D8 @ 0x1800210D8 (sub_1800210D8.c)
 */

bool __fastcall sub_18011A25C(_QWORD *a1)
{
  LPVOID v2; // rax

  v2 = sub_1800210D8(0x68uLL);
  *a1 = v2;
  return v2 != 0LL;
}
