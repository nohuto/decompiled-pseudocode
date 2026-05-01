/*
 * XREFs of sub_180009BA8 @ 0x180009BA8
 * Callers:
 *     sub_180009A2C @ 0x180009A2C (sub_180009A2C.c)
 *     sub_180009B2C @ 0x180009B2C (sub_180009B2C.c)
 *     sub_18003CE24 @ 0x18003CE24 (sub_18003CE24.c)
 *     sub_18003F6E8 @ 0x18003F6E8 (sub_18003F6E8.c)
 *     sub_18003FC90 @ 0x18003FC90 (sub_18003FC90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180009BA8(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  a2[2] = 0LL;
  a2[3] = 0LL;
  a2[4] = 0LL;
  a2[5] = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  RtlInitializeSRWLock(a2 + 2);
  result = RtlInitializeConditionVariable(a2 + 4);
  a2[3] = a1;
  return result;
}
