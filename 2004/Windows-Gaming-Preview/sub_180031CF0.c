/*
 * XREFs of sub_180031CF0 @ 0x180031CF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180032430 @ 0x180032430 (sub_180032430.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180031CF0(__int64 a1, __int64 a2)
{
  RTL_SRWLOCK *v4; // rcx
  int v5; // edi
  RTL_SRWLOCK *v6; // rcx

  v4 = (RTL_SRWLOCK *)(a1 + 72);
  if ( *(_DWORD *)(a1 + 64) == 1 )
  {
    if ( !LODWORD(v4->Ptr) )
      LODWORD(v4->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive(v4);
  }
  v5 = sub_180032430(a1);
  if ( v5 >= 0 )
  {
    if ( !*(_QWORD *)(a1 + 88) )
    {
      v5 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v5 >= 0 )
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 48LL))(*(_QWORD *)(a1 + 88), a2);
  }
  v6 = (RTL_SRWLOCK *)(a1 + 72);
  if ( *(_DWORD *)(a1 + 64) == 1 )
    LODWORD(v6->Ptr) += 0x10000000;
  else
    ReleaseSRWLockExclusive(v6);
  return (unsigned int)v5;
}
