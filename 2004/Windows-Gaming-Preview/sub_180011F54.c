/*
 * XREFs of sub_180011F54 @ 0x180011F54
 * Callers:
 *     sub_18004624F @ 0x18004624F (sub_18004624F.c)
 *     sub_180046261 @ 0x180046261 (sub_180046261.c)
 *     sub_1800462A9 @ 0x1800462A9 (sub_1800462A9.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180011F54(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rax
  RTL_SRWLOCK *v3; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v3 = v1 + 1;
    if ( LODWORD(v1->Ptr) == 1 )
      --LODWORD(v3->Ptr);
    else
      ReleaseSRWLockShared(v3);
    *a1 = 0LL;
  }
}
