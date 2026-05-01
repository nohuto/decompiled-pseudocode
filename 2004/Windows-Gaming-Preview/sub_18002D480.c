/*
 * XREFs of sub_18002D480 @ 0x18002D480
 * Callers:
 *     sub_18002A7E0 @ 0x18002A7E0 (sub_18002A7E0.c)
 * Callees:
 *     sub_18000D490 @ 0x18000D490 (sub_18000D490.c)
 *     sub_180030810 @ 0x180030810 (sub_180030810.c)
 */

__int64 __fastcall sub_18002D480(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // esi
  RTL_SRWLOCK *v5; // rbx
  bool v6; // zf
  RTL_SRWLOCK *v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rdi
  volatile signed __int64 *v10; // rcx
  RTL_SRWLOCK *v11; // rcx
  volatile signed __int64 *v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( *(_BYTE *)(a1 + 184) )
  {
    v5 = (RTL_SRWLOCK *)(a1 + 160);
    v6 = *(_DWORD *)(a1 + 160) == 1;
    v7 = (RTL_SRWLOCK *)(a1 + 168);
    if ( v6 )
    {
      if ( SLODWORD(v7->Ptr) >= 0 )
        ++LODWORD(v7->Ptr);
    }
    else
    {
      AcquireSRWLockShared(v7);
    }
    v14 = a1;
    v4 = 0;
    v8 = (__int64 *)sub_180030810(&v13, &v14);
    v9 = *v8;
    *v8 = 0LL;
    v10 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      sub_18000D490(v10);
    }
    if ( v9 )
      *a2 = v9;
    else
      v4 = -2147024882;
    if ( v5 )
    {
      v11 = v5 + 1;
      if ( LODWORD(v5->Ptr) == 1 )
        --LODWORD(v11->Ptr);
      else
        ReleaseSRWLockShared(v11);
    }
  }
  else
  {
    v4 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
  }
  return v4;
}
