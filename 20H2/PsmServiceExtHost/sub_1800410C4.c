/*
 * XREFs of sub_1800410C4 @ 0x1800410C4
 * Callers:
 *     sub_180014E9C @ 0x180014E9C (sub_180014E9C.c)
 *     sub_180040C14 @ 0x180040C14 (sub_180040C14.c)
 *     sub_180040EF0 @ 0x180040EF0 (sub_180040EF0.c)
 *     sub_180044710 @ 0x180044710 (sub_180044710.c)
 *     sub_1800630C4 @ 0x1800630C4 (sub_1800630C4.c)
 *     sub_18006D850 @ 0x18006D850 (sub_18006D850.c)
 *     sub_1800706FC @ 0x1800706FC (sub_1800706FC.c)
 *     sub_18007156C @ 0x18007156C (sub_18007156C.c)
 *     sub_1800746B0 @ 0x1800746B0 (sub_1800746B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800410C4(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  RtlAcquireSRWLockShared(a1 + 16);
  *a2 = a1;
  a2[2] = 0LL;
  a2[3] = 0LL;
  a2[1] = a1;
  result = *(_QWORD *)(a1 + 8);
  a2[3] = result;
  a2[2] = result;
  return result;
}
