/*
 * XREFs of sub_180011F14 @ 0x180011F14
 * Callers:
 *     sub_180046297 @ 0x180046297 (sub_180046297.c)
 *     unknown_libname_42 @ 0x180046361 (unknown_libname_42.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180011F14(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rax
  RTL_SRWLOCK *v3; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v3 = v1 + 1;
    if ( LODWORD(v1->Ptr) == 1 )
      LODWORD(v3->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v3);
    *a1 = 0LL;
  }
}
