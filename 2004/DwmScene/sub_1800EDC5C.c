/*
 * XREFs of sub_1800EDC5C @ 0x1800EDC5C
 * Callers:
 *     sub_18008DDD8 @ 0x18008DDD8 (sub_18008DDD8.c)
 *     sub_1800E6D90 @ 0x1800E6D90 (sub_1800E6D90.c)
 * Callees:
 *     sub_1800ED0C0 @ 0x1800ED0C0 (sub_1800ED0C0.c)
 */

__int64 __fastcall sub_1800EDC5C(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v5; // rdx
  __int64 result; // rax

  v5 = *(unsigned int *)(56LL * *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)sub_1800ED0C0(a1, a2) + 128)
                       + *(_QWORD *)(a1 + 56)
                       + 40);
  result = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(result + 40 * v5 + 32) = a3;
  return result;
}
