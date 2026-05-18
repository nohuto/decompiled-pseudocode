/*
 * XREFs of sub_180121E6C @ 0x180121E6C
 * Callers:
 *     sub_1800918B0 @ 0x1800918B0 (sub_1800918B0.c)
 *     sub_18009A240 @ 0x18009A240 (sub_18009A240.c)
 *     sub_1800E278C @ 0x1800E278C (sub_1800E278C.c)
 *     sub_1800F0BB0 @ 0x1800F0BB0 (sub_1800F0BB0.c)
 *     sub_18010B2A4 @ 0x18010B2A4 (sub_18010B2A4.c)
 * Callees:
 *     sub_180121C74 @ 0x180121C74 (sub_180121C74.c)
 */

__int64 __fastcall sub_180121E6C(__int64 a1)
{
  __int64 result; // rax

  *(_OWORD *)a1 = 0LL;
  sub_180121C74(a1);
  result = a1;
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)a1 + 16LL), 2);
  return result;
}
