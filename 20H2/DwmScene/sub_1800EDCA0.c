/*
 * XREFs of sub_1800EDCA0 @ 0x1800EDCA0
 * Callers:
 *     sub_18008DDD8 @ 0x18008DDD8 (sub_18008DDD8.c)
 *     sub_18009027C @ 0x18009027C (sub_18009027C.c)
 *     sub_1800E4960 @ 0x1800E4960 (sub_1800E4960.c)
 *     sub_1800E6D90 @ 0x1800E6D90 (sub_1800E6D90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800EDCA0(__int64 a1, unsigned __int16 a2, int a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(result
            + 40LL * *(unsigned int *)(56LL * *(unsigned __int16 *)(a1 + 2LL * a2 + 128) + *(_QWORD *)(a1 + 56) + 40)
            + 32) = a3;
  return result;
}
