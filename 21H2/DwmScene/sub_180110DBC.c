/*
 * XREFs of sub_180110DBC @ 0x180110DBC
 * Callers:
 *     sub_18012FD0B @ 0x18012FD0B (sub_18012FD0B.c)
 * Callees:
 *     sub_18006B3C4 @ 0x18006B3C4 (sub_18006B3C4.c)
 */

__int64 __fastcall sub_180110DBC(__int64 a1, __int64 a2)
{
  **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
  --*(_QWORD *)(a1 + 16);
  sub_18006B3C4((__int64 *)(a2 + 16), 0);
  return j_j__o_free(a2);
}
