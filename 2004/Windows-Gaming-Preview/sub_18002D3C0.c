/*
 * XREFs of sub_18002D3C0 @ 0x18002D3C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003022C @ 0x18003022C (sub_18003022C.c)
 */

__int64 __fastcall sub_18002D3C0(__int64 a1, __int64 a2, bool *a3)
{
  int v5; // esi
  _DWORD *v6; // rbx
  RTL_SRWLOCK *v7; // rdi
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  *a3 = 0;
  if ( *(_BYTE *)(a1 + 184) )
  {
    v6 = (_DWORD *)(a1 + 160);
    v7 = (RTL_SRWLOCK *)(a1 + 168);
    if ( *(_DWORD *)(a1 + 160) == 1 )
    {
      if ( SLODWORD(v7->Ptr) >= 0 )
        ++LODWORD(v7->Ptr);
    }
    else
    {
      AcquireSRWLockShared((PSRWLOCK)(a1 + 168));
    }
    v5 = sub_18003022C(a1 + 72, &v10, &v9);
    if ( v5 >= 0 )
      *a3 = v9 != 0;
    if ( v6 )
    {
      if ( *v6 == 1 )
        --LODWORD(v7->Ptr);
      else
        ReleaseSRWLockShared(v7);
    }
  }
  else
  {
    v5 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
  }
  return (unsigned int)v5;
}
