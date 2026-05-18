/*
 * XREFs of sub_1800D2634 @ 0x1800D2634
 * Callers:
 *     sub_1800EC150 @ 0x1800EC150 (sub_1800EC150.c)
 *     sub_1800EC660 @ 0x1800EC660 (sub_1800EC660.c)
 *     sub_1800EF2E0 @ 0x1800EF2E0 (sub_1800EF2E0.c)
 *     sub_18010FA20 @ 0x18010FA20 (sub_18010FA20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D2634(int a1, int a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = 1048608LL;
  if ( a2 != 4 )
    v3 = 32LL;
  return a3 | ((__int64)a1 << 47) | v3;
}
