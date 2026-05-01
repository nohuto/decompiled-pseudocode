/*
 * XREFs of sub_18002D310 @ 0x18002D310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002D310(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  RTL_SRWLOCK *v5; // rdi
  bool v6; // zf
  RTL_SRWLOCK *v7; // rcx
  RTL_SRWLOCK *v8; // rcx

  v2 = 0;
  *a2 = 0;
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
    *a2 = *(_DWORD *)(a1 + 88);
    if ( v5 )
    {
      v8 = v5 + 1;
      if ( LODWORD(v5->Ptr) == 1 )
        --LODWORD(v8->Ptr);
      else
        ReleaseSRWLockShared(v8);
    }
  }
  else
  {
    v2 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
  }
  return v2;
}
