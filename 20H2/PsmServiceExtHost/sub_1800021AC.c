/*
 * XREFs of sub_1800021AC @ 0x1800021AC
 * Callers:
 *     sub_180002080 @ 0x180002080 (sub_180002080.c)
 * Callees:
 *     sub_180035EEC @ 0x180035EEC (sub_180035EEC.c)
 */

__int64 __fastcall sub_1800021AC(__int64 a1)
{
  __int64 result; // rax

  sub_180035EEC();
  *(_QWORD *)a1 = off_180088000;
  *(_QWORD *)(a1 + 1296) = 0LL;
  *(_QWORD *)(a1 + 1304) = 0LL;
  *(_QWORD *)(a1 + 1312) = a1 + 1312;
  *(_QWORD *)(a1 + 1320) = a1 + 1312;
  *(_QWORD *)(a1 + 1328) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 1336) = 0LL;
  *(_QWORD *)(a1 + 1344) = 0LL;
  *(_DWORD *)(a1 + 1352) = 0;
  return result;
}
