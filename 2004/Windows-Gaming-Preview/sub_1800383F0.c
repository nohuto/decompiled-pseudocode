/*
 * XREFs of sub_1800383F0 @ 0x1800383F0
 * Callers:
 *     sub_180046C71 @ 0x180046C71 (sub_180046C71.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800383F0(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    ReleaseSRWLockExclusive(v2);
    *a1 = 0LL;
  }
}
