/*
 * XREFs of sub_1800403DC @ 0x1800403DC
 * Callers:
 *     sub_18003F99C @ 0x18003F99C (sub_18003F99C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800403DC(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  return RtlInitializeSRWLock(a1 + 2);
}
