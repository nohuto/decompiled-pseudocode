/*
 * XREFs of sub_18002DC40 @ 0x18002DC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002DC40(__int64 a1, unsigned int a2, _OWORD *a3)
{
  _DWORD *v3; // rbx
  __int64 v4; // r14
  RTL_SRWLOCK *v5; // rsi
  unsigned int v6; // edi
  int v9; // ebp
  __int64 v10; // rax

  v3 = (_DWORD *)(a1 + 104);
  v4 = a2;
  v5 = (RTL_SRWLOCK *)(a1 + 112);
  v6 = 0;
  *a3 = 0LL;
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( SLODWORD(v5->Ptr) >= 0 )
      ++LODWORD(v5->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 112));
  }
  if ( (unsigned int)v4 < *(_DWORD *)(a1 + 72) )
  {
    v10 = *(_QWORD *)(a1 + 88);
    v9 = 0;
    *a3 = *(_OWORD *)(v10 + 16 * v4);
  }
  else
  {
    v9 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  if ( v3 )
  {
    if ( *v3 == 1 )
      --LODWORD(v5->Ptr);
    else
      ReleaseSRWLockShared(v5);
  }
  if ( v9 < 0 )
    return (unsigned int)v9;
  return v6;
}
