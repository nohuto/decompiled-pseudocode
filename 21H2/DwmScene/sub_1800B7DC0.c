/*
 * XREFs of sub_1800B7DC0 @ 0x1800B7DC0
 * Callers:
 *     sub_1800B93FC @ 0x1800B93FC (sub_1800B93FC.c)
 * Callees:
 *     sub_1800B7DE8 @ 0x1800B7DE8 (sub_1800B7DE8.c)
 */

__int64 __fastcall sub_1800B7DC0(__int64 a1)
{
  __int64 result; // rax

  result = sub_1800B7DE8();
  *(_DWORD *)(a1 + 144) = 4;
  return result;
}
