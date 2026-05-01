/*
 * XREFs of sub_18002F2E0 @ 0x18002F2E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180030348 @ 0x180030348 (sub_180030348.c)
 */

__int64 __fastcall sub_18002F2E0(_QWORD *a1, bool *a2)
{
  __int64 v4; // rbx
  RTL_SRWLOCK *v5; // rdi
  unsigned int v6; // esi
  bool v7; // zf
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h]

  *a2 = 0;
  v4 = a1[8] + 160LL;
  v10 = v4;
  v5 = (RTL_SRWLOCK *)(v4 + 8);
  if ( *(_DWORD *)v4 == 1 )
  {
    if ( SLODWORD(v5->Ptr) >= 0 )
      ++LODWORD(v5->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(v4 + 8));
  }
  if ( *(_QWORD *)(a1[8] + 176LL) == a1[10] )
  {
    v6 = 0;
    v9 = a1[9];
    if ( v9 )
    {
      sub_180030348(a1[8] + 72LL, &v9);
      v7 = v9 == 0;
      a1[9] = v9;
      *a2 = !v7;
    }
    else
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    v4 = v10;
  }
  else
  {
    v6 = -2147483636;
    RoOriginateError(2147483660LL, 0LL);
  }
  if ( v4 )
  {
    if ( *(_DWORD *)v4 == 1 )
      --LODWORD(v5->Ptr);
    else
      ReleaseSRWLockShared(v5);
  }
  return v6;
}
