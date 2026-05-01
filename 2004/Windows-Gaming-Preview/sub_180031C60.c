/*
 * XREFs of sub_180031C60 @ 0x180031C60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180032430 @ 0x180032430 (sub_180032430.c)
 */

__int64 __fastcall sub_180031C60(__int64 a1, bool *a2)
{
  RTL_SRWLOCK *v3; // rcx
  int v5; // edi
  RTL_SRWLOCK *v6; // rcx

  *a2 = 0;
  v3 = (RTL_SRWLOCK *)(a1 + 72);
  if ( *(_DWORD *)(a1 + 64) == 1 )
  {
    if ( !LODWORD(v3->Ptr) )
      LODWORD(v3->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive(v3);
  }
  v5 = sub_180032430(a1);
  if ( v5 >= 0 )
    *a2 = *(_QWORD *)(a1 + 88) != 0LL;
  v6 = (RTL_SRWLOCK *)(a1 + 72);
  if ( *(_DWORD *)(a1 + 64) == 1 )
    LODWORD(v6->Ptr) += 0x10000000;
  else
    ReleaseSRWLockExclusive(v6);
  return (unsigned int)v5;
}
