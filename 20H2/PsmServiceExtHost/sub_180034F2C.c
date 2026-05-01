/*
 * XREFs of sub_180034F2C @ 0x180034F2C
 * Callers:
 *     sub_180015E80 @ 0x180015E80 (sub_180015E80.c)
 *     sub_180021CC4 @ 0x180021CC4 (sub_180021CC4.c)
 *     StartAddress @ 0x18003E530 (StartAddress.c)
 *     sub_180074BB0 @ 0x180074BB0 (sub_180074BB0.c)
 *     sub_180076240 @ 0x180076240 (sub_180076240.c)
 * Callees:
 *     sub_180034F98 @ 0x180034F98 (sub_180034F98.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_180034F2C(__int64 a1, int a2, void *a3, __int64 a4)
{
  int v4; // edi
  __int64 result; // rax

  v4 = (int)a3;
  memset(a3, 0, 0x80uLL);
  sub_180034F98(a1, a2, a2 + 56, v4, a4);
  result = 0LL;
  *(_WORD *)(a1 + 188) = 0;
  return result;
}
