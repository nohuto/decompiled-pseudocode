/*
 * XREFs of sub_180031B60 @ 0x180031B60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180032430 @ 0x180032430 (sub_180032430.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180031B60(__int64 a1, bool *a2)
{
  RTL_SRWLOCK *v3; // rcx
  int v5; // edi
  __int64 v6; // rcx
  RTL_SRWLOCK *v7; // rcx
  char v9; // [rsp+30h] [rbp+8h] BYREF

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
  {
    if ( !*(_QWORD *)(a1 + 88) )
    {
      v5 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 88) + 64LL))(*(_QWORD *)(a1 + 88), &v9);
      if ( v5 >= 0 )
      {
        if ( !v9 )
        {
          v6 = *(_QWORD *)(a1 + 88);
          if ( v6 )
          {
            *(_QWORD *)(a1 + 88) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
          }
          v5 = sub_180032430(a1);
        }
        if ( v5 >= 0 )
          *a2 = *(_QWORD *)(a1 + 88) != 0LL;
      }
    }
  }
  v7 = (RTL_SRWLOCK *)(a1 + 72);
  if ( *(_DWORD *)(a1 + 64) == 1 )
    LODWORD(v7->Ptr) += 0x10000000;
  else
    ReleaseSRWLockExclusive(v7);
  return (unsigned int)v5;
}
