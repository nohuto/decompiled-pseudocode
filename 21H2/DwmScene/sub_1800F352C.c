/*
 * XREFs of sub_1800F352C @ 0x1800F352C
 * Callers:
 *     sub_1800936A8 @ 0x1800936A8 (sub_1800936A8.c)
 *     sub_1800EC660 @ 0x1800EC660 (sub_1800EC660.c)
 * Callees:
 *     sub_1800F2990 @ 0x1800F2990 (sub_1800F2990.c)
 */

__int64 __fastcall sub_1800F352C(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v5; // rdx
  __int64 result; // rax

  v5 = *(unsigned int *)(56LL * *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)sub_1800F2990(a1, a2) + 128)
                       + *(_QWORD *)(a1 + 56)
                       + 40);
  result = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(result + 40 * v5 + 32) = a3;
  return result;
}
