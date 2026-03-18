/*
 * XREFs of _LockWindowStation @ 0x1C0124B60
 * Callers:
 *     NtUserLockWindowStation @ 0x1C0124AE0 (NtUserLockWindowStation.c)
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall LockWindowStation(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // r8
  int v4; // ecx
  _QWORD *i; // rax

  v2 = 0;
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    *(_DWORD *)(a1 + 64) |= 1u;
    v4 = *(_DWORD *)(a1 + 64);
    for ( i = *(_QWORD **)(a1 + 16); i; i = (_QWORD *)i[4] )
    {
      if ( i != grpdeskLogon && *(i - 5) )
      {
        v2 = 1;
        break;
      }
    }
    if ( (v4 & 8) != 0 )
      *(_DWORD *)(a1 + 64) = v4 | 2;
    return 2 - (unsigned int)(v2 != 0);
  }
  else
  {
    UserSetLastError(5LL, gpidLogon, v3);
    return 0LL;
  }
}
