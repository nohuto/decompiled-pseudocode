/*
 * XREFs of sub_1800F3570 @ 0x1800F3570
 * Callers:
 *     sub_1800936A8 @ 0x1800936A8 (sub_1800936A8.c)
 *     sub_180095B4C @ 0x180095B4C (sub_180095B4C.c)
 *     sub_1800EA230 @ 0x1800EA230 (sub_1800EA230.c)
 *     sub_1800EC660 @ 0x1800EC660 (sub_1800EC660.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F3570(__int64 a1, unsigned __int16 a2, int a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(result
            + 40LL * *(unsigned int *)(56LL * *(unsigned __int16 *)(a1 + 2LL * a2 + 128) + *(_QWORD *)(a1 + 56) + 40)
            + 32) = a3;
  return result;
}
