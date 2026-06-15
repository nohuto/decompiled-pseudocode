/*
 * XREFs of sub_18002144C @ 0x18002144C
 * Callers:
 *     sub_18003C1F5 @ 0x18003C1F5 (sub_18003C1F5.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18002144C(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    ReleaseSRWLockExclusive(v2);
    *a1 = 0LL;
  }
}
